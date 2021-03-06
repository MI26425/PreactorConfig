#VERSION 0
;
SKY POPUP HELP
1 "K danej polo�ke neexistuje n�poveda.":
10 "This field is used to identify what order the part belongs to.  In the first operation of an order it is set to PARENT, in other operations it is set to the unique order number or name.":
40 "This field is used to identify the part number.  Pressing the button will show all part numbers in the products data table. Selecting a part number will automatically change the name of the product.":
41 "Pole obsahuje zoznam r�znych stavov objedn�vky. Mo�n� stavy sa zad�vaj�  v tabu�ke stavov objedn�vky, kde pod�a  potreby m��ete zada� nov� stav. Vtabu�ke stavov m��ete zada� aj vzorku pre zobrazenie oper�cie v pl�nova�i. Toto umo�n� preh�adnej�ie zobrazenie, napr. napl�novan�ch oper�ci�.":
45 "This field is used to identify the part number.":
50 "This field is used to identify the name of the product. Use the button to select the name, the part number will be automatically changed.":
55 "This field is used to identify the name of the product.":
60 "POle ur�uje ��slo objedn�vky pre dan� v�robok. Objedn�vka m��e by� ozna�ovan� intern�m  ��slovan�m alebo pod�a ��sla odberate�a. ��slo mus�by� jednojednozna�n�. ":
70 "This field can be used to contain notes about this order. It could be a reminder regarding due dates, or simply a message to the packer/assembler on the shop floor.":
75 "Opens a dialog showing all of the Attribute information for the operation.":
80 "Pou�itie pre nastavenie priority oper�cie, ktor� bude pou�it� v Pl�nova�i. ��m ni��ie ��slo, t�m vy��ia priorita. Pozor, priorita m��e by� aj z�porn�, z�porn� priorita je vy��ia ko kladn�. Napr�klad,-100 je vy��ia ako -1, 0 a 10.":
90 "Ur�uje ��slo oper�cie. ��slo je pou�it� pri zora�ovan�  pr�ce v Pl�nova�i. Ni��ie ��sla oper�ci� s� ukon�en� sk�r ako za�n� vy��ie. Ak maj� dve oper�cie rovnak� ��slo, tak obidve bud� ukon�en� sk�r ako za�n� oper�cie s vy���m ��slom.":
110 "Textov� popis oper�cie. Tento popis z�rove� ur�uje ��slo oper�cie.":
112 "Opens a dialog containing information about the Resource data assigned to this operation":
120 "Skupiny nastaven� s� definovan� v tabu�ke Skup�n nastaven�, napr. Skupina1, Skupina2, at�. Tieto hodnoty s� pou�it� ako osi Matice nastavovac�ch �asov, ktor� ur�uje medziopera�n� �asy medzi v�robkami z rozdielnych skup�n nastaven� (oby�ajne nastaven� v tabu�ke zdrojov). Jednotliv� skupiny nastaven� s� pridelen� v�robkom v tabu�ke v�robkov-produktov, hoci t�to preddefinovan� hodnota m��e by� prep�san� v Hlavnom Pl�novacom s�bore.":
130 "This field identifies the group of valid resources that can carry out the current operation.":
140 "Ak je potrebn�, tak toto pole ur�uje �pecifick� zdroj, ktor� by mal by� pou�it� v oper�cii. Ak je v tabu�ke v�robkov-produktov pou�it�  'V�ber zo Skupiny', potom m��e by� pou�it� �ubovo�n� zdroj zo skupiny.  Ak chcete vyn�ti� pou�itie konkr�tneho zdroja zo skupiny, pou�ite pre v�ber rozba�ovac� zoznam.":
150 "Zobrazuje aktu�lny zdroj pre oper�ciu. V pr�pade �e objedn�vka bola napl�novan�-uvo�nen�  sk�r, tento zdroj bude nastaven� ako  'Neur�en�'.  Ak u� bola oper�cia nahran� do pl�novacieho panelu, tak nahrat� zdroj bude zobrazen�.":
180 "Ur�uje �i postup je kalkulovan� v �as na d�vku, �as na polo�ku alebo sadzba za hodinu. Ak je vybrat� '�as na d�vku', tak ni��ie zobrazen�  �as je �as postupu-v�roby pre v�etky diely v d�vke. Aj je zadan� '�as na polo�ku', tak �as postupu-v�roby bude ni��ie zobrazen� hodnota vyn�soben� ve�kos�ou d�vky. Ak je vybran� 'sadzba za hodinu'. tak �as postupu-v�roby bude vypo��tan� z hodnoty d�vky.":
220 "Typ �as postupu-v�roby je  vybrat� ako '�as na Polo�ku'. Mus�te v tomto poli zada� �as oper�cie pre ka�d� polo�ku.":
230 "Typ �as postupu-v�roby je  vybrat� ako '�as na D�vku'. Mus�te v tomto poli ur�i� celkov� �as oper�cie pre d�vku.":
240 "Typ �as postupu-v�roby je  vybrat� ako 'Sadzba za Hodinu'. Mus�te v tomto poli zada� ko�ko polo�iek-v�robkov m��e by� vyroben�ch za hodinu.":
251 "Farba zadan� v tomto poli ur�uje Pl�nova�u, �e t�to �as� m� by� Ganttovom Grafe zobrazen� inou farbou.  Farba ozna�uje li�ty pod�a hodnoty zadanej v poli Doteraz Vyroben� a Doteraz �as.":
260 "Mno�stvo pre objedn�vku, d�vku.":
270 "This field is used to specify the order or batch profit and can be used to influence sequencing when using the weighting rule.":
280 "This field will show the start time of the first operation in this order if the MakeSpan feature is enabled":
290 "This field will show the end time of the last operation in this order if the MakeSpan feature is enabled":
300 "This value determines the quantity that should be processed before the subsequent operation can be started. A value of Unspecified prevents operation overlapping":
360 "Pou�it� pre ur�enie �asu, pred ktor�m nie je mo�n� za�a� oper�ciu, m��e to napr�klad znamena� �as kedy bude k dispoz�cii materi�l.":
370 "This field is to be used to establish the due date.The due date is used to highlight late items in the Sequencer and to prioritize job loading to the planning board if the 'due date' option is selected.":
380 "Pou�it�m tohoto prep�na�a ur�ujete v Pl�nova�i, �e �asy za�iatku a konca s� 'skuto�n� - platn�' hodnoty a oper�cia je ukon�en�. V pr�pade nastavenia, tento prep�na� zabra�uje aby bolo zru�en� priradenie objedn�vky zdrojom v Pl�nova�i. 0bjedn�vka bude permanentne umiestnen� v pl�novacom panely.":
390 "Pl�nova� nastavuje toto pole po�as zora�ovania na �as kedy je napl�novan� za�iatok �asu nastavenia.":
400 "Pl�nova� aktualizuje toto pole po�as zora�ovania na �as kedy je napl�novan� za�iatok oper�cie.":
410 "Pl�nova� aktualizuje toto pole po�as zora�ovania na �as kedy je napl�novan�  koniec oper�cie.":
420 "Set this toggle if you do not wish this job to be unallocated after selecting Unallocate All Jobs in the sequencer. This will lock the operation. This can also be achieved when using 'Highlight Locked Operations' locate mode in the Sequencer by pointing with the mouse at an operation (icon or bar in the overview), depressing the shift key on the keyboard and clicking with the left mouse button.":
421 "Oper�cie, ktor� maj� zapnut� tento prep�na� ostan� nepridelen� aj po spusten� pl�novacieho procesu. Ronako v�etky nasleduj�ce oper�cie v r�mci objedn�vky ostan� nepridelen�.":
430 "Umo��uje definova� pou��vate�sk� atrib�ty v�robkov, ako napr. farba, material, ... Pod�a �pecifikovan�ch charakterist�k-atrib�tov  m��e by� pridelovan� priorita, napr. biele v�robky maj� vy��iu prioritu ako �lt�.  Tieto atrib�ty s� pou�it� v pravidl�ch  'Preferovan� Pravidl� Zora�ovania' Pl�nova�a pri sp�jan� podobn�ch objedn�vok  v r�mci �asov�ho horizontu.":
440 "Vyplnte inform�ciu o ukon�enom mno�stve a zadajte �as na d�vku (�as� d�vky) do pola 'Doteraz �as'. Pl�nova� automaticky prepo��ta  '�as Ukon�enia' pre t�to oper�ciu.":
450 "Vyplnte inform�ciu o �ase ukon�enia a zadajte ukon�en� mno�stvo d�vky (�asti d�vky) do pola 'Doteraz Vyroben�'. Pl�nova� automaticky prepo��ta  '�as Ukon�enia' pre t�to oper�ciu.":
460 "�daj �Skuto�n� �as Oper�cie� pou��va na prepo�et  aktualizovan�ho �asu oper�cie �daje v  �Mno�stvo Doteraz� a ��as Doteraz�. �daje  �Mno�stvo Doteraz� a ��as Doteraz� m��u by� upravovan� v Editore oper�ci�, �daj �Skuto�n� �as Oper�cie� je naopak aktualizovan�  pri �al�om spusten� Pl�nova�a.":
474 "Ur�en� pre z�znam n�kladov na materi�l v �ase ke� je materi�l zadan� do v�roby. Pole m��e by� pou�it� pre z�znam fixn�ch n�kladov na polo�ku, napr. tepeln� spracovanie na kooper�cii, at�.":
476 "Materi�lov� n�klady na d�vku v �ase ke� je materi�l zadan� do v�roby. Pre v�po�et je pou�it� �daj 'Materi�lov� N�klady na Polo�ku'.":
477 "Priame n�klady oper�cie v aktu�lnom postupe.":
530 "Ur�uje �asov� horizont pre ktor� m��u by� oper�cie vo v�robe zhromad�ovan�. Zdroj podielaj�ci sa na vykonan� oper�cie sa pozer� dopredu o �as od aktu�lneho bodu po �daj zadan� v poli 'Peri�da d�vkovania'. Na zhromad�ovanie maj�  vplyv Preferovan� Pravidl� Zora�ovania a  �as nastavenia v Tabu�ka Zdrojov. Peri�da d�vkovania m��e by� nastaven� pre ka�d� v�robok zvl᚝ v Tabu�ka V�robkov a upravovan� pre konkr�tne objedn�vky v  Hlavnom Pl�novacom s�boru, alebo nastaven� ako glob�lne pravidlo v Nastaven� Konfigur�cie.":
540 "Word dokument s inform�ciami o produkte zadan� v Tabu�ke V�robkov. Tento dokument je pr�stupn� a m��e by� menen� z editora Hlavn�ho Pl�novacieho s�boru.":
541 "Pole popisuje stav oper�cie. Mo�n� s� �tyri stavy: Neza�at�, Nastavenie, Aktu�lne, Ukon�en�.":
550 "V�robky m��u ma� �peci�lne charakteristiky, pou�it� v Tabu�ke Atrib�tov, Tieto tabu�ky s� definovan� pou��vate�om a m��u ur�ova� napr. farbu, v�kon, rozmer, ... Tieto atrib�ty m��u by� zadan� v poli 'Podobn� ako' v Tabu�ka V�robkov pre defin�ciu �asu nastavenia 'Podobn� ako'.":
560 "Pou�it� na stanovenie priority z�znamov  v Tabu�ke Atrib�tov V�robkov, pou�it� zora�ovac�m pravidlom APS.":
570 "V�robky m��u ma� �peci�lne charakteristiky, pou�it� v Tabu�ke Atrib�tov, Tieto tabu�ky s� definovan� pou��vate�om a m��u ur�ova� napr. farbu, v�kon, rozmer, ... Tieto atrib�ty m��u by� zadan� v poli 'Podobn� ako' v Tabu�ka V�robkov pre defin�ciu �asu nastavenia 'Podobn� ako'.":
580 "Pou�it� na stanovenie priority z�znamov  v Tabu�ke Atrib�tov V�robkov, pou�it� zora�ovac�m pravidlom APS.":
590 "V�robky m��u ma� �peci�lne charakteristiky, pou�it� v Tabu�ke Atrib�tov, Tieto tabu�ky s� definovan� pou��vate�om a m��u ur�ova� napr. farbu, v�kon, rozmer, ... Tieto atrib�ty m��u by� zadan� v poli 'Podobn� ako' v Tabu�ka V�robkov pre defin�ciu �asu nastavenia 'Podobn� ako'.":
600 "Pou�it� na stanovenie priority z�znamov  v Tabu�ke Atrib�tov V�robkov, pou�it� zora�ovac�m pravidlom APS.":
602 "Toto pole vypo��tava celkov� �as trvania objedn�vky po�n�c za�iatkom nastavenia prvej oper�cie po koniec poslednej oper�cie objedn�vky.":
620 "Vybavovacie pravidlo, ktor� po��ta index ako podiel �asu do d�tumu dodania a predpokladan�ho �asu ukon�enia pr�ce. Pomer men�� ako 1 znamen�, �e �loha je v sklze a v��� ako 1 �e �loha m� �asov� rezervu.":
815 "T�to vo�ba umo��uje nastavi� nastavovac� - pr�pravn� a opera�n� �as. Je pou�it� aj pri aktualiz�cii postupu pr�c v procese v�roby.":
1020 "Ur�uje n�zov Skupiny Zdrojov. Pu��va sa pri identifik�cii ur�itej skupiny zdrojov s podobnou funkcionalitou.":
1030 "Ur�uje pl�tn� zdroje zo Skupiny Zdrojov. Zdroj m��e by� �lenom viacer�ch skup�n.":
1060 "Zpnut� prep�na� umo�n� zobrazenie pou�itia skupiny zdrojov v z�lo�ke Diagram v okne Pl�nova�a.":
1070 "Farba pre zobrazenie v diagrame pou�itia  v z�lo�ke viacn�sobn�ch diagramov pou�itia skup�n zdrojov - okno Pl�nova�a.":
1080 "T�to farba sa zobrazuje v okne pou�itia zdrojov (Pl�nova�) v pr�pade ak pou�itie presahuje disponibiln� kapacitu zdrojov alebo skupiny zdrojov (ak je pole Pou�itie Max.Hod. nastaven� na Neur�en�). Ak je do pola Pou�itie Max.Hod. zadan� hodnota, tak diagram zmen� farbu pod�a tejto hodnoty.":
1090 "Farba pre zobrazenie nastavenia - setupu v hodin�ch v grafe vyu�itia. ":
2020 "N�zov zdroja.":
2023 "Hodinov� sadzba n�kladov pri pou�it� zdroja.":
2024 "Aplikuje  hodnotu 'N�kladov� Faktor %' v z�znamoch stavov kalend�ra  na hodinov� n�klady zdrojov.":
2030 "Ur�uje sp�sob zobrazenia zdroja a skupiny zdrojov v okne Pl�nova�a - preh�ad zoradenia a okne Diagram vyu�itia.":
2040 "M��e by� nastaven� na Vidite�n�, Minimalizovan� alebo Deaktivovan�. Pou�it� pri �tarte Pl�nova�a na riadenie v�chodiskovho stavu okna zdrojov. Norm�lne je nastaven� Minimalizovan�. Ak je nastaven� Deaktivovan�, zdroj nie je pou�it� pre zora�ovanie.":
2050 "V Pl�nova�i riadi horizont�lny (�asov�) rozsah okna Ganttovho diagramu pre zdroje. M��e by� nastaven� od min�t po t��dne.":
2070 "Umo��uje nastavi�  v r�mci pracovnej zmeny kapacitu zdroja na Obmedzen� alebo Neobmedzen�.":
2071 "Allows a resource capacity to be set to Finite, Infinite or Infinite with Shift Patterns when running in Infinite Capacity Sequencer Mode.":
2080 "V Pl�nova�i riadi horizont�lny (�asov�) rozsah okna pokryt�ch zdrojov.":
2100 "V�ber sekund�rnych obmedzen� pre prim�rny zdroj. Ur�enie mno�stva obmedzen� a sp�sob ak�m s� aplikovan� na prim�rny zdroj.":
2110 "Ur�enie, kedy m� by� pou�itie sekund�rneho obmedzenia zv��en� alebo zn�en�, napr.  Zv��enie pre Trvanie vyu��va sekund�rne obmedzenie po�as trvania oper�cie a ukon�uje ho po dokon�en� oper�cie. Ak je vo v�robe po�as nieko�k�ch oper�ci� pou�it� zariadenie - pr�pravok, tak mo�e by� pou�it� 'Zv��enie pri �tarte' pre prv� oper�ciu a 'Zn�enie na konci' pre posledn� oper�ciu. Toto n�m zaist� , �e zariadenie - pr�pravok nem��e by� vyu�it� in�m v�robn�m procesom, pokia� je pou��van� zodpovedaj�ci zdroj.":
2120 "Ur�enie po�adovan�ho mno�stva sekund�rneho obmedzenia. Ak je hodnota nastaven� na 'Mno�stvo', tak po�adovan� mno�stvo je rovnak� ako spracov�van� ve�kos� d�vky.":
2130 "Definuje atrib�t oper�cie, ktor� zabra�uje aby nepodobn� oper�cie boli vykon�van� paralelne na zdroji s obmedzenou kapacitou.":
2150 "Pou�it� v APS produktoch na nastavenie krit�ri� pou�it�ch  preferovan�mi pravidlami zora�ovania pri ur�ovan� pr�ce.":
2160 "Pou�it� v APS produktoch v pravidl�ch pl�novania  'Minimaliz�cia RV' na nastavenie �asov�ho z�sobn�ka v ktorom sa akumuluje RV pred vybran�mi zdrojmi.":
2180 "��seln� hodnota pou�it� na ur�enie poradia v ktorom s� zobrazovan� zdroje v tabu�ke zdrojov. Je mo�n� pou�i� aj pre zmenu preddefinovan�ho poradia v ktorom s� zdroje zobrazovan� v preh�ade poradia. ":
2181 "Displays the dialog where advanced resource constraint options can be defined if required":
2182 "Allows the definition of complex inter resource relationships using expressions. Details of expression syntax and creation can be found in the documentation.":
2183 "Allows the user to chose an attribute of an operation on an infinite capacity resource which specifies that only operations with the same value in the selected attribute can be scheduled at the same time.":
2185 "Determines whether a separator line is displayed below the resource on the gantt chart.  This can help when visualing resources in groups.":
2190 "Ur�uje sp�sob, ak�m s� zdroje zobrazovan� v okne Pl�nova�a. Mo�nosti s� 'V�dy', 'Len v skupine' a 'Skry�'.":
2191 "Determines the manner in which the operations will be displayed in the Sequence Overview. The options are 'Stacked' where the operations are displayed on one overview line, and 'Cascade' where each operation is displayed on its own overview line.":
2200 "Used to establish a matrix of sequence dependent set-up values, defining the set-up time required changing from a product of one attribute type to another.":
2201 "This field sets which changeover group is assigned to this resource and as a result determines which changeover times between operations with different attributes are applied.":
2202 "Determines whther the setup and changeover times related to operations on this resource are applied concurrently or cumulatively.":
2205 "Zapnut� prep�na� vyl��i zdroj z prepo�tov v�konnosti pl�nu.":
2210 "Pole umo��uje vybra� zodpovedaj�ci prehliada� . Pole obsahuje zoznam Syst�mov�ch mien pl�nu prevzat�ch z PCO d�tovej tabu�ky. ":
2220 "Edit�cia atrib�tov spojen�ch so zdrojom.":
2230 "Pole pre zadanie atrib�tu typu re�azec.":
2240 "Pole pre zadanie atributov typu real.":
2250 "Pole pre zadanie atrib�tov typu trvanie (duration).":
2260 "��innos� zdroja, preddefinovan� hodnata je 100%. Ak je hodnota nastaven� na 200%, tak oper�cia bude vykonan� 2 x r�chlej�ie (polovi�ka norm�lneho �asu oper�cie).":
2270 "Tento prep�na� umo��uje aplikova� hodnotu nastaven� v poli '��innos� %' na v�etky oper�cie, ktor� maj� �as nastavenia a s� spojen� s t�mto zdrojom.":
2280 "Prep�na� umo��uje zobrazi� pou�itie zdroja v diagrame v okne grafov vyu�itia v Pl�nova�i.":
5035 "N�sobite� n�kladov�ho faktora, ktor� ovplyv�uje n�beh n�kladov na zdroj, na ktor� je aplikovan�. Hodnota 100%  nesp�sob� zv��enie, 150%  zvv��i hodnotu n�kladov o 50 % .  Nastavenie v d�tach-tabu�ke kalend�rnych stavov poskytne preddefinovan� hodnoty pou�it� v s�boroch Hlavn�ho Kalend�ra.":
6100 "Displays a dialog which allows the selection of which resources from the selected group are valid and the assigment of resource specifc data.":
6110 "This field determines whether the resource will be selected during automatic sequencing.  If unticked the operation can still be manually placed on the resource.":
6120 "This field enables an individual setup time value to be established each of the resources that are valid for the operation.":
6130 "This field enables an individual operation time to be established for each of the resources that are valid for the operation.":
6131 "This field enables an individual rate per hour to be established for each of the resources that are valid for the operation.":
6132 "This field enables an individual batch time to be established for each of the resources that are valid for the operation.":
6140 "This field is used to define a secondary resource used by the primary resource during the current operation.":
6150 "Pole ur�uje, ako je sekund�rne obmedzenie pou�it� po�as oper�cie, napr.  'Zv��enie pre Trvanie', 'Zv��enie Len pre �as Nastavenia', at�.":
6160 "Mno�stvo sekund�rneho obmedzenia po�adovan�ho v aktu�lnej oper�cii, napr. m��ete ur�i� �e k  oper�cii je po�adovan� jedna n�strojov� up�nacia hlava.  ":
6170 "The Scheduler will utilize this period of time to attempt to load the current operation onto the preferred resource. If it is unable to do so by the end of this time, it will try to load the operation on any other resources in the group.":
6180 "Nastavenie nasleduj�cej skupiny zdrojov, ktor� ur�uje 'vyn�ten� zoznam' zdrojov, ur�en�  napr. vo  vybranej skupine.  Takto sa vynucuje vyu�itie ur�en�ch zdrojov v nasleduj�cich oper�ci�ch. Ak postup v nasleduj�cich oper�ci�ch pou��va zdroje, ktor� nie s� vo vyn�tenom zozname, tak tieto nebud� pou�it� pri zora�ovan�. Nastavenie nasleduj�cej skupiny zdrojov sa kumuluje a m��e by� pou�it� na viacero oper�ci� postupu pridan�m do  'vyn�ten�ho zoznamu'.":
6190 "Vynulovanie Nasleduj�cej skupiny zdrojov odstr�ni v�etky zdroje ur�en� vo 'vyn�tenom zozname'. Ak je skupina zdrojov nastaven� na 'V�etko', tak bud� pou�it� zdroje tak, ako boli p�vodne nastaven� v postupe.":
6230 "Ur�enie �asu nastavenia. Tento �as bude prid�n� k �asom ur�en�m v 'Matici Sekven�ne z�visl�ch �asov nastavenia'.":
6430 "Ur�enie n�zvu ikony. Tla��tko Edit umo�n� vytvorenie novej ikony.":
6470 "Displays the Valid Secondary Constraints Dialog, allowing valid constraints to be applied to individual records in this table. Characteristics of constraint usage can also be edited here.":
6530 "Ur�enie maxim�lneho �asov�ho intervalu medzi dvoma po sebe id�cimi oper�ciami. Maxim�lny �asov� inerval je vymedzen� v poli 'Typ Intervalu'.":
6540 "Ur�uje typ vsunutia maxim�lneho  �asov�ho intervalu (ur�en�ho v 'Max �as Pred Nasl. Op.') medzi dve po sebe id�ce  oper�cie.  M��e by� nastaven� na typ: 'Koniec Koniec', 'Koniec �tart', '�tart �tart', '�tart Koniec'.":
6550 "Ur�unie maxim�lneho �asu. Hodnota je zadan�  ako percento z teoretickej hodnoty opera�n�ho �asu o ktor� m��e by� opera�n� �as nac��en� pri zora�ovan� v Planova�i. ":
6560 "Defines a given amount of slack time to be built in between this operation and the previous.":
6565 "Defines a given amount of slack time to be built in between this operation and the next.":
6580 "This field can be used to apply a process rate multiplier order to affect the operation length.":
6681 "This field is used to specify an attribute of this record which is referenced from one of the attribute tables.  These can be used to affect setup times, scheduling order and constraint usage.":
6682 "This field is used to specify a free format string attribute of this record.  These can be used set display options and group operations.":
6683 "This field is used to specify a numerical attribute of this record.  These can be used to  set display options, affect scheduling order and constraint usage.":
6684 "This field is used to specify a date attribute of this record. These can be used to set display options and affect scheduling order.":
6685 "This field is used to specify a duration attribute of this record. These can be used to set display options and affect scheduling order.":
6690 "Pole 'Z�sobn�k Dodania' obsahuje �as , ktor� je odpo��tan� od D�tumu Dodania  pri procese zora�ovania. Tak�mto sp�sobom m��eme zn�i� rizik� pri neo�ak�van�ch udalostiach.":
7020 "Po�et dn� pred aktu�lnym d�tumom, ktor� s� zobrazen� v Preh�ade Zoradenia.":
7030 "�asov� �sek odd aktu�lneho �asu, ktor� sa zobrazuje v Preh�ade Zoradenia.":
7035 "Otvorenie konfigur�cie , ktor� pou��vate�ovi umo��uje prisp�soby� Preh�ad Zoradenia.":
7040 "Ur�enie posunu od �asu zadania objedn�vky pred ktor�m nem��e by� objedn�vka za�at�. Ak je nastaven� na 'Neur�en�', tak nie s� dan� nijak� obmedzenia a plat� aktu�lny �as. ":
7050 "Ur�enie posunu od �asu zadania objedn�vky od ktor�ho by praca mala by� aktu�lna. M��e by� prep�san�.":
7060 "�as o ktor� je posunut� ukon�enie od aktu�lneho �asu. Ukon�enie sa rovn� aktu�lnemu �asu, �e posunutie je nastaven� na 0 Hod. a 0 Min.":
7067 "Vo�by kalkul�ci� n�kladov. M��e by�:  Po�as Zora�ovania, Po zora�ovan�, Nikdy.":
7120 "Nastavenie m�du 'Preh�ad Zoradenia'.":
7130 "Po�et dn� od teraz do za�iatku Preh�adu Zoradenia.":
7140 "Po�et dn� od teraz do konca Preh�adu Zoradenia.":
7320 "Umo��uje v�ber scriptu pre import objedn�vok z tabu�ky scriptov.":
7330 "Umo��uje v�ber scriptu pre export objedn�vok z tabu�ky scriptov.":
7430 "Toto prep�nacie pole zap�na ozna�enie - mal� �ierny trojuholn�k pri oper�ci�ch v Pl�nova�i. Toto ozna�enie u�ah�uje manipul�ciu s oper�ciami umiestnen�mi v Pl�novacom panely, �peci�lne mal�ch oper�ci�.":
7450 "Ur�enie preddefinovan�ho PESP scriptu, ktor� zabezpe�uje import objedn�vok z 'Import Objedn�vok'  v 'Prenos D�t Menu'.":
7470 "Ur�enie preddefinovan�ho PESP scriptu, ktor� zabezpe�uje export objedn�vok z 'Export Objedn�vok'  v 'Prenos D�t Menu'.":
7480 "Ur�enie preddefinovan�ho PESP scriptu, ktor� zabezpe�uje uvo�nenie pl�nu z 'Uvo�nenie Pl�nu'  v 'Prenos D�t Menu'.":
7490 "Ur�enie preddefinovan�ho PESP scriptu, ktor� bude spusten� pri alok�cii oper�cii v Pl�nova�i pri pou�it� APS pravidiel.":
8020 "N�zov sekund�rneho obmedzenia.":
8030 "Umo��uje nastavi� farbu pou��vate�sk�ho diagramu, ke� sa hodnoty nach�dzaj� medzi horn�m a doln�m limitom.":
8040 "Nastavenie vzorky v�plne.":
8060 "Farba v�plne diagramu v pr�pade presiahnutia horn�ho limitu.":
8080 "Farba v�plne diagramu v pr�pade presiahnutia doln�ho limitu.":
8090 "Ur�enie, �i sekund�rne obmedzenie ovplyv�uje pl�n pri pou�it� verzie 300 FCS a vy��ie. Neozna�enie tohoto za�iarkavacieho  pol��ka vo v�etk�ch verzi�ch obmedz� v�strahy v pr�pade presiahnutia limitov sekund�rneho obmedzenia. ":
8091 "When in Infinite Capacity Sequencer Mode, this field specifies whether this secondary constraint should constrain the schedule when using a 300 FCS product or above.":
8092 "Options for controlling the behaviour of this constraint when the system is set to infinite capacity mode.":
8100 "Ur�uje, ako ��innos� v kaland�ry prim�rnych zdrojov ovplyv�uje pou�itie tohoto sekund�rneho obmedzenia. Vo�by s�: �iadny ; Za�iatok Op ��innos�; Pod�a Zmien ��innosti; Pou�i 100% ak je viac ako  0%.":
8101 "When in Infinite Capacity Sequencer Mode, this field will determine how the primary resource calendar efficiency affects the usage of this secondary constraint. Options are: No Effect; Start of Job Efficiency; Follow Efficiency Changes; Use 100% if Greater Than 0%":
8120 "Dial�g atrib�tov sekund�rneho obmedzenia.":
8130 "Atrib�ty sekund�rneho obmedzenia typu re�azec.":
8140 "Atrib�ty sekund�rneho obmedzenia typu real.":
8150 "Atrib�ty sekund�rneho obmedzenia typu trvanie.":
8160 "Prep�na� pre zobrazenie diagramu vyu�itia sekund�rneho zdroja  v okne diagramov.":
9020 "N�zvy Skup�n nastaven�. Tieto skupiny tvoria X a Y osi v Matici sekven�ne z�visl�ch �asov nastavenia v tabu�ke zdrojov.":
12020 "N�zov atrib�tu v Tabu�ka Atrib�tov v�robku 1.":
13020 "N�zov atrib�tu v Tabu�ka Atrib�tov v�robku 2.":
14020 "N�zov atrib�tu v Tabu�ka Atrib�tov v�robku 3.":
16020 "N�zov s�boru popisuj�ceho konfigur�ciu zobrazenia na obrazovke. Popis je pou�it� ako tip pre Ikony Li�ty N�strojov pracovnej plochy.":
16030 "S�bor m��e by� vybrat� pomocou tla��tka na �avej strane po�a. Nastavenie Pracovnej plochy je ulo�en� v s�bore s pr�ponou .WPI. Ulo�enie sa vykon� pr�kazom 'Ulo� Pracovn� Plochu' v menu Pl�nova�a.":
18510 "N�zov z�kazn�ka - organiz�cie pre ktor� je objedn�vka - z�kazka zadan�.":
18520 "Prim�rny kontakt na z�kazn�ka.":
18530 "Telef�nny kontakt na z�kazn�ka.":
18540 "E-Mail Addresa pou�it� v spojen� s objedn�vkou.":
21000 "Stav Objedn�vky. ":
21020 "Popis stavu objedn�vky.":
21100 "Name of the attribute record in the Attribute data table.":
21110 "Used to establish a priority ranking between records in this Attribute data table which can be used by scheduling rules":
24000 "Toto pole �pecifikuje, �i z�znam je rodi�ovsk�m z�znamom sady pravidiel alebo potomok.":
24010 "Obsahuje n�zov sady pravidel.":
24020 "Tento prep�na� sa pou��va na vynulovanie spojov�ch odkazov len pre pr�kazy, ktor� s� vo fronte dopytu prv�ho prechodu (�i u� odblokovan� alebo nie) sady pravidiel.":
24030 "Uchov�va n�zov konkr�tnej funkcie priechodu pravidla.":
24040 "Prep�na�, ktor� ke� je nastaven� zapnut� (true), umo�n� priechod pravidla. Ke� je nastaven� vypnut� (false), priechod sa bude ignorova�, ke� sa spust� sada pravidiel.":
24050 "Ke� je tento prep�na� zapnut� a spust� sa sada pravidiel, v pracovnom adres�ri sa vytvor� ladiaci s�bor.":
24060 "Toto pole sa pou��va na bli��ie ur�enie ur�it�ho krit�ri�, ktor� mo�no pou�i� na obmedzenie toho, ak� polo�ky sa umiestni do fronty intern�ho z�sobenia. Implicitn� hodnota pre toto pole je nastaven� ako V�ETKY, ale to sa d� zmeni� zadan�m v�razu napr�klad (~ {$ Order Type} ~ == ~ Stock ~). Fronta filtruje z�znamy uchov�van� v datab�ze pracovn�ch pr�kazov.":
24070 "Toto pole obsahuje krit�ri� vyu�ite�n� pre kategorizovanie polo�iek vo fronte intern�ho z�sobenia. Napr�klad m��ete kategorizova� front intern�ho z�sobenia pomocou term�nu dokon�enia, d�tumu najskor�ieho za�atia alebo priority.":
24080 "Toto pole sa pou��va na bli��ie ur�enie ur�it�ho krit�ri�, ktor� mo�no pou�i� na obmedzenie, ak� polo�ky sa umiestni do fronty intern�ho z�sobenia. Implicitn� hodnota pre toto pole je nastaven� ako V�ETKY, ale to sa d� zmeni� zadan�m v�razu napr�klad (~ {$ Order Type} ~ == ~ Stock ~). Fronta filtruje z�znamy uchov�van� v datab�ze pracovn�ch pr�kazov.":
24090 "Toto pole obsahuje krit�ri� vyu�ite�n� pre kategorizovanie polo�iek vo fronte intern�ho z�sobenia. Napr�klad m��ete kategorizova� front intern�ho z�sobenia pomocou term�nu dokon�enia, d�tumu najskor�ieho za�atia alebo priority.":
24100 "Toto pole obsahuje zoznam r�znych �tandardn�ch pravidiel sp�jania, ktor� posl��i na sp�janie pracovn�ch pr�kazov dohromady. Tie� obsahuje tri �peci�lne polo�ky: Definovan� u��vate�om, U��vate�sk� funkcie a skript PESP, ktor� poskytuj� pr�le�itos� tvori� pravidla viac upraven� na potreby z�kazn�kov.":
24110 "Toto pole bude vidite�n� vtedy, ke� pole 'Typ pravidla' je nastaven� 'Definovan� pou��vate�om' alebo 'U��vate�sk� funkcia'. V�raz sa m� pou�i� pre pravidlo, zadan� do tohto po�a. Mo�n�m pr�kladom je: (~ {+: $ Product Attribute 1} ~ == ~ {-: $ Product Attribute 1} ~), �o dovo�uje, aby sa sp�jali iba pr�kazy z�sobenia aj dopytu, ak pole 'Atrib�t 1 v�robku' bud� ma� rovnak� hodnotu.":
24120 "Toto pole bude vidite�n� len vtedy, ke� pole 'Typ pravidla' je nastaven� na 'Skript PESP'. Toto pole uchov�va n�zov skriptu PESP, ktor� sa m� pou�i� ako pravidlo.":
24130 "T�to vo�ba dovo�uje vytv�ra� spoje (odkazy) na riadky �trukt�ry v�robku (kusovn�ka), kde mno�stvo polo�ky �trukt�ry v�robku nemus� by� �plne uspokojen�ch pre dan� spoj, ktor� sa m� urobi�. Ka�d� polo�ka, kde ch�ba materi�l, sa zv�raznia ako nedostatok materi�lu.":
24140 "T�to vo�ba iba dovol� tvori� spoje na riadky �trukt�ry v�robku, kde je mno�stvo �trukt�ry v�robku plne uspokojen�. V�etky polo�ky, kde ch�ba materi�l, sa zv�raznia ako nedostatok materi�lu.":
24141 "T�to vo�ba men� implicitn� spr�vanie SMC tak, �e povol� sp�tn� prepojenie pre pr�pady, ke� d�jde k v�robe a� po spotrebe.":
24150 "Ke� je tu nastaven� 'pravdiv�', pr�kazy u� rozvrhnut� je mo�n� znovu sp�ja�.":
24160 "Ke� je tento prep�na� zapnut� (true), pole 'Kategoriz�cia frontu z�sobenia' sa odblokuje a dovol� radi� z�znamy z�sobenia do kateg�ri� pod�a v�berov�ho krit�ria 'Kategoriz�cia frontu z�sobenia'. T�to mo�nos� vo�te len v pr�pade, kedy sa v�etky z�znamy uchov�vaj� v datab�ze pracovn�ch pr�kazov.":
24170 "Toto pole sa pou��va na bli��ie ur�enie ur�it�ho krit�ri�, ktor� mo�no pou�i� na obmedzenie toho, ak� polo�ky sa umiestnia do fronty intern�ho z�sobenia. Implicitn� hodnota pre toto pole je nastaven� ako V�ETKY, ale to sa d� zmeni� zadan�m v�razu napr�klad (~ {$ Order Type} ~ == ~ Stock ~).":
24180 "Bude spracovan� ka�d� pole z klasifik�cie INHERIT FROM SUPPLY (n�zov po�a).":
24190 "Bude spracovan� ka�d� pole z klasifik�cie INHERIT FROM DEMAND (n�zov po�a).":
24200 "Ke� je Tetno prep�na� zapnut� (true), pole 'Kategoriz�cia frontu dopytu' sa odblokuje a dovol�, aby z�znamy dopytu boli raden� do kateg�ri� pod�a krit�ria v�beru v poli 'Kategoriz�cia frontu dopytu'. T�to vo�bu pou�ite, len ke� v�etky z�znamy bud� uchov�van� v datab�ze pracovn�ch pr�kazov.":
24210 "Mno�stvo vytvoren�ho spoja (odkazu) sa bude prira�ova� v stanoven�ch n�sobkoch, ak tento prep�na� bude zapnut� (true). Tento n�sobok je �pecifikovan� d�tach �trukt�r v�robkov.":
24500 "Ke� je za�krtnut� pole 'V�dy pou�ite t�to sadu pravidiel', bude v tomto poli zvolen� pravidlo spojovanie, ktor� sa implicitne spust�, ke� v programe Sequencer zvol�te mo�nos� 'Spoji� materi�ly'.":
24505 "T�to glob�lna vo�ba men� implicitn� spr�vanie SMC tak, �e povol� sp�tn� prepojenie pre pr�pady, ke� d�jde k v�robe a� po spotrebe.":
24510 "Ke� bude tento prep�na� za�krtnut�, uplat�uje sa pravidlo vybran� v poli 'Vybran� sada pravidiel sp�jania' ako implicitn� pravidlo, ktor� pobe��, ak v programe Sequencer je zvolen� mo�nos� 'Spoji� materi�ly'. Ke� mo�nos� 'V�dy u�i� t�to sadu pravidiel' nebude za�krtnut�, objav� sa dial�g v�beru pravidiel, ke� vyberiete mo�nos� 'Spoji� materi�ly', �o dovol�, aby toto pravidlo, ktor� m� be�a�, bolo vybran� v tomto okamihu.":
25400 "Toto pole sa pou��va pre ��slo pr�kazu z�sobenia.":
25410 "Toto pole vyzna�uje typ pr�kazu, napr�klad Z�soba alebo N�kup.":
25420 "N�zov organiz�cie, ktor� dod�va materi�l pre dan� pr�kaz.":
25430 "��slo dielu, pre ktor� je tento pr�kaz.":
25440 "Popis dielu, pre ktor� je tento pr�kaz.":
25450 "D�tum, kedy tento materi�l bude dodan�.":
25500 "Toto pole sa pou��va na vyzna�enie, ku ktor�mu pr�kazu patr� dan� diel. Prv� riadok pr�kazu bude rodi�ovsk�m z�znamom a v tomto poli zobraz� PARENT. Ostatn� riadky pr�kazu bud� z�znamy potomkov a v tomto poli zobraz� ��slo pr�kazu, ku ktor�mu tento diel patr�.":
25510 "Toto pole uchov�va ��slo dopytov�ho pr�kazu.":
25520 "Toto pole vyzna�uje typ pr�kazu, napr�klad v�roba na sklad alebo z�kazka.":
25530 "Jednozna�ne idetifikuje polo�ku pr�kazu.":
25540 "N�zov organiz�cie, ktor� po�aduje materi�ly pre tento pr�kaz.":
25550 "D�tum, kedy sa vy�aduje tento materi�l.":
25560 "�pecifikuje n�sobok artikla, ktor� treba spoji�. �asto je to po�et artiklov v krabici alebo puzdre, napr�klad 12 plechoviek tvoria jednu krabicu, pr�kaz vy�aduje 60 plechoviek. Pr�kaz je na 50 plechoviek. Preactor spoj� iba 48 plechoviek z 50, potom sa pozrie po zost�vaj�cich 12 plechovk�ch, ktor� sa po�aduj�, ale urob� spoj len vtedy, ke� ich n�jde presne 12. Mus�te za�krtn�� pole 'Priradi� len n�sobky' v datab�ze 'Pravidl� sp�janie', aby ste zapli t�to vlastnos�.":
25600 "Order number that the BoM line belongs to.":
25605 "Part number of the order that BoM line belongs to.":
25610 "Operation number that the BoM line belongs to.":
25611 "Name of the operation that the BoM line belongs to.":
25615 "Part number of the product which requires the specified material":
25620 "��slo dielu polo�ky �trukt�ry v�robku.":
25630 "Po�adovan� mno�stvo polo�ky �trukt�ry v�robku.":
25640 "Ke� je nastaven� na zapnut� (true), toto pole sp�sob�, �e mno�stvo pr�kazu sa vyn�sob� po�adovan�m mno�stvom �trukt�ry v�robku.":
25650 "Sp�sob�, �e na nedostatok materi�lu nebude bran� oh�ad, ke� je spusten� pravidlo sp�jania. Dovo�uje rozvrhova� pr�kazy s nedostatkom materi�lu.":
25700 "��slo pr�kazu, v ktorom sa vyr�ba koprodukt.":
25705 "Part number of the order that co-product is produced in.":
25710 "��slo oper�cie, ktor� vyr�ba koprodukt.":
25715 "Operation name that produces co-product.":
25720 "N�zov koproduktu.":
25730 "Vyroben� mno�stvo koproduktu.":
25740 "Ke� je toto pole nastaven� ako zapnut� (true), sp�sob�, �e mno�stvo koproduktu sa bude n�sobi� mno�stvom pr�kazu.":
25800 "Toto pole vyzna�uje typ pr�kazu, napr�klad pracovn� pr�kaz, n�kupn� objedn�vka, z�kazka alebo z�soba.":
25810 "Ke� je pole za�iarknut�, nerozvrhnut� oper�cia sa u� na�alej nebude zobrazova� v okne 'Nerozvrhnut� oper�cie'.":
25820 "Zobrazuje dial�g s po�ami, ktor� sa t�kaj� riadenia materi�lu.":
25830 "Toto pole poskytuje inform�cie o statuse dopytu potom, �o materi�ly boli spojen�. Bude obsahova� jednu z nasleduj�cich hodn�t: 'Nezn�me', 'Splnen�', 'vzniknut� nedostatok ignorovan�', 'Nedostatok', 'Nadmern� z�sobenia', 'Nadmern� z�sobenie, nedostatok', 'Nadmern� z�sobenie, v�etok nedostatok ignorovan�'.":
25840 "Toto pole sa zapln� potom, �o materi�ly bud� spojen�. Ke� urob�te spoj na pr�kaz z�sobenia v datab�ze pr�kazov, pole 'D�tum dopytu' v datab�ze pracovn�ch pr�kazov sa vypln� hodnotou 'D�tum z�sobenia' pr�kazu z�sobenia. Preactor vyhodnot� d�tum z�sobenia vo�i hodnote 'Najskor�� d�tum za�atia' a ??pou�ije neskor�� z t�chto dvoch d�tumov k rozhodnutiu, ktor� d�tum sa m� pou�i� pri rozvrhovan�.":
25850 "Toto pole sa zapln� potom, �o materi�ly bud� spojen�. Ke� bol uroben� spoj na pr�kaz dopytu v datab�ze, pole 'D�tum z�sobenia' v datab�ze pr�kazov sa vypln� hodnotou d�tumu dopytu, s ktorou je tento pr�kaz spojen�. Preactor vyhodnot� d�tum dopytu vo�i term�nu dokon�enia a pou�ije najskor�� z dvoch d�tumov k rozvrhovaniu.":
25900 "Zobraz� dial�g s po�ami t�kaj�cimi sa stausu oper�cie.":
25910 "T�to vo�bu m��ete vybra�, ke� pr�kaz bude rozdelen�, t�to mo�nos� umo�n�, �e ka�d� z v�robn�ch �iastkov�ch d�vok bude pokra�ova� v�robn�m procesom nez�visle, napr�klad v�etky �iastkov� d�vky sa nemusia dokon�i� v jednej oper�cii, sk�r ne� m��e za�a� oper�cia nasleduj�ca.":
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
