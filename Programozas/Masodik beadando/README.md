# Requirements

A programkód legyen (megjegyzésekkel, üres sorokkal, tabulátorral) jól tagolt, tükrözze az absztrakt program szerkezetét, amelyet programozási tételre visszavezetve kell elkészíteni. A program működése legyen öndokumentáló (derüljön ki a futtatás alatt, hogy mi a feladat, milyen feltételeknek megfelelő adatokat vár a felhasználótól, és az eredmény jól értelmezhetően jelenjen meg.) Forrásprogramját projektbe ágyazza bele! Fájlból olvasott bemenő adatok esetén az adatokat írja ki a konzolablakba! Csak az adatellenőrzéshez és a program ismételhető futtatásához használhat do-while()utasítást! Ha tömböt használ, akkor annak típusát vector-ként adja meg! Tagolja kódját alprogramok segítségével.

Minden olyan kódrészt, amely egy programozási tételből származik, kerüljön külön alprogramba. Váljon ketté az alprogramok deklarációja és definíciója. Kommentezze az alprogramokat a kódban (milyen részfeladatot old meg, melyek a bemenő adatai, melyek kimenő adatai). Készítsen automatikus egységtesztet minden olyan alprogramhoz, amelyik a feladat elvi megoldásában megjelenő valamelyik programozási tételre épül.

A főprogramban használt tétel nevezetes felsorolóra támaszkodjon. A nevezetes felsoroló típusát osztály segítségével valósítsa meg. Bontsa fel a programot több önálló fordítási egységre! Készítsen automatikus egységtesztet a szöveges állomány egy sorát feldolgozó alprogram vizsgálatára.

# Tasks

1. Egy büfében 10 féle üdítőt lehet vásárolni. Egy szekvenciális inputfájlban
tároljuk, hogy melyik napon, melyik üdítőből, mennyi fogyott el (dl-ben
megadva). Az állomány minden sorában egy-egy nap üdítőital
forgalmának adatait találjuk: az adott nap dátumát (string) és utána az
egyes üdítőfajtákból fogyasztott mennyiségeket (10 természetes szám)
sorközökkel és/vagy tabulátorjelekkel elválasztva. Feltehetjük, hogy az
állomány helyesen van kitöltve. Listázza ki a konzolra azon napok
dátumát, amikor nem volt olyan üdítő, amelyből legalább 10 liter ne
fogyott volna, valamint határozza meg ezen napok közül az egyik olyat
(annak dátumát), amikor a legkisebb volt a forgalom (egységár*mennyiség
értékek összege)! Az egyes üdítők egységárát (billentyűzetről) olvassa be a
program.
Például az input fájl adatai:
2010.01.01 0 10 20 4 30 7 25 14 24 12
2010.01.02 40 10 2 14 32 8 2 24 4 55
2010.01.03 11 0 0 44 31 27 2 4 21 0
2010.01.04 0 5 34 6 11 0 2 24 18 40
2. Egy büfében 10 féle üdítőt lehet vásárolni. Egy szekvenciális inputfájlban
tároljuk, hogy melyik napon, melyik üdítőből, mennyi fogyott el (dl-ben
megadva). Az állomány minden sorában egy-egy nap üdítőital
forgalmának adatait találjuk: az adott nap dátumát (string) és utána az
egyes üdítőfajtákból fogyasztott mennyiségeket (10 természetes szám)
sorközökkel és/vagy tabulátorjelekkel elválasztva. Feltehetjük, hogy az
állomány helyesen van kitöltve. Listázza ki a konzolra azoknak a napoknak
a dátumát, amikor az egyes üdítőkből elfogyasztott mennyiség egymástól
való eltérése nem volt nagyobb, mint 5 liter, és számolja meg, hogy ezen
napok között hány volt olyan, amikor a forgalom (egységár*mennyiség
értékek összege) 5000 Ft-nál nagyobb volt. Az egyes üdítők egységárát
(billentyűzetről) olvassa be a program.
Például az input fájl adatai:
2010.01.01 0 10 20 4 30 7 25 14 24 12
2010.01.03 40 10 2 14 32 8 2 24 4 55
2010.01.03 1 0 0 44 31 27 2 4 21 0
2010.01.03 0 5 34 6 11 0 2 24 18 40
3. Egy szöveges állományban tároljuk egy évfolyam ZH eredményét. Az
állomány minden sorában egy-egy hallgató adatait találjuk: a hallgató
EHA kódját és mellette a 6 db feladatra kapott pontszámát. Az adatok 
között szóköz(ök) és/vagy tabulátor jelek találhatók. Az egyes feladatokra
0-10-ig lehetett pontot kapni, ha valaki nem oldott meg egy feladatot,
akkor X-et írtak a pont helyére. (Ez csak jelzés a feladat hiányára.) Az
osztályzat az összpontszámtól függ: 20 ponttól kettes, 30-tól hármas, 40-
től négyes, ötventől ötös. Feltehetjük, hogy az állomány helyesen van
kitöltve. Listázza ki a hallgatók kódját és összpontszámát a konzolra,
valamint mondja meg, hány ötös, négyes, hármas, kettes és egyes jegy
született!
Például az input fájl adatai:
EEADAAI.ELTE X 9 6 0 10 5
MDADAAI.ELTE 10 9 7 8 10 9
NVADAAT.ELTE 9 10 10 8 9 X
4. Egy szöveges állományban tároljuk egy magasugró verseny eredményét.
Az állomány minden sorában egy-egy versenyző adatait találjuk: a
versenyző nevét (szóközök nélküli szöveg) és mellette azt, hogy az egyes
próbáknál mekkorát ugrott. A versenyen egy versenyző 6-szor
próbálkozhatott. Ha leverte a lécet, X a próba eredménye, ha kihagyta az
adott magasságot, akkor O. Feltehetjük, hogy az állomány helyesen van
kitöltve. Listázza ki azoknak a nevét a konzolra, akiknek csak egy sikeres
próbálkozása (150 cm-nél magasabb ugrása) volt, valamint adja meg a
legjobb ugrást teljesítő sportoló nevét és összes eredményét!
Például az input fájl adatai:
Nagy_Bela 120 X O 125 130 X
Kiss_Agoston 140 145 X 150 155 X
Toth_Pal 135 O 140 145 X 155
5. Egy vállalat portaszolgálatán feljegyzik a belépő és kilépő személyek
adatait. Belépéskor rögzítik az aktuális időpontot, a belépő nevét és
azonosítására szolgáló igazolványszámot, távozáskor pedig a fenti három
adat mellé kerül a kilépés időpontja. A napi adatokat azonosító szerint,
azon belül belépési idő szerint növekvően rendezve egy szöveges
állományban tárolják. Feltehetjük, hogy az állomány minden sorában
három vagy négy olyan sztringet találunk, amelyeknek belsejében nincs
elválasztó jel, ugyanakkor tetszőleges számú elválasztó jel határolja
azokat.
Például az input fájl adatai:
10:30 Gipsz_Jakab 1234567A 10:15
10:45 Gipsz_Jakab 1234567A 11:30
08:35 Gyanús_Móric 1x1x1x1x1x
08:35 Gyanús_Móric 1x1x1x1x1x 08:10
08:35 Gyanús_Móric 1x1x1x1x1x
08:45 Szer_Elek 33332222 09:15
Ebben állományban akkor tekinthető egy sor korrektnek, ha egyrészt olyan
kilépési időpont szerepel benne, amely későbbi, mint a belépés időpontja 
(ezeket sztring összehasonlítással ellenőrizheti), másrészt, amennyiben a
szóban forgó személy másodjára vagy sokadjára lép be, akkor a megelőző
sorban rögzített kilépési idő nem későbbi, mint az újabb belépés belépési
ideje. Listázzuk ki az állomány inkorrekt sorait, valamint számoljuk meg a
hibás sorok számát!
6. Egy vállalat portaszolgálatán feljegyzik a belépő és kilépő személyek
adatait. Belépéskor rögzítik az aktuális időpontot, a belépő nevét és
azonosítására szolgáló igazolványszámot, távozáskor pedig a fenti három
adat mellé kerül a kilépés időpontja. A napi adatokat azonosító szerint,
azon belül belépési idő szerint növekvően rendezve egy szöveges
állományban tárolják. Feltehetjük, hogy az állomány minden sorában
három vagy négy olyan sztringet találunk, amelyeknek belsejében nincs
elválasztó jel, ugyanakkor tetszőleges számú elválasztó jel határolja
azokat. Feltehetjük továbbá, hogy a rögzített adatokban nincs anomália,
azaz a kilépés időpontja későbbi a belépés időpontjánál, egy újabb belépés
időpontja későbbi a korábbi kilépési időpontnál, vagy ha egy személy még
nem távozott, akkor nem lehet újabb belépése.
Például az input fájl adatai:
10:30 Gipsz_Jakab 1234567A 10:45
10:45 Gipsz_Jakab 1234567A 11:30
08:35 Gyanús_Móric 1x1x1x1x1x
08:45 Szer_Elek 33332222 09:15
Listázza ki, hogy az egyes személyek mennyi időt töltöttek benn!
Mindenki annyiszor szerepeljen ezen a listán, ahányszor belépett, azaz nem
kell összegezni ugyanazon személy különböző terminusokban benn töltött
idejét. Aki még nem lépett ki, annál a benn töltött idő helyett azt írjuk:
NEM TÁVOZOTT. Számolja meg azokat a személyeket, akik jelenleg
benn vannak a vállalatnál (beléptek, de még nem távoztak)!
7. Egy vállalat portaszolgálatán feljegyzik a belépő és kilépő személyek
adatait. Belépéskor rögzítik az aktuális időpontot, a belépő nevét és
azonosítására szolgáló igazolványszámot, távozáskor pedig a fenti három
adat mellé kerül a kilépés időpontja. A napi adatokat azonosító szerint,
azon belül belépési idő szerint növekvően rendezve egy szöveges
állományban tárolják. Feltehetjük, hogy az állomány minden sorában
három vagy négy olyan sztringet találunk, amelyeknek belsejében nincs
elválasztó jel, ugyanakkor tetszőleges számú elválasztó jel határolja
azokat. Feltehetjük továbbá, hogy a rögzített adatokban nincs anomália,
azaz a kilépés időpontja későbbi a belépés időpontjánál, egy újabb belépés
időpontja későbbi a korábbi kilépési időpontnál, vagy ha egy személy még
nem távozott, akkor nem lehet újabb belépése.
Például az input fájl adatai:
10:30 Gipsz_Jakab 1234567A 10:45
10:45 Gipsz_Jakab 1234567A 11:30
08:35 Gyanús_Móric 1x1x1x1x1x
08:45 Szer_Elek 33332222 09:15
Listázza ki, hogy azokat a személyeket, akik jelenleg benn vannak a
vállalatnál (beléptek, de még nem távoztak)! Melyik személy
egyhuzamban eltöltött benntartózkodása volt a leghosszabb (figyelmen
kívül hagyva azokat, ahol nincs rögzítve a távozás)?
8. Egy szöveges állományban egy cég gépjárműveinek tankolásainál felvett
üzemanyag mennyiségét tároljuk literben. Az állomány minden sorában
egy-egy gépjármű adatait találjuk: a jármű rendszámát és mellette annyi
darab 0 és 80 közé eső számot, ahányszor tankoltak a járműbe. A
tankolások száma járművenként eltérő, sőt olyan jármű is lehet, amelybe
egyáltalán nem tankoltak. Az adatok között szóköz(ök) és/vagy tabulátor
jelek találhatók. Feltehetjük, hogy az állomány helyesen van kitöltve.
Melyik járműbe tankoltak legkevesebbszer! Listázza ki azon járművek
rendszámát, amelybe összesen 300 liternél többet tankoltak!
Például az input fájl adatai:
CEG-001 15 23 45 7
CEG-003 10 34 42
CEG-101 9 10 10 8 19 47
9. Egy szöveges állományban egy cég gépjárműveinek tankolásainál felvett
üzemanyag mennyiségét tároljuk literben. Az állomány minden sorában
egy-egy gépjármű adatait találjuk: a jármű rendszámát és mellette annyi
darab 0 és 80 közé eső számot, ahányszor tankoltak a járműbe. A
tankolások száma járművenként eltérő, sőt olyan jármű is lehet, amelybe
egyáltalán nem tankoltak. Az adatok között szóköz(ök) és/vagy tabulátor
jelek találhatók. Feltehetjük, hogy az állomány helyesen van kitöltve. Hány
olyan jármű van, amelybe egyáltalán nem tankoltak! Listázza ki azon
járművek rendszámát, amelybe átlagosan 20 liternél több került!
Például az input fájl adatai:
CEG-001 15 23 45 7
CEG-003 10 34 42
CEG-101 9 10 10 8 19 47
10. Egy szavazást több körzetben bonyolítottak le, ahol a jelöltek száma m
volt. Egy szöveges állományban rögzítették a szavazás eredményét. Egy
sorban szerepel az egyes körzetek eredménye: a körzet száma (pozitív
egész), a szavazásra jogosultak száma (természetes szám), sorban egymás
után az m jelöltre leadott szavazatok száma (természetes szám) és az
érvénytelen szavazatok száma (természetes szám). Az adatokat tetszőleges
számú elválasztó jel (szóköz, tabulátor jel) választhatja el. Írjon programot,
amely megadja, hogy érvényes volt-e a szavazás (azaz a jogosultaknak
több, mint fele szavazott-e), illetve mely körzetben voltak legaktívabbak a
választók, azaz hol mentek el a legnagyobb százalékban szavazni!
Minta adatok m=5 esetén. Az m értékét az állomány legelső sora
tartalmazza:
5
1 1548 342 359 611 103 28 3
2 2034 148 345 1290 68 158 8
3 925 345 63 384 30 102 0
4 1246 156 48 984 10 15 12
5 1950 220 212 831 412 240 2
6 3435 512 342 1215 548 330 5
7 4012 1500 136 1450 445 52 18
8 2320 366 257 1190 142 357 3
9 3100 366 155 1402 302 312 4
10 2699 148 338 1352 250 248 5
(körzet jogosult 1. 2. 3. 4. 5.
érvénytelen)
11. Egy szöveges állományban egy kurzusra jelentkezett hallgatók pluszmínusz
kis zárthelyin elért eredményeit tároljuk. Egy sorban szóközökkel
elválasztva szerepel a hallgató neve (sztring), Neptun kódja (sztring), és a
kis zh-k eredményei (+ vagy – karakterek). Írjon programot, amely
kilistázza az egyes hallgatók összesített plusz-mínusz eredményeit és
statisztikát készít arról, hogy hány hallgatóból hánynak sikerült teljesíteni a
követelményeket!
Például az input fájl adatai:
Gipsz Jakab ABCDEF + + – + + – + – – –
Kabor Bors Orsolya BCDEFG + + – + + – + – + +
12. Egy szöveges állományban egy kurzusra jelentkezett hallgatók
félévközben elért eredményeit tároljuk. Egy sorban szóközökkel
elválasztva szerepel a hallgató neve (sztring), Neptun kódja (sztring), a
plusz-mínusz kis zh-k összesített eredménye (egész szám), három papíros
zárthelyi eredménye (0 – ha nem írt, egyébként 1 és 5 közötti egész szám),
két géptermi zárthelyi eredménye (az első 0 és 5 közötti egész szám, a
második 0, 1, 3 vagy 5 értékű), két darab beadandó eredménye (0 és 5
közötti egész szám). Írjon programot, amely kilistázza az egyes hallgatók
gyakorlati jegyét úgy, hogy nem kap jegyet az, akinek a plusz-mínusz
eredménye negatív, a második és harmadik papíros zárthelyije nem
legalább elégséges, a második zárthelyije nem legalább 3, és a beadandói
közül az legalább az egyik 0. Egyébként a gyakorlati jegy a megszerzett
minősítések (ebbe a plusz-mínusz nem tartozik bele) számtani átlagának
kerekített értéke.
Például az input fájl adatai:
Gipsz Jakab ABCDEF -3 5 3 2 5 3 4 4
Kabor Bors Orsolya BCDEFG 10 5 4 4 5 5 5 5
Zabos Zsolt Zsombor CDEFGH 2 5 4 4 5 5 5 1
13. Vadászkutyák öt részvizsgából összeálló munkavizsgájának eredményeit
egy szöveges állományban tároljuk. Ennek egy sora tartalmazza a kutya
nevét, CHIP számát, és az öt szorzó-eredmény számpárt (0 és 5 közötti
számok). Az összpontszám rendre az öt szorzó-eredmény számpár
szorzatainak összegeként áll elő. Ha valamelyik részfeladat értéke 0, akkor
annak a kutyának nem sikerült a vizsgája. Listázza ki a sikeres vizsgát tett
kutyák nevét, CHIP számát! Melyik kutya érte el a legjobb eredményt a
vizsgán átment kutyák közül!
Például az input fájl adatai:
Erdőkerülő Nimród 12312312 4 3 4 2 4 5 4 5 4 1
(itt az összpontszám: 64)
Bársonyfülű Szimat 12345678 4 5 4 5 4 5 4 5 4 5
(itt az összpontszám: 100)
14. Vadászkutyák öt részvizsgából összeálló munkavizsgájának eredményeit
egy szöveges állományban tároljuk. Ennek egy sora tartalmazza a kutya
nevét, CHIP számát, és az öt szorzó-eredmény számpárt (0 és 5 közötti
számok). Az összpontszám rendre az öt szorzó-eredmény számpár
szorzatainak összegeként áll elő. Ha valamelyik részfeladat értéke 0, akkor
annak a kutyának nem sikerült a vizsgája. Listázza ki a sikertelen vizsgát
tett kutyák nevét, CHIP számát! Hány I. díjas (átment a vizsgán, és az
összpontszáma több, mint 85), hány II. díjas (átment a vizsgán, és
összpontszáma nagyobb, mint 70, de kevesebb, mint 86) kutya vett részt a
vizsgán?
Például az input fájl adatai:
Erdőkerülő Nimród 12312312 4 3 4 2 4 5 4 5 4 1
(itt az összpontszám: 64)
Bársonyfülű Szimat 12345678 4 5 4 5 4 5 4 5 4 5
(itt az összpontszám: 100)
15. Egy szöveges állományban a Formula 1 autóverseny egyik futamán
rögzítették a versenyzőknek néhány köridejét. Az állomány minden
sorában egy versenyző rövidített nevét (sztring), a csapatának akár több
tagból álló nevét (sztring), majd néhány (de legalább egy) egymás után
mért köridejét (kör sorszáma, utána szóköz, majd az idő MM:SS:TTT
alakú sztring formájában) tartalmazza szóközökkel és/vagy tabulátor
jelekkel elválasztva. Feltehetjük, hogy az állomány sorai helyesen vannak
kitöltve, ugyanaz a versenyző nem szerepelhet több sorban, de soronként
eltérő számú és sorszámozású köridők lehetnek, a kör sorszámok viszont
emelkedő sorrendben vannak.
Példa egy sorra:
Nico Rosberg Mercedes 4 01:22:234 5 01:21:891 6 01:21:234
Listázza ki azoknak a versenyzőknek a neveit, akik a megfigyelt
időszakban folyamatosan gyorsuló köridőket futottak (a köridők sztringes 
formában is összehasonlíthatóak), és adja meg mennyi volt a leggyorsabb
mért köridő!
16. Egy szöveges állományban a Formula 1 autóverseny egyik futamán
rögzítették a versenyzőknek néhány köridejét. Az állomány minden
sorában egy versenyző rövidített nevét (sztring), a csapatának akár több
tagból álló nevét (sztring), majd néhány (de legalább egy) egymás után
mért köridejét (kör sorszáma, utána szóköz, majd az idő MM:SS:TTT
alakú sztring formájában) tartalmazza szóközökkel és/vagy tabulátor
jelekkel elválasztva. Feltehetjük, hogy az állomány sorai helyesen vannak
kitöltve, ugyanaz a versenyző nem szerepelhet több sorban, de soronként
eltérő számú és sorszámozású köridők lehetnek, a kör sorszámok viszont
emelkedő sorrendben vannak.
Példa egy sorra:
Nico Rosberg Mercedes 4 01:22:234 5 01:21:891 6 01:21:234
Számolja meg, hogy hány versenyzőnek volt másfél percnél jobb körideje
(a köridők sztringes formában is összehasonlíthatóak), és adja meg ki
futotta a legjobb köridőt a 10. körben, feltéve, hogy volt a 10. körben mért
körideje!
17. Egy szöveges állományban a Formula 1 autóverseny egyik futamán
rögzítették a versenyzőknek néhány köridejét. Az állomány minden
sorában egy versenyző rövidített nevét (sztring), a csapatának akár több
tagból álló nevét (sztring), majd néhány (de legalább egy) egymás után
mért köridejét (kör sorszáma, utána szóköz, majd az idő MM:SS:TTT
alakú sztring formájában) tartalmazza szóközökkel és/vagy tabulátor
jelekkel elválasztva. Feltehetjük, hogy az állomány sorai helyesen vannak
kitöltve, ugyanaz a versenyző nem szerepelhet több sorban, de soronként
eltérő számú és sorszámozású köridők lehetnek, a kör sorszámok viszont
emelkedő sorrendben vannak.
Példa egy sorra:
Nico Rosberg Mercedes 4 01:22:234 5 01:21:891 6 01:21:234
Volt-e olyan versenyző, akinek minden mért köre másfél percnél rövidebb
volt (a köridők sztringes formában is összehasonlíthatóak)? Listázza ki
minden versenyző legjobb mért köridejét!
18. Egy szöveges állományban a Formula 1 autóverseny egyik futamán
rögzítették a versenyzőknek néhány köridejét. Az állomány minden
sorában egy versenyző rövidített nevét (sztring), a csapatának akár több
tagból álló nevét (sztring), majd néhány (de legalább egy) egymás után
mért köridejét (kör sorszáma, utána szóköz, majd az idő MM:SS:TTT
alakú sztring formájában) tartalmazza szóközökkel és/vagy tabulátor
jelekkel elválasztva. Feltehetjük, hogy az állomány sorai helyesen vannak
kitöltve, ugyanaz a versenyző nem szerepelhet több sorban, de soronként
eltérő számú és sorszámozású köridők lehetnek, a kör sorszámok viszont
emelkedő sorrendben vannak.
Példa egy sorra:
Nico Rosberg Mercedes 4 01:22:234 5 01:21:891 6 01:21:234
Melyik versenyzőnek volt a legtöbb másfél percnél jobb körideje (a
köridők sztringes formában is összehasonlíthatóak)? Átlagosan hány kört
teljesítettek a versenyzők?
19. Egy üzletlánc folyamatosan elemzi a törzsvásárlóinak vásárlási szokásait.
Egy szöveges állományban nyilvántartja, hogy a törzsvásárlók mit vettek
az elmúlt időszakban. Az állomány egy-egy sora egy-egy vásárlás adatait
tartalmazza: (most csak) a vásárlás ideje (EE:HH:NN:ÓÓ:PP formában), a
törzsvásárló kódja (4 karakter) és az általa egy alkalommal vásárolt áruk
(tételek) kódjai (8 karakter); ezek mind szóközökkel vagy tabulátor
jelekkel elválasztott sztringek.
Példa egy sorra:
15:05:28:10:35 0061 árukód21 árukód13 árukód13 árukód08 árukód21
Listázza ki azokat a vásárlásokat (időpont és vevőkód), amikor nem
vettek „árukód22”-es árut, és keresse meg az egyik olyan vásárlást is
(időpont és vevőkód), amikor a legkevesebb féle árut vásárolták, é adja
meg s azt is, hogy hányfélét!
20. Egy üzletlánc folyamatosan elemzi a törzsvásárlóinak vásárlási szokásait.
Egy szöveges állományban nyilvántartja, hogy a törzsvásárlók mit vettek
az elmúlt időszakban. Az állomány egy-egy sora egy-egy vásárlás adatait
tartalmazza: (most csak) a vásárlás ideje (EE:HH:NN:ÓÓ:PP formában), a
törzsvásárló kódja (4 karakter) és az általa egy alkalommal vásárolt áruk
(tételek) kódjai (8 karakter); ezek mind szóközökkel vagy tabulátor
jelekkel elválasztott sztringek.
Példa egy sorra:
15:05:28:10:35 0061 árukód21 árukód13 árukód13 árukód08 árukód21
Számolja meg azokat a vásárlásokat (időpont és vevőkód), amikor nem
vásároltak „árukód23”-as árut, és adja meg azt a vásárlást is (időpont és
vevőkód), amikor legtöbbféle árut vásárolták és adja meg azt is, hogy
hányfélét! 