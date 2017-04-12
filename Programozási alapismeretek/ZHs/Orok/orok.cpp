#include<iostream>

using namespace std;

struct munka { ///Létrehozunk egy saját adatszerkezetet ami tartalmaz egy kezdő és egy vég napot
    int kezdo_nap;
    int veg_nap;
};

///Felsoroljuk a később használni kívánt függvényeket, majd a program alján le is írjuk őket. Itt csak a függvény szignatúrája szerepel
int dolgozott_napok_szama(munka guard); ///Protip: az őr változónév ékezet nélküli változata az or. NEM fog lefordulni mivel az egy logika művelet, tanulság angolul kell kódolni
bool szolgalatban_e (int nap, munka guard); ///A függvény visszaadja hogy az adott őr szolgálatban volt-e aznap

int main(){
    int napok_db; ///Bekérjük hány napon keresztül dolgoztak az őrök
    cout << "Add meg hany napon keresztul dolgoztak az orok: ";
    cin >> napok_db;
    int orok_db; ///Bekérjük hány őr dolgozott
    cout << "Add meg hany or dolgozott: ";
    cin >> orok_db;

    munka orok[orok_db]; ///Létrehozzuk a tömböt amiben tárolni fogjuk az adatokat. Minden őrhöz tartozni fog egy kezdő és egy vég nap amikor kezdte és amikor befejezte a munkát

    for(int i = 0; i < orok_db; i++){ ///Beolvassuk az adatokat, minden őrhöz egy sor tartozik ami tartalmazza melyik napon kezdett és melyik napon végzett
        cout << "Add meg a(z) " << i+1 << ". or kezdo napjat: ";
        cin >> orok[i].kezdo_nap; ///Először a kezdő nap
        cout << "Add meg a(z) " << i+1 << ". or utolso napjat: ";
        cin >> orok[i].veg_nap; ///Aztán a munka befejezésének napja jön (minden őrhöz kettő adat tartozik)
    }

    ///Meghatározzuk hány napot dolgozott a legtöbb napot dolgozott őr
    int legtobb_dolgozott_nap = dolgozott_napok_szama(orok[0]); ///Maximum kiválasztásnál az adathalmaz első értékéről indítjuk a keresést
    for(int i = 1; i < orok_db; i++){ ///i = 1, mivel a 0. (azaz az első) értéket már megnéztük és jelenleg az a maximum. Önmagával összehasonlítani nem lenne értelme
        if (dolgozott_napok_szama(orok[i]) > legtobb_dolgozott_nap) ///Ha a jelenlegi őr többet dolgozott mint az eddigi csúcstartó akkor ő válik a csúcstartóvá
            legtobb_dolgozott_nap = dolgozott_napok_szama(orok[i]);
    }
    cout << "A legtobb dolgozott nap szama: " << legtobb_dolgozott_nap; ///Kiírjuk az eredményt


    int dolgozott_db[napok_db]; ///Létrehozunk egy tömböt amiben azt tároljuk egy bizonyos napon hány őr volt szolgálatban éppen
    for(int i = 0; i <= napok_db; i++){ ///Végigmegyünk az összes napon és megszámoljuk hány őr dolgozott aznap
        int szolgalatban_db = 0; ///Alapvetően 0 őr volt szolgálatban, végig fogunk iterálni az őrök tombon és megnézzük hogy szolgálatban volt-e az őr. Ha igen, akkor növeljük a változót, így a végén megkapjuk az adott napon hány őr dolgozott
        for(int j = 0; j < orok_db; j++){
            if ( szolgalatban_e(i, orok[j]) )
                szolgalatban_db++;
        } ///Sikerült megszámolni hogy az adott napon hány őr dolgozott
       dolgozott_db[i] = szolgalatban_db; ///A tömbbe az adott nap szama -1 helyre elmentjük hogy hány őr dolgozott
    }

    ///Maximumkiválasztás x2, megvan a tömb amiben benne van hogy az adott napon hány őr dolgozott, keressük melyik napon dolgozott a legtöbb őr
    int nap_amelyen_a_legtobb_or_dolgozott = 0; ///Az indexe kell a napnak (a napot úgy kapjuk meg hoyg ehhez hozzáadunk 1-et mivel 0-tól indexelünk de 1-től számoljuk a napokat) Mivel az indexe kell a napnak így nem a 0. elem értékét tároljuk el hanem a 0. indexet
    for (int i = 1; i < napok_db; i++){ ///Végigiterálunk a napokon, az elsőtől kezdjük és nem a 0-tól mivel a tömb 0. elemét már kiválasztottuk maximumknak
        if (dolgozott_db[i] > dolgozott_db[nap_amelyen_a_legtobb_or_dolgozott]) ///Ha több ember dolgozott az aktuális napon mint az eddigi maximumon akkor ennek a napnak a száma lesz az új maximum
            nap_amelyen_a_legtobb_or_dolgozott = i;
    }
    cout << "\nA legtobb dolgozott or a " << nap_amelyen_a_legtobb_or_dolgozott+1 << ". napon volt\n"; ///Kiírjük melyik napon dolgozott a legtöbb őr (0-tól indexelés miatt kell a +1)



    ///Maximumkiválasztás pici csavvarral, most MINDEN maximum értéket megkeresünk nem csak a jobbról első, vagy az utolsó maximumot a listában (felhasználjuk hozzá az előző maximumkeresést)
    int napok_amelyeken_a_legtobb_or_dolgozott[napok_db]; ///Legrosszabb esetben minden nap ugyanannyi őr dolgozott, és ekkor az összes nap indexét tárolni kell, így ezért pont akkora tömböt foglalunk mint ahány nap van
    int max_darab = 0; ///Számoljuk hány darab maximum van jelenleg. (a tömb mérete fix, így egy külön változóba tároljuk hogy a tömbből mennyi a hasznos érték, azaz hány maximum van jelenleg benne)

    for (int i = 0; i < napok_db; i++){ ///Nem használjuk fel az első elemet, ez inkább egy feltételes maximum keresés, ahol tudjuk hogy a feltétel igaz lesz legalább egy elemnél
        if (dolgozott_db[i] == dolgozott_db[nap_amelyen_a_legtobb_or_dolgozott]){ ///Megnézzük hogy annyian dolgoztak-e az adott napon mint a maximum dolgozók egy napon
            napok_amelyeken_a_legtobb_or_dolgozott[max_darab] = i; ///Ha igen, akkor ez is egy maximum így eltároljuk az indexét
            max_darab++; ///És növeljük a maximum darabit hiszen egy új maximumot találtunk
        }
    }

    ///Kiírjuk az eredményeket
    cout << "\nA napok amelyen a legtobben dolgoztak: ";
    for(int i = 0; i < max_darab; i++){ ///Ahány maximumot találtunk annyit kell kiírni
        cout << napok_amelyeken_a_legtobb_or_dolgozott[i]+1 << ", "; ///(0-tól indexelés miatt kell a +1)
    }

    return 0;
}

int dolgozott_napok_szama(munka guard){ ///Visszaadja hogy egy őr hány napot dolgozott
    return guard.veg_nap - guard.kezdo_nap + 1; ///1-el növeljük a kapott értéket, mivel a végnap 23:59ig tart a munkanap. (azaz ha valaki az első nap kezd és a második nap fejezi be, akkor az első ÉS a második napon is dolgozott aztán a második nap este fejezte be, ha simán csak kivonnánk egymásból a kettőt 2-1 = 1 napot kapnánk az elvárt kettő helyett
}

bool szolgalatban_e (int nap, munka guard){
    return (nap >= guard.kezdo_nap && nap <= guard.veg_nap); ///Visszaadja hogy az adott őr dolgozott-e aznap. Ha a kezdőnapja az őrnek az adott napon vagy előtte volt, és a végnapja az adott napon vagy utána, akkor dolgozott
}