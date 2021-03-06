#VERSION 0
;
HRV POPUP HELP
1 "Nema uputa poveznih s ovom stavkom.":
10 "Polje slu�i za identifikaciju naloga kojem dio pripada. U prvoj operaciji naloga ovo polje ima vrijednost 'nadre�eni zapis' (parent), a u ostalim operacijama je postavljeno na jedinstveni broj ili ime naloga.":
40 "This field is used to identify the part number.  Pressing the button will show all part numbers in the products data table. Selecting a part number will automatically change the name of the product.":
41 "Ovo polje sadr�i listu razli�itih statusa koji se mogu definirati za nalog. Vrijednosti su uzete iz tablice statusa naloga, gdje se prema potrebi mo�e dodati novi status. Uzorak (�rafura) trake operacije, postavljen u tablici statusa naloga za svaki status, mo�e se koristiti za definiranje uzorka trake operacije kad je operacija raspore�ena u sekvenceru.":
45 "This field is used to identify the part number.":
50 "This field is used to identify the name of the product. Use the button to select the name, the part number will be automatically changed.":
55 "This field is used to identify the name of the product.":
60 "Ovo polje sadr�i broj naloga ovog proizvoda. Broj naloga mo�e biti interni ili klijentov broj naloga. Broj naloga mora biti jedinstven.":
70 "This field can be used to contain notes about this order. It could be a reminder regarding due dates, or simply a message to the packer/assembler on the shop floor.":
75 "Opens a dialog showing all of the Attribute information for the operation.":
80 "Ovo polje definira prioritet posla koji �e biti kori�teni u sekvenceru. �to je manji broj, to je ve�i prioritet.Prioriteti mogu biti negativni; negativni prioritet je ve�i nego pozitivan. Npr. -100 je ve�i prioritet od -1, a 0 je ve�i prioritet od 10.":
90 "Polje postavlja broj operacije. To se koristi za zadavanje redoslijeda poslova u sekvenceru. Operacije s manjim brojem �e biti zavr�ene prije po�etka operacija s ve�im brojem. Ako postoje dvije operacije proizvoda s istim brojem, tada �e obje biti zavr�ene prije po�etka operacija s ve�im brojem.":
110 "Ovo je pisani opis ili ime operacije koja se izvodi (tako�er identificirano i brojem operacije).":
112 "Opens a dialog containing information about the Resource data assigned to this operation":
120 "Grupe pripreme su definirane u tablici Grupe pripreme (npr. Grupa pripreme 1, Grupa pripreme 2 itd.). Ove vrijednosti se koriste kao osi jedne od matrica sa pripremnim vremenima koja su ovisna o rasporedu. Ove matrice definiraju vremena promjene izme�u proizvoda razli�itih grupa pripreme (obi�no odre�ene u tablici resursa). Pojedine grupe pripreme se dodjeljuju proizvodima u tablici proizvoda, ali ova uobi�ajena vrijednost mo�e biti prepisana u datoteci glavnog rasporeda. ":
130 "This field identifies the group of valid resources that can carry out the current operation.":
140 "Ako je potrebno, ovo polje se mo�e koristiti za identifikaciju specifi�nog resursa koji treba izvr�iti operaciju. Ako je u tablici proizvoda ovo polje postavljeno na 'Odaberi iz grupe' tada se mo�e koristiti bilo koji resurs iz grupe. Ako se �eli prisiliti operaciju na specifi�ni resurs, tada je iz padaju�e liste potrebno odabrati zahtjevani resurs.":
150 "Ovo polje �e prikazati stvarni resurs na kojem �e se izvr�iti operacija. Ako nalog prethodno nije bio raspore�en, ovo polje �e biti postavljeno na 'Nespecificirano'. Ako je operacija ve� u�itana na plansku tablu, tada �e biti prikazan resurs na kojem �e se izvr�iti operacija.":
180 "Ovo polje se koristi za utvr�ivanje je li obradno vrijeme izra�unato kao vrijeme po seriji, kao vrijeme po komadu ili kao broj komada na sat. Ako je odabrano 'vrijeme po seriji', tada je vrijeme prikazano u polju ispod vrijeme potrebno za obradu svih komada u seriji serije. Ako je odabrano 'vrijeme po komadu' tada se vrijeme obrade u polju ispod mno�i s veli�inom serije. Ako je odabrano 'komada na sat', tada �e vrijeme obrade biti izra�unato direktno iz broja u seriji.":
220 "Trenutno je odabran tip procesnog vremena 'Vrijeme po komadu'. Za svaku stavku u ovom polju potrebno je upisati vrijeme operacije.":
230 "Trenutno je odabran tip procesnog vremena 'Vrijeme po seriji'. U ovo polje se mora upisati ukupno vrijeme operacije za seriju.":
240 "Trenutno je odabran tip procesnog vremena 'Cijena po satu'. U ovo polja se mora upisati koli�ina koja se mo�e proizvesti u satu.":
251 "Boja u ovom polju odre�uje sekvenceru prikaz sekcije trake gantograma u druk�ijoj boji. Boja ozna�ava traku ovisno o vrijednosti une�enoj u polja Koli�ina me�u�ar�e i Vrijeme me�u�ar�e.":
260 "Ovo polje specificira koli�inu naloga ili serije.":
270 "This field is used to specify the order or batch profit and can be used to influence sequencing when using the weighting rule.":
280 "This field will show the start time of the first operation in this order if the MakeSpan feature is enabled":
290 "This field will show the end time of the last operation in this order if the MakeSpan feature is enabled":
300 "This value determines the quantity that should be processed before the subsequent operation can be started. A value of Unspecified prevents operation overlapping":
360 "Koristi se za zadavanje datuma prije kojeg izrada ne mo�e po�eti. To npr. mo�e biti vrijeme kad �e materijal biti dostupan.":
370 "This field is to be used to establish the due date.The due date is used to highlight late items in the Sequencer and to prioritize job loading to the planning board if the 'due date' option is selected.":
380 "Odaberite ovaj prekida� kako bi raspore�iva�u ukazali da koristi vrijednosti po�etka i kraja kao fiksno zadane vrijednosti. Kad je postavljen, ovaj prekida� sprje�ava da se nalog ukloni s rasporeda. Zapravo, nalog je trajno fiksiran na planskoj tabli.":
390 "Tijekom raspore�ivanja, raspore�iva� postavlja ovo polje na vrijeme po�etka pripreme zadatka.":
400 "Tijekom raspore�ivanja u ovo polje se upisuje planirano vrijeme po�etka zadatka.":
410 "Tijekom raspore�ivanja raspore�iva� u ovo polje upisuje planirano vrijeme zavr�etka zadatka.":
420 "Set this toggle if you do not wish this job to be unallocated after selecting Unallocate All Jobs in the sequencer. This will lock the operation. This can also be achieved when using 'Highlight Locked Operations' locate mode in the Sequencer by pointing with the mouse at an operation (icon or bar in the overview), depressing the shift key on the keyboard and clicking with the left mouse button.":
421 "Operacije koje imaju uklju�en ovaj prekida� biti �e (prilikom automatskog raspore�ivanja operacija) ostavljene neraspore�ene u prozoru neraspore�enih operacija.":
430 "Omogu�ava pridjeljivanje korisni�ki definiranih svojstava proizvodu, npr. boja. U okviru specifi�nih karakteristika, zapisima atributa se dodjeljuju prioriteti, npr. 'bijeli' proizvodi mogu imati ve�i prioritet nego '�uti'. Te atribute koristi pravilo raspore�ivanja po preferiranom redosljedu, uzimaju�i u obzir sli�ne naloge koji slijede unutar zadanog perioda.":
440 "Unesi se podatak o zavr�enoj koli�ini, a u polje 'Vrijeme me�u�ar�e' unosi se vrijeme kada je zavr�en dio serije. Raspore�iva� �e automatski reizra�unati novo vrijeme zavr�etka preostalog dijela operacije.":
450 "Unosi se vrijeme kada je zavr�ena me�u�ar�a, a u polje 'Koli�ina me�u�ar�e' se unosi do tada zavr�ena koli�ina. Raspore�iva� �e automatski reizra�unati novo vrijeme zavr�etka preostalog dijela operacije.":
460 "Efektivno vrijeme op. je polje koje koristi podatke 'Kol. izme�u �ar�i' i 'Vrijeme izme�u �ar�i' za izra�un revidiranog vremena operacije baziranog na ovim informacijama. Za ispravan rad, 'Vrijeme izme�u �ar�i' i 'Koli�ina izme�u �ar�i' treba promijeniti u ure�iva�u prikazanom u sekvenceru. U suprotnom, 'Efektivno vrijeme op.' �e se promijeniti samo kod slijede�eg pokretanja sekvencera.":
474 "Koristi se za bilje�enje tro�ka stavke u trenutku ulaska u proces. Polje se mo�e koristiti za bilje�enje fiksnih tro�kova po stavci, kao npr. tro�ak podizvo�a�a i sl.":
476 "Koristi 'Tro�ak materijala po stavci' za odre�ivanje materijalnih tro�kova �ar�e na mjestu gdje tro�ak po stavci ulazi u proces.":
477 "Direktni tro�ak izrade u teku�em procesu.":
530 "Odre�uje vremenski horizont u kojem zadaci mogu biti grupirani za proizvodnju. Resurs koji zavr�ava operaciju na planskoj tabli �e od ove to�ke gledati onoliko unaprijed koliko je zadano u 'prozoru pogleda unaprijed'. Preferirani kriterij rasporeda, postavljen u tablici resursa, primjenjuje se za odabir zadataka �iji rok ulazi u taj vremeski horizont. Prozor pogleda unaprijed mo�e se postaviti prema pojedinim proizvodima u tablici proizvoda i mo�e se modificirati za pojedine naloge u glavnom rasporedu ili mo�e biti definirana kao globalna ruta u informacijama postavki konfiguracije.":
540 "Upisano u tablicu proizvoda, omogu�ava pristup Word dokumentu koji sadr�i informacije vezane uz proizvod. Dokumentu se tako�er mo�e pristupiti te se dokument mo�e ure�ivati preko ure�iva�a datoteke glavnog rasporeda.":
541 "Ovo polje opisuje napredak pojedine operacije. Postoje �etiri razli�ita stanja napretka: Nije zapo�eta, Priprema, U tijeku, Zavr�ena":
550 "Proizvodi mogu imati odre�ene karakteristike, koje su u rasporedu smje�tene u tablicu atributa. Te tablice definira korisnik i npr. tablica Atribut proizvoda 1 mo�e biti rezervirana za boju pri �emu se u pojedini red upisuju imena - crvena, zelena, itd. Atributi proizvoda mogu se odabrati u tablici proizvoda u polju odgovaraju�ih sli�nosti (Like To Like Match) kako bi se definirala sli�na pripremna vremena.":
560 "Koristi se za rangiranje prioriteta izme�u zapisa tablice atributa proizvoda 1, koji koristi odabir APS pravila redoslijeda.":
570 "Proizvodi mogu imati odre�ene karakteristike, koje su u rasporedu smje�tene u tablicu atributa. Te tablice definira korisnik i npr. tablica Atribut 2 mo�e biti rezervirana za materijale i u kojoj se u pojedini red upisuju imena - �elik, bronca, bakar, itd. Atributi proizvoda mogu se odabrati u tablici proizvoda u polju odgovaraju�ih sli�nosti (Like To Like Match) kako bi se definirala sli�na pripremna vremena.":
580 "Koristi se za rangiranje prioriteta izme�u zapisa tablice atributa proizvoda 2, koji koristi odabir APS pravila redoslijeda.":
590 "Proizvodi mogu imati odre�ene karakteristike, koje su u rasporedu smje�tene u tablicu atributa. Te tablice definira korisnik i npr. tablica Atribut 3 mo�e biti rezervirana za visine materijale i u kojoj se u pojedini red upisuju dimenzije - 16', 18', 20', 24', itd. Atributi proizvoda mogu se odabrati u tablici proizvoda u polju odgovaraju�ih sli�nosti (Like To Like Match) kako bi se definirala sli�na pripremna vremena.":
600 "Koristi se za rangiranje prioriteta izme�u zapisa tablice atributa proizvoda 3, koji koristi odabir APS pravila redoslijeda.":
602 "Polje ra�una trajanje kompletnog naloga, od pripreme prve operacije do kraja posljednje operacije naloga. ":
620 "Pravilo otpremanja po kojem se ra�una indeks koji je omjer preostalog vremena do roka isporuke i o�ekivanog vremena potrebnog za zavr�etak posla. Omjer manji od 1 govori da posao kasni, a ve�i od 1 da �e proizvod biti gotov prije planiranog vremena.":
815 "Ova opcija omogu�ava postavljanje vrijednosti pripremnog vremena i vremena operacije. Ujedno se koristi za a�uriranje napretka posla kroz proizvodni sustav.":
1020 "Specificira ime grupe resursa. Koristiti �e se za identifikaciju specifi�nih grupa resursa, sposobnih za izvo�enje sli�nih funkcija.":
1030 "Identificira va�e�e resurse u grupi resursa. Resurs mo�e biti �lan vi�e grupa.":
1060 "Kad je uklju�en, ovaj prekida� �e prikazati dijagram kori�tenja za grupu resursa u prozoru dijagrama.":
1070 "Ova boja �e se prikazati u dijagramu kori�tenja vidljivom u prozoru dijagrama.":
1080 "Dijagram kori�tenja, prikazan u prozoru dijagrama sekvencera, pokazati �e ovu boju kad kori�tenje prelazi dostupni broj sati resursa ili grupe resursa (ako je Max. sati iskori�tenja postavljeno na nespecificirano). Ako se u polje Max. sati iskori�tenja unese vrijednost, tada �e dijagram promijeniti boju sukladno toj vrijednosti.":
1090 "Dijagram kori�tenja, u prozoru dijagrama sekvencera, �e koristiti ovu boju za crtanje linije koja ozna�ava upotrebu pripremnog vremena u satima.":
2020 "Specificira ime pojedinog resursa.":
2023 "Tro�ak po satu rada resursa.":
2024 "Na tro�ak po satu resursa primjenjuje vrijednosti 'Faktor tro�ka %' iz zapisa glavnog kalendara (Master Calendar Records).":
2030 "Ovaj dijalo�ki okvir nosi informacije o na�inu prikaza resursa ili grupe resursa na pregledu sekvencera i u dijagramima kori�tenja.":
2040 "Mo�e se postaviti na Vidljivo, Minimizirano ili Isklju�eno. Koristi se kontrolu inicijalnog stanja prozora resursa prilikom pokretanja sekvencera. Obi�no je postavljeno na Minimizirano. Ako je Isklju�eno, resurs se ne�e koristiti u raspore�ivanju.":
2050 "Kontrolira vodoravnu (vremensku) skalu gantograma prozora resursa u sekvenceru. Mo�e varirati od minuta do tjedana po jedinici.":
2070 "Omogu�ava postavljanje kapaciteta resursa na Kona�ni, Beskona�ni ili Beskona�ni sa smjenskim uzorkom.":
2071 "Omogu�ava postavljanje kapaciteta resursa na Kona�ni, Beskona�ni ili Beskona�ni sa smjenskim uzorkom kada sekvencer radi u modu beskona�nih kapaciteta.":
2080 "Kontrolira vodoravnu (vremensku) skalu stup�asto raspore�enih prozora prikaza resursa u sekvenceru.":
2100 "Odabire sekundarno ograni�enje koje �e se primijeniti na primarni resurs. Odre�uje se koli�ina ograni�enja koja je potrebna za izvr�enje operacije na primarnom resursu i na�in na koji se ograni�enje primjenjuje na primarni resurs.":
2110 "Odre�uje kad �e se kori�tenje sekundarnog resursa pove�ati ili smanjiti, npr. 'Pove�anje za vrijeme trajanja' koje koristi sekundarno ograni�enje tijekom tijekom trajanja operacije i osloba�a ga zavr�etkom operacije.   Ako se vi�e operacija nekog naloga obavlja kontinuirano koriste�i sekundatni resurs (npr. kalup), za prvu operaciju se mo�e odabrati 'Pove�anje na po�etku', a za zadnju 'Smanji na kraju'. To �e osigurati da taj sekundatrni resurs (nar. kalup) ne mo�e koristiti za druge operacije dok se ovaj niz operacija ne zavr�i (bez obzira �to u nizu me�u operacijama ima vremenskog razmaka).":
2120 "Specificira potrebnu koli�inu sekundarnog ograni�enja. Ako je odabrana 'Koli�ina', potrebna koli�ina je jednaka koli�ini serije koja se obra�uje.":
2130 "Definira atribut operacije koji �e sprije�iti istovremeno izvo�enje operacija koje nisu sli�ne (u smislu atributa) na beskona�nom kapacitetu resursa.":
2150 "Koristi se u APS proizvodima, za utvr�ivanje kriterija koji �e se koristiti za �eljena pravila redoslijeda u odabiru posla za obradu.":
2160 "Koristi se u APS proizvodima (pravilo rasporeda 'Minimiziraj proizvodnju u tijeku'), za utvr�ivanje vremenskih bafera u kojima se mo�e akumulirati proizvodnja u tijeku, ispred odabranog resursa.":
2180 "Broj�ana vrijednost koja se koristi za sortiranje resursa prikazani u tablici resursa. Tako�er se mo�e koristiti kako bi se pregazio uobi�ajeni redoslijed po kojem su resursi prikazani u pregledu sekvencera.":
2181 "Displays the dialog where advanced resource constraint options can be defined if required":
2182 "Allows the definition of complex inter resource relationships using expressions. Details of expression syntax and creation can be found in the documentation.":
2183 "Allows the user to chose an attribute of an operation on an infinite capacity resource which specifies that only operations with the same value in the selected attribute can be scheduled at the same time.":
2185 "Determines whether a separator line is displayed below the resource on the gantt chart.  This can help when visualing resources in groups.":
2190 "Odre�uje na�in na koji �e se resursi prikazati u pregledu sekvencera. Opcije su 'Uvijek', 'Samo u grupi' i 'Sakrij'.":
2191 "Odre�uje se prikaz operacija u sekvenceru. Opcije su 'Slijedno' gdje su operacije prikazane u jednoj liniji, i 'Kaskadno' gdje svaka operacija ima svoju liniju prikaza.":
2200 "Used to establish a matrix of sequence dependent set-up values, defining the set-up time required changing from a product of one attribute type to another.":
2201 "This field sets which changeover group is assigned to this resource and as a result determines which changeover times between operations with different attributes are applied.":
2202 "Determines whther the setup and changeover times related to operations on this resource are applied concurrently or cumulatively.":
2205 "Uklju�ivanjem ove opcije resurs se isklju�uje iz izra�una performansi rasporeda.":
2210 "Ovo polje slu�i za odabir Preactor Viewer sustava kojem resurs pripada. Polje sadr�i listu Preactor sustavskih imena raspore�iva�a koji je uzet iz tablice PCO adresara.":
2220 "Ovaj gumb otvara dijalo�ki okvir s razli�itim svojstvima resursa.":
2230 "Ovo polje omogu�ava u resurs upis podatka atributa alfanumeri�kog tipa.":
2240 "Ovo polje omogu�ava u resurs upis podatka atributa tipa realan broj.":
2250 "Ovo polje omogu�ava u resurs upis podatka atributa tipa trajanje.":
2260 "Ovo polje ozna�ava u�inkovitost resursa. Zadana vrijednost je 100%. Ako se zada u�inkovitost npr. 200%, onda se bilo koja operacija raspore�ena na ovaj resurs izvr�ava dvostruko br�e (pola redovnog vremena trajanja).":
2270 "Ovo polje je prekida� koji �e, ako je uklju�en, primijeniti vrijednost polja Efikasnost % na sve operacije koje imaju pripremna vremena i raspore�ena su na resurs na kojem je prekida� uklju�en.":
2280 "Kad je uklju�en, ovaj prekida� �e prikazati dijagram kori�tenja za resurs u prozoru dijagama (multi plot window) u sekvenceru.":
5035 "Multiplikator faktora tro�ka, koji utje�e na teku�e tro�kove resursa na koji se primjenjuje. Vrijednost 100% zna�i da nema pove�anja, vrijednost 150% pove�ava teku�e tro�kove za 50%. Podatak je u upisan u tablicu stanja kalendara te predstavlja uobi�ajenu vrijednost kori�tenu u datoteci glavnog kalendara.":
6100 "Displays a dialog which allows the selection of which resources from the selected group are valid and the assigment of resource specifc data.":
6110 "This field determines whether the resource will be selected during automatic sequencing.  If unticked the operation can still be manually placed on the resource.":
6120 "This field enables an individual setup time value to be established each of the resources that are valid for the operation.":
6130 "This field enables an individual operation time to be established for each of the resources that are valid for the operation.":
6131 "This field enables an individual rate per hour to be established for each of the resources that are valid for the operation.":
6132 "This field enables an individual batch time to be established for each of the resources that are valid for the operation.":
6140 "This field is used to define a secondary resource used by the primary resource during the current operation.":
6150 "Ovo polje specificira kako se koristi sekudnarno ograni�enje tijekom operacije, npr. Pove�anje trajanja, Samo prirast pripremnog vremena, itd.":
6160 "Ovo polje definira koli�inu sekundarnog ograni�enja potebnu na trenutnoj operaciji. Npr., mo�e se specificirati da operacija treba jedan alat za obradu.":
6170 "The Scheduler will utilize this period of time to attempt to load the current operation onto the preferred resource. If it is unable to do so by the end of this time, it will try to load the operation on any other resources in the group.":
6180 "'Slijede�a grupa resursa' formira 'forsiranu listu' resursa, npr. onih koji su specificirani u odabranoj grupi. Time se 'forsira' operacije koje slijede na kori�tenje samo onih resursa koji se nalaze na toj 'forsiranoj listi'. Dakle, ako ruta procesa koristi grupu resursa na operacijama koje slijede i koje trebaju neke resurse koji nisu �lanovi liste, to se ne�e koristiti prilikom raspore�ivanja. 'Slijede�a grupa resursa' je kumulativna funkcija i mo�e se koristiti za vi�e operacija u ruti, dodavaju�i resurse na 'forsiranu listu'.":
6190 "'Resetiraj slijede�u grupu resursa' mi�e resurse sadr�ane u odabranoj grupi resursa s 'forsirane liste' postavljene komandom Postavi slijede�e grupe resursa. Ako je oformljena konceptualna grupa resursa, 'Svi', u kojoj su svi raspolo�ivi resursi, resursi koji se koriste u slijede�im operacijama �e se postaviti u originalnu rutu procesa.":
6230 "Ovo polje omogu�ava zadavanje pripremnog vremena (prebacivanje sa proizvodnje  prethodnog proizvoda na trenutni). Vrijednosti u polju 'Pripremno vrijeme' biti �e dodane na vrijednost pripreme zadane za resurs u matrici 'Pripremna vremena ovisna o redoslijedu'.":
6430 "Odaberite ime ikone iz padaju�e liste. Gumb Uredi omogu�ava kreiranje nove ikone. ":
6470 "Displays the Valid Secondary Constraints Dialog, allowing valid constraints to be applied to individual records in this table. Characteristics of constraint usage can also be edited here.":
6530 "Definira maksimalni vremenski interval dozvoljen izme�u dvije raspore�ene operacije. Zna�enje ovdje zadanog intervala odre�eno je poljem 'Tip intervala' koje definira relacije ('Od po�etka do po�etka' i 'Od kraja do kraja' itd.)":
6540 "Definira zna�enje maksimalnog vremenskog intervala izme�u dvije slijedne operacije koje je zadano u polju 'Max. vrijeme prije slijede�e op.'. Mo�e biti 'Od kraja do kraja', 'Od kraja do po�etka', 'Od po�etka do po�ekta' ili 'Od po�etka do kraja' relacija.":
6550 "Specificira max. koli�inu vremena, prikazanu kao postotak teoretskog proizvodnog vremena, za koliko se operacija mo�e produ�iti prilikom automatskog raspore�ivanja.":
6560 "Defines a given amount of slack time to be built in between this operation and the previous.":
6565 "Defines a given amount of slack time to be built in between this operation and the next.":
6580 "This field can be used to apply a process rate multiplier order to affect the operation length.":
6681 "This field is used to specify an attribute of this record which is referenced from one of the attribute tables.  These can be used to affect setup times, scheduling order and constraint usage.":
6682 "This field is used to specify a free format string attribute of this record.  These can be used set display options and group operations.":
6683 "This field is used to specify a numerical attribute of this record.  These can be used to  set display options, affect scheduling order and constraint usage.":
6684 "This field is used to specify a date attribute of this record. These can be used to set display options and affect scheduling order.":
6685 "This field is used to specify a duration attribute of this record. These can be used to set display options and affect scheduling order.":
6690 "Polje za�titnog vremena isporuke sadr�i za�titno vrijeme koje se oduzima od roka isporuke prilikom raspore�ivanja unatrag tako da su operacije planirane ranije od zadnjeg mogu�eg vremena. Time se omogu�ava da nepredvi�ena ka�njenja u procesu ne remete plan.":
7020 "Broj dana prije trenutnog vremena koji se prikazuju u pregledu sekvencera.":
7030 "Vremenski period nakon trenutnog vremena koji se prikazuje u pregledu sekvencera.":
7035 "Otvara dijalo�ki okvir postavki koji omogu�ava prilagodbu pregleda sekvencera.":
7040 "Specificira vremenski pomak, od vremena unosa naloga, prije kojeg nije mogu�e zapo�eti rad na nalogu. Ako je postavljeno na Nespecificiranom, tada nema drugih ograni�enja osim trenutnog vremena.":
7050 "Specificira vremenski pomak, od vremena unosa naloga, do kojeg posao treba biti dostupan. Mo�e se prepisati drugim podatkom.":
7060 "Koli�ina vremena za koliko je pomaknut grani�nik u odnosu na trenutno vrijeme. Grani�nik predstavlja trenutno vrijeme ako je pomak grani�nika 0 sati 00 min.":
7067 "Postavlja opcije kalkulacije tro�kova. Mo�e biti: Tijekom raspore�ivanja, Nakon raspore�ivanja ili Nikad.":
7120 "Postavlja mod pregleda sekvencera.":
7130 "Broj dana od danas do po�etka pregleda sekvencera.":
7140 "Broj dana od danas do kraja pregleda sekvencera.":
7320 "Omogu�ava odabir skripte (iz tablice 'Skripte') potrebne za uvoz naloga ":
7330 "Omogu�ava odabir skripte (iz tablice 'Skripte') potrebne za izvoz naloga.":
7430 "Ovaj prekida� uklju�uje mali crni trokut na svakoj traci operacije sekvencera. Time se olak�ava pomicanje operacija po planskoj tabli, pogotovo malih (kratkih) operacija.":
7450 "Specificira uobi�ajenu PESP skriptu doga�aja koja �e se pokrenuti prilikom uvoza naloga preko gumba 'Uvezi naloge' na izborniku razmjene podataka.":
7470 "Specificira uobi�ajenu PESP skriptu doga�aja koja �e se pokrenuti prilikom izvoza naloga preko gumba 'Izvezi naloge' na izborniku razmjene podataka.":
7480 "Specificira uobi�ajenu PESP skriptu doga�aja koja �e se pokrenuti prilikom pu�tanja rasporeda preko gumba 'Pusti raspored' na izborniku razmjene podataka.":
7490 "Specificira uobi�ajenu PESP skriptu doga�aja koja �e se pokrenuti prilikom alociranja operacija u sekvenceru s uklju�enom opcijom APS pravila.":
8020 "Ime sekundarnog ograni�enja.":
8030 "Omogu�ava izbor boje sekvencerovog dijagrama iskori�tenja kad su vrijednosti unutar gornje i donje granice.":
8040 "Definira uzorke ispune dijagrama.":
8060 "Boja ispune dijagrama ako dijagram prelazi gornji limit.":
8080 "Boja ispune dijagrama ako dijagram prelazi ispod donjeg limita.":
8090 "Specificira da li �e ovo sekundarno ograni�enje ograni�iti raspored kad se koristi verzija 300 FCS ili vi�a verzija. U svim verzijama, ako ova opcija nije odabrana to �e sprije�iti izdavanje upozorenja ako su limiti sekundarnog ograni�enja prekora�eni.":
8091 "Kada sekvencer radi u modu beskona�nih kapaciteta, ovo polje odre�uje kako efikasnost kalendara primarnog resursa utje�e na upotrebu ovog sekundarnog ograni�enja. Opcije su: bez utjecaja, po�etna efikasnost, prati promjene efikasnosti, upotreba 100% ako je ve�e od 0%.":
8092 "Options for controlling the behaviour of this constraint when the system is set to infinite capacity mode.":
8100 "Odre�uje kako efikasnost kalendare primarnog resursa utje�e na kori�tenje sekundarnog ograni�enja. Opcije su: Ne utje�e, Efikasnost na po�etku posla; Prati promjene efikasnosti; Koristi 100% ako je ve�e od 0%":
8101 "When in Infinite Capacity Sequencer Mode, this field will determine how the primary resource calendar efficiency affects the usage of this secondary constraint. Options are: No Effect; Start of Job Efficiency; Follow Efficiency Changes; Use 100% if Greater Than 0%":
8120 "Ovaj gumb otvara dijalo�ki okvir koji pokazuje razli�ite atribute vezane uz sekundarna ograni�enja.":
8130 "Ovo polje omogu�ava unos tekstualnih atributa za sekundarno ograni�enje.":
8140 "Ovo polje omogu�ava unos broj�anog atributa za sekundarno ograni�enje.":
8150 "Ovo polje omogu�ava unos atributa trajanja za sekundarno ograni�enje.":
8160 "Kad je uklju�en, ovaj prekida� �e pokazati dijagram kori�tenja za sekundarno ograni�enje u prozoru dijagrama.":
9020 "Imena Grupa pripreme, koje formiraju X i Y osi matrice pripremnih vremena koje su ovisne o rasporedu (definirano u tablici resursa).":
12020 "Ime zapisa atributa u tablici Artibuti proizvoda 1.":
13020 "Ime zapisa atributa u tablici Atributi proizvoda 2.":
14020 "Ime zapisa atributa u tablici Atributi proizvoda 3.":
16020 "Ime koje se koristi kao opis konfiguracije ekranskog prikaza spremljene u Ime datoteke. Ovaj opis se ujedno koristi kao obavijest (tip) za ikone alatne trake radnog prostora.":
16030 "Datoteka je odabrana odabirom datoteke iz ponu�enih opcija preko gumba s lijeve strane polja. Originalna datoteka konfiguracije radnog prostrora je spremljena s .WPI ekstenzijom, kori�tenjem naredbe Spremi radni prostor izbornika Radni prostor u sekvenceru.":
18510 "Ime osobe ili organizacije koja plasira nalog.":
18520 "Ime osobe za primarni kontakt u organizaciji na koju glasi nalog.":
18530 "Broj telefona kontakta u svezi naloga.":
18540 "Email adresa kontakta u svezi naloga.":
21000 "Ovo polje omogu�ava upis razli�itih 'statusa naloga'. Status naloga upisuje se svakom nalogu u datoteci rasporeda.":
21020 "U ovom polju se nalazi opis zna�enja imena statusa naloga koje je une�eno u polje 'Ime statusa naloga'.":
21100 "Name of the attribute record in the Attribute data table.":
21110 "Used to establish a priority ranking between records in this Attribute data table which can be used by scheduling rules":
24000 "Ovo polje odre�uje da li je zapis nadre�eni ili podre�eni zapis seta pravila.":
24010 "Sadr�i ime seta pravila.":
24020 "Ovaj prekida� se koristi za �i��enje poveznica samo za naloge koji iskazuju potrebe u prvom prolazu seta pravila (bili omogu�eni ili ne).":
24030 "Sadr�i ime pojedinih funkcija unutar skupa pravila za pridru�ivanje materijala. ":
24040 "Prekida� koji, kad je uklju�en, omogu�ava izvr�avanje pravila. Kad nije uklju�en, ovo odre�eno pravilo se ne�e izvr�iti prilikom pokretanja seta pravila.":
24050 "Kad je ovaj prekida� uklju�en i pravilo je postavljeno za pokretanje, u radnoj mapi �e se kreirati datoteka debugiranja.":
24060 "Ovo polje se koristi za zadavanje kriterija koji se mo�e koristiti za ograni�avanje stavaka koje �e biti u redu �ekanja interne nabave. Uobi�ajena vrijednost ovog polja je postavljena na Svi (ALL), no to se mo�e promijeniti unosom izraza, npr, (~{$Order Type}~==~Stock~).  Ovaj red �ekanja filtrira zapise iz baze podataka radnih naloga.":
24070 "Ovo polje je kriterij koji se mo�e koristiti za rangiranje stavki u redu �ekanja interne nabave. Npr., mo�e se rangirati po Roku isporuke, Najranijem datumu po�etka ili Prioritetu.":
24080 "Ovo polje se koristi za specifikaciju kriterija koji se koristi za ograni�enje kriterija smje�tenih na red �ekanja zahtjeva. Uobi�ajena vrijednost je Svi (ALL), ali se to mo�e promijeniti unosom izraza, npr. (~{$Order Type}~==~Stock~).  Ovaj red �ekanja filtrira zapise iz baze podataka radnih naloga.":
24090 "Ovo polje je kriterij koji se mo�e koristiti za rangiranje stavki reda �ekanja internih zahtjeva. Npr., mo�e se rangirati po Roku isporuke, Najranijem datumu po�etka ili Prioritetu.":
24100 "Ovo polje sadr�i listu razli�itih standardnih pravila povezivanja koja se mogu koristiti za povezivanje naloga. Tako�er sadr�i tri specijalne stavke - Korisni�ki definirano, Korisni�ka funkcija i PESP skripta, �to omogu�ava kreiranje korisni�kih pravila.":
24110 "Ovo polje je vidljivo samo kad je 'Tip pravila' postavljen na 'Korisni�ki definirano' ili 'Korisni�ka funkcija'. U polje se unosi izraz koji se koristi za ovo pravilo. Primjer mo�e izgledati ovako: (~{+:$Atribut proizvoda 1}~==~{-:$Atribut proizvoda 1}~) �to omogu�ava povezivanje narud�bi i zahtjeva samo ako polja 'Atribut proizvoda 1' imaju istu vrijednost.":
24120 "Ovo polje je vidljivo samo kad je 'Tip pravila' postavljen na 'PESP skripta'. U ovom polju je upisano ime PESP skripte koja se koristi kao pravilo.":
24130 "Ova opcija omogu�ava kreiranje poveznica na stavke sastavnice gdje koli�ina stavke ne mora biti u potpunosti zadovoljena da bi poveznica bila kreirana. Stavke gdje �e biti nedostataka, biti �e istaknute kao nedostatak.":
24140 "Ova opcija omogu�ava kreiranje poveznica na stavke sastavnice gdje koli�ina stavke mora biti u potpunosti zadovoljena. Stavke gdje �e biti nedostataka �e biti istaknute kao nedostatak.":
24141 "Kad je uklju�ena ova opcija, uobi�ajeno SMC pona�anje je prega�eno, omogu�avaju�i kreiranje poveznica unatrag kad se proizvodnja dogodi nakon potro�nje.":
24150 "Kad je postavljeno, nalozi koji su ve� raspore�eni se mogu ponovno povezati.":
24160 "Kad je postavljen ovaj prekida�, omogu�eno je polje 'Rangiranje reda �ekanja nabave'. Time je omogu�eno zadavanje polja po kojima se rangiraju zapisi. Ova opcija se mo�e koristiti samo ako su svi zapisi pohranjeni u bazi radnih naloga.":
24170 " Ovo polje se koristi za zadavanje kriterija koji se mo�e koristiti za ograni�avanje stavki koje �e se na�i u redu �ekanja vanjske nabave. Uobi�ajena vrijednost ovog polja je postavljena na Svi (ALL), no to se mo�e promijeniti unosom izraza, npr, (~{$Order Type}~==~Stock~).  Ovaj red �ekanja filtrira zapise iz baze potra�nje.":
24180 "Obradit �e se svako polje s klasifikacijom NASLJE�ENO IZ NABAVE (Ime polja).":
24190 "Obradit �e se svako polje s klasifikacijom NASLJE�ENO IZ POTRA�NJE (Ime polja).":
24200 "Kad je postavljen ovaj prekida�, omogu�eno je polje 'Rangiranje reda �ekanja zahtjeva'. Time je omogu�eno zadavanje polja po kojima se rangiraju zapisi. Ova opcija se mo�e koristiti samo ako su svi zapisi u bazi radnih naloga.":
24210 "Kad je ovaj prekida� postavljen, koli�ina kreirane poveznice �e biti vi�ekratnik broja koji je zadan u sastavnici.":
24500 "Kad je uklju�en prekida� 'Uvijek koristi ovaj set pravila', set pravila povezivanja koji je odabran u ovom polju �e biti set pravila koji �e se uobi�ajeno izvr�avati kad se u sekvenceru odabere opcija 'Pove�i materijale'.":
24505 "Kad je ozna�ena ova globalna opcija, uobi�ajeno pona�anje SMC-a �e biti prega�eno  tako da �e biti omogu�eno kreiranje poveznica unatrag, odnosno i u slu�aju kad se proizvodnja dogodi poslije potro�nje.":
24510 "Kad je uklju�en ovaj prekida�, koristiti �e se pravilo odabrano u polju 'Odabrani set pravila povezivanja' kao uobi�ajeno pravilo koje �e se pokretati kad se u sekvenceru odabere opcija 'Pove�i materijale'. Ako nije ozna�ena opcija 'Uvijek koristi ovaj set pravila', kad se u sekvenceru odabere opcija 'Pove�i materijale' pojavit �e se dijalo�ki okvir odabira koji �e omogu�iti odabir pravila koje �e se koristiti u tom trenutku.":
25400 "Ovo polje sadr�i broj naloga nabave.":
25410 "Ovo polje identificira tip naloga, npr. Zaliha ili Nabava.":
25420 "Ime dobavlja�a materijala za nalog.":
25430 "Broj ili �ifra artikla na nalogu.":
25440 "Opis artikla na nalogu.":
25450 "Datum dostave materijala.":
25500 "Ovo polje identificira kojem nalogu dio pripada. Prvi red naloga biti �e nadre�eni zapis i u ovom polju �e se prikazati Nadre�eni zapis (PARENT). Svi ostali redovi koji su dio ovog naloga biti �e podre�eni zapisi te �e u ovom polju biti prikazan broj naloga kojem pripada.":
25510 "Ovo polje sadr�i broj naloga potra�nje (npr. interna narud�ba proizvodnji ili narud�ba kupca)":
25520 "Ovo polje identificira tip naloga, npr. proizvodnja za zalihu ili prodajni nalog.":
25530 "Jedinstveno identificira liniju stavke naloga.":
25540 "Ime kupca koji potra�uje proizvode s naloga.":
25550 "Datum kad je proizvod potreban.":
25560 "Odre�uje vi�ekratnik koli�ine koja mora biti povezana. Primjer: 12 limenki �ini 1 pakiranje. Pristigla je narud�ba za 60 limenki. Postoji nabavni nalog za 50 limenki. Preactor �e povezati samo 48 od 50 ulaznih limenki. Tada �e potra�iti na drugom ulazu preostalih 12 limenki (od ukupno 60 potrebnih). Poveznicu �e kreirati samo ako prona�e tih 12 limenki. Ako se �eli koristiti ova osobina, u bazi 'Pravila povezivanja' trebalo bi biti postavljeno polje 'Dodijeli samo vi�estruke'.":
25600 "Order number that the BoM line belongs to.":
25605 "Part number of the order that BoM line belongs to.":
25610 "Operation number that the BoM line belongs to.":
25611 "Name of the operation that the BoM line belongs to.":
25615 "Part number of the product which requires the specified material":
25620 "Broj ili �ifra artikla stavke sastavnice (materijal ili poluproizvod).":
25630 "Potrebna koli�ina stavke sastavnice.":
25640 "Kad je postavljeno, ovo polje izaziva mno�enje koli�ine naloga s potrebnom koli�inom sastavnice.":
25650 "Uzrokuje zanemarivanje nedostataka prilikom izvr�avanja pravila povezivanja materijala. Omogu�ava raspore�ivanje i onih naloga koji imaju nedostak materijala.":
25700 "Broj naloga po kojem je nusproizvod proizveden.":
25705 "Part number of the order that co-product is produced in.":
25710 "Broj operacije na kojoj se proizvodi nusproizvod.":
25715 "Operation name that produces co-product.":
25720 "Ime nusproizvoda.":
25730 "Proizvedena koli�ina nusproizvoda.":
25740 "Kad je postavljeno, ovo polje uzrokuje mno�enje koli�ine nusproizvoda koli�inom naloga.":
25800 "Ovo polje identificira tip naloga, npr.: Radni nalog, Nalog za nabavu, Nalog za prodaju ili Zaliha.":
25810 "Kad je ozna�eno, sve neraspore�ene operacije se vi�e ne�e prikazivati u prozoru 'Neraspore�ene operacije'.":
25820 "Prikazuje dijalo�ki okvir koji prikazuje polja vezana uz kontrolu materijala.":
25830 "Ovo polje daje informaciju o statusu zahtjeva nakon povezivanja materijala. Sadr�avat �e jednu od slijede�ih vrijednosti: 'Nepoznato', 'Zadovoljeno', 'Svi nedostaci zanemareni', 'Nedostaci', 'Vi�e isporu�eno', 'Vi�e isporu�eno, Nedostaci', 'Vi�e isporu�eno, Svi nedostaci zanemareni'.":
25840 "Ovo polje je popunjeno nakon �to su materijali povezani. Kad se napravi poveznica na nalog nabavi (u bazi naloga nabavi), polje Datum zahtjeva u radnom nalogu se popunjava s datumom isporuke naloga za nabavu. Preactor �e usporediti datum isporuke i najraniji datum po�etka te �e koristiti kasniji od ta dva datuma prilikom odlu�ivanja koji datum treba koristiti prilikom raspore�ivanja.":
25850 "Ovo polje je popunjeno nakon �to su materijali povezani. Kad se napravi poveznica na nalog potra�nje, polje Datum dostave u radnom nalogu se popunjava s datumom potra�nje na koju je povezan. Preactor �e usporediti datum zahtjeva i rok te �e koristiti kasniji od ta dva datuma prilikom odlu�ivanja koji datum treba koristiti za raspore�ivanje.":
25900 "Prikazuje dijalo�ki okvir s poljima vezanim uz status operacije.":
25910 "Ova opcija se mo�e odabrati kad je nalog podijeljen. Omogu�ava nezavisni tijek svake proizvodne �ar�e kroz proces proizvodnje, npr. ne mora biti zavr�ena jedna operacija za sve �ar�e da bi mogla zapo�eti sljede�a operacija na nekim �ar�ama.":
25920 "This field specifies the color used on the bar in the gantt chart for this record.":
26000 "This field defines the name of the changeover group":
26100 "This field sets the amount of changeover time that is incured when the attribute specified changes between operations scheduled next to one another.":
26200 "The display name of the user tool":
26210 "The event script which the user tool will run when selected":
26220 "the tool menu name of the user window":
26230 "The code function to poluate the user window contents":
26240 "the label of the user window":
26300 "The name of the menu button.  This gives an indication where the button will appear in the menu system":
26310 "This field controls whether the button is enabled and thefore whether it appears":
26320 "This field controls the text that will appear on the button":
26330 "The event script which the menu button will run when selected":
;
