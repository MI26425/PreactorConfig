#VERSION 0
;
CSY POPUP HELP
1 "S touto polo�kou nen� sdru�en� ��dn� n�pov�da.":
10 "Toto pole ur�uje, ke kter�mu pracovn�mu p��kazu sou��st pat��. V prvn� operaci p��kazu je vypln�n nad��zen� artikl, v dal��ch operac�ch je vypln�na jedine�n� hodnota ��sla nebo n�zvu p��kazu.":
40 "This field is used to identify the part number.  Pressing the button will show all part numbers in the products data table. Selecting a part number will automatically change the name of the product.":
41 "Toto pole obsahuje seznam r�zn�ch status�, kter� lze definovat pro  pracovn� p��kaz. Hodnoty se berou z tabulky dat status� pracovn�ch p��kaz�, kam lze p�idat nov� status, jestli�e to je pot�ebn�. Vzor pruhu operace, nastaven� v tabulce dat status� pracovn�ch p��kaz� pro ka�d� z typ� status�, m��ete pou��t k definov�n� vzoru pruhu operace pracovn�ho p��kazu, kdy� se pracovn� p��kaz rozvrhuje v programu Sequencer.":
45 "This field is used to identify the part number.":
50 "This field is used to identify the name of the product. Use the button to select the name, the part number will be automatically changed.":
55 "This field is used to identify the name of the product.":
60 "Toto pole se vyu��v� k vyzna�en� ��sla pracovn�ho p��kazu pro dan� v�robek. To m��e b�t intern� ��slo pracovn�ho p��kazu nebo ��slo, specifikovan� z�kazn�kem. ��slo pracovn�ho p��kazu mus� b�t jednozna�n�.":
70 "This field can be used to contain notes about this order. It could be a reminder regarding due dates, or simply a message to the packer/assembler on the shop floor.":
75 "Opens a dialog showing all of the Attribute information for the operation.":
80 "Toto pole vyu�ijte k nastaven� priority pro danou pr�ci, kter� se zase pou�ije v programu Sequencer. ��m ni��� je ��slo, t�m vy��� je priorita. V�imn�te si, �e priority mohou b�t z�porn�: z�porn� priorita je vy��� ne� priorita kladn�. Nap��klad -100 je vy��� ne� -1 a 0 je vy��� ne� 10.":
90 "Toto pole nastavuje ��slo operace pro pr�ci. To se vyu��v� k �azen� prac� do posloupnost� v programu Sequencer. Operace s nejni���m ��slem budou dokon�eny p�ed zah�jen�m operac� s vy���mi ��sly. Jestli�e ve v�robku existuj� dv� operace se stejn�m ��slem, pak ob� budou dokon�eny p�ed zah�jen�m operac� s vy���mi ��sly.":
110 "Toto je psan� popis nebo n�zev operace, kter� se kon�, tak� vyzna�en� ��slem operace.":
112 "Opens a dialog containing information about the Resource data assigned to this operation":
120 "Skupiny se��zen� jsou definov�ny v tabulce dat skupin se��zen�, nap��klad skupina se��zen� 1, skupina se��zen� 2 atd. Tyto hodnoty se vyu��vaj� jako osy jedn� z matic dob se��zen� z�visl�ch na posloupnostech, kter� zakl�daj� dobu p�estaven� mezi v�robky v r�zn�ch skupin�ch se��zen� (typicky nastaven� v tabulce dat zdroj�). Jednotliv� skupiny se��zen� jsou p�i�azen� v�robk�m v tabulce dat v�robk�, p���em� tyto implicitn� hodnoty lze p�epsat v souboru hlavn�ho rozvrhu.":
130 "This field identifies the group of valid resources that can carry out the current operation.":
140 "Jestli�e to je nutn�, toto pole lze vyu��t k ozna�en� konkr�tn�ho zdroje, kter� m� zpracovat danou operaci. Jestli�e v tabulce dat v�robk� bylo nastaveno 'Zvolit ze skupiny', pak ka�d� ze zdroj� ve skupin� zobrazen� v poli Skupina zdroj� m��e b�t pou�it. Jestli�e chcete prosadit operaci na konkr�tn� zdroj ve skupin�, pak pou�ijte p�ekryvn� seznam a zvolte po�adovan� zdroj.":
150 "Toto pole zobrazuje skute�n� zdroj, kter� zpracuje danou operaci. Jestli�e pracovn� p��kaz nebyl rozvr�en ji� d��ve, pak zde bude nastaveno 'Nespecifikov�no'. Jestli�e operace ji� byla zavedena na pl�novac� tabuli, pak se zobraz� skute�n� nastaven� zdroj k zaveden�.":
180 "Toto pole se u��v� pro konstatov�n�, zda rychlost zpracov�n� se po��t� jako �as na d�vku, �as na kus nebo rychlost za hodinu. Jestli�e zvol�te '�as na d�vku', pak �as zobrazen� v poli dole je �as, kter� trvalo zpracov�n� v�ech d�l� v d�vce. Kdy� zvol�te '�as na kus', pak doba zpracov�n� bude hodnota v poli dole n�soben� velikost� d�vky. Jestli�e zvol�te 'rychlost za hodinu', pak doba zpracov�n� se vypo��t� p��mo z po�tu kus� v d�vce.":
220 "Aktu�ln� jste zvolili typ doby zpracov�n� '�as na kus'. Do tohoto pole mus�te zadat dobu operace pro ka�d� z artikl�.":
230 "Aktu�ln� jste zvolili dobu zpracov�n� typu '�as na d�vku'. V tomto poli mus�te vyzna�it celkovou dobu operace pro d�vku.":
240 "Aktu�ln� jste zvolili dobu zpracov�n� typu 'Rychlost za hodinu'. V tomto poli mus�te vyzna�it, kolik kus� m��e b�t vyrobeno za hodinu.":
251 "Barva v tomto poli sd�luje programu Sequencer, aby zobrazil odd�l Ganttova grafu odli�nou barvou. Barevn� zna�ky na pruhu se zakl�daj� na hodnot�, kter� byla zad�na do pole Mno�stv� uprost�ed d�vky.":
260 "Toto pole se pou��v� ke specifikaci mno�stv� p��kazu nebo d�vky.":
270 "This field is used to specify the order or batch profit and can be used to influence sequencing when using the weighting rule.":
280 "This field will show the start time of the first operation in this order if the MakeSpan feature is enabled":
290 "This field will show the end time of the last operation in this order if the MakeSpan feature is enabled":
300 "This value determines the quantity that should be processed before the subsequent operation can be started. A value of Unspecified prevents operation overlapping":
360 "U��v� se ke specifikaci datumu, p�ed kter�m operace nem��e za��t. To m��e nap��klad b�t �as, a� materi�ly budou k disposici.":
370 "This field is to be used to establish the due date.The due date is used to highlight late items in the Sequencer and to prioritize job loading to the planning board if the 'due date' option is selected.":
380 "Zvolte tento p�ep�na� a zobrazte pro program Scheduler, �e �daje �asu zah�jen� a �asu ukon�en� jsou skute�n� �asy. Kdy� je tento p�ep�na� nastaven, zabr�n�, aby pracovn� p��kaz nebyl p�i�azen ��dn�mu zdroji v programu Sequencer. Ve skute�nosti je upevn�n na pl�novac� tabuli.":
390 "Program Scheduler nastav� toto pole b�hem �azen� do posloupnost� na �as, na kter� je pr�ce rozvr�ena k zah�jen� se�izov�n�.":
400 "Program Scheduler aktualizuje toto pole b�hem �azen� do posloupnosti na �as, na kter� je rozvr�eno zah�jen� pr�ce.":
410 "Program Scheduler aktualizuje toto pole b�hem �azen� do posloupnosti na �as, na kter� je rozvr�eno ukon�en� pr�ce. ":
420 "Nastavte tento p�ep�na�, jestli�e si nep�ejete, aby pr�ce byla nep�i�azena pot�, kdy v programu Sequencer zvol�te Nep�i�azovat  v�echny pr�ce. T�m operaci uzamknete. Tot� lze prov�st v programu Sequencer tak, �e uk�ete my�� na operaci  (ikonu nebo pruh v souhrnu), stisknete kl�vesu Shift a poklepete lev�m tla��tkem my�i. ":
421 "Operace, kter� maj� tento p�ep�na� za�krtnut� budou ponech�ny  nep�i�azen� v okn� nep�i�azen�ch, kdy� se automaticky rozvrhuj� operace.":
430 "Umo��uje, aby definovateln� charakteristiky se staly atributy v�robk�, nap��klad barva. V r�mci konkr�tn� charakteristiky   z�znamy dostanou kategorie priorit, nap��klad 'b�l�' v�robky mohou m�t vy��� prioritu ne� v�robky '�lut�'. Tyto atributy se u��vaj� v programu Scheduler v pravidlech p�ednostn�ho �azen� do posloupnost�, kdy se podobn� p��kazy slu�uj� do v�hledu.":
440 "Vypl�te informace o dokon�en�m mno�stv� a zadejte �as, kdy byla dokon�ena '��st d�vky' do pole �as uprost�ed d�vky. Program  Scheduler automaticky p�epo��t� '�as ukon�en�' pro tuto operaci.":
450 "Vypl�te �as, kdy byla dokon�ena '��st d�vky' a zadejte informace o dokon�en�m mno�stv� do pole Mno�stv� uprost�ed d�vky. Program Scheduler automaticky p�epo��t� '�as ukon�en�' pro tuto operaci.":
460 "Pole Skute�n� doba operace vyu��v� zad�n� do pol� �Mno�stv� uprost�ed d�vky� a ��as uprost�ed d�vky� a vypo��t� revidovanou dobu operace na z�klad� t�to informace. Nutno poznamenat, �e kv�li spr�vn� funkci tohoto vybaven�, �daje �as� uprost�ed d�vky a mno�stv� uprost�ed d�vky se mus� pozm�nit, kdy� v r�mci programu Sequencer se zobrazuje editor, jinak se �daj skute�n� doby operace zm�n� pouze p�i p��t� p��le�itosti, kdy� vstoup�te do programu Sequencer.":
474 "U��v� se k z�znamu n�klad� artiklu v bod�, kde jsou uvedeny do procesu. Dan� pole lze u��t k z�znamu fixn�ch n�klad� na kus, nap��klad subdodavatesk� tepeln� zpracov�n� atd.":
476 "Vyu��vejte materi�lov� n�klady na kus a zajist�te tak materi�lov� n�klady d�vky v bod�, kde se n�klady na kus uv�d�j� do procesu.":
477 "P��m� n�klady na pr�ci v aktu�ln�m procesu.":
530 "Zakl�d� �asov� horizont, ve kter�m se pr�ce mohou d�vat do skupin k v�rob�. Zdroj dokon�uj�c� operaci na pl�novac� tabuli se bude d�vat dop�edu od bodu na �asov�m horizontu uveden�m v okn� v�hledu. Krit�ria p�ednostn�ch posloupnost�, nastaven� v tabulce dat zdroj�, se pou��vaj� k v�b�ru prac� z t�ch, jejich� term�n dokon�en� spad� do tohoto �asov�ho horizontu. Pro ka�d� jednotliv� v�robek lze zalo�it okno v�hledu v tabulce dat v�robk� a zm�nit pro jednotliv� p��kazy v souboru hlavn�ho rozvrhu nebo ho lze zalo�it jako glob�ln� pravidlo v informac�ch nastaven� konfigurace. ":
540 "Zalo�en� v tabulce dat v�robk�, poskytuje p��stup k wordovsk�mu dokumentu, kter� m��e obsahovat informace t�kaj�c� se v�robku. K dokumentu je p��stup z editoru hlavn�ho rozvrhu, kde ho lze t� upravovat.":
541 "Toto pole se u��v� k popisov�n� pokroku jednotliv�ch operac�. Existuj� �ty�i r�zn� stavy pokroku (postupu d�la): Nezah�jen�; Se��zen�; V�roba; Dokon�en�":
550 "V�robky mohou m�t p�idru�en� konkr�tn� charakteristiky, kter� jsou v programu Scheduler um�st�n� do tabulky dat atribut�. Tyto tabulky jsou u�ivatelsky definovan� a nap��klad tabulka atributu 1 v�robku m��e b�t vyhrazena pro barvu, kde jednotliv� z�znamy budou nazvan�  - �erven�, modr�, zelen� atd. Atributy v�robk� lze volit v poli Shoda podobn�ch v tabulce dat v�robk� a definovat v poli Doba se��zen� podobn�ch.":
560 "U��v� se k zalo�en� kategori� priorit mezi z�znamy v tabulce dat Atribut 1 v�robku, pou��v� se v pravidlech APS p�i �azen� do posloupnost�.":
570 "V�robky mohou m�t p�idru�en� konkr�tn� charakteristiky, kter� jsou v programu Scheduler um�st�n� do tabulky dat atribut�. Tyto tabulky jsou u�ivatelsky definovan� a nap��klad tabulka atributu 2 m��e b�t v�nov�na materi�lu, kde jednotliv� z�znamy budou nazv�ny � ocel, mosaz, m�� atd. Atributy v�robk� lze volit v poli Shoda podobn�ch a definovat v poli Doba se��zen� podobn�ch.":
580 "U��v� se k zalo�en� kategorizov�n� priorit mezi z�znamy v tabulce dat Atribut 2 v�robku, u��van� pravidly APS p�i �azen� do posloupnost�.":
590 "V�robky mohou m�t p�idru�en� konkr�tn� charakteristiky, kter� jsou v programu Scheduler um�st�n� do tabulky dat atribut�. Tyto tabulky jsou definovan� u�ivatelem a nap��klad tabulku Atribut 3 m��ete vyhradit pro ���ku materi�lu s jednotliv�mi z�znamy nazvan�mi  � 16', 18', 20', 24' atd. Atributy v�robk� lze volit v poli Shoda podobn�ch a definovat v poli Doba se��zen� podobn�ch.":
600 "U��v� se k zalo�en� kategori� priorit mezi z�znamy v tabulce Atribut 3 v�robku a vyu��v� se v pravidlech APS p�i �azen� do posloupnost�.":
602 "Toto pole po��t� dobu trv�n� celkov�ho pracovn�ho p��kazu od zah�jen� se�izov�n� prvn� operace do �asu ukon�en� posledn� operace p��kazu.":
620 "Pravidlo odes�l�n�, kter� po��t� indexov� ��slo d�len�m �asu do term�nu dokon�en� o�ek�van�m uplynul�m �asem do dokon�en� pr�ce. Pom�r men�� ne� jedna zna��, �e pr�ce zaost�v� za rozvrhem, pom�r v�t�� ne� jedna zna��, �e pr�ce rozvrh p�edb�h�.":
815 "Tato volba dovoluje, abyste zalo�ili hodnoty pro doby se��zen� a doby operac�. Tak� se vyu��v� k aktualizaci pokroku (postupu) pr�ce v�robn�m syst�mem.":
1020 "Specifikuje n�zev skupiny zdroj�. Ten se bude u��vat k ozna�en� konkr�tn�ch skupin zdroj�, kter� jsou schopn� vykon�vat podobn� funkce.":
1030 "Vyzna�uje platn� zdroje pro skupinu zdroj�. Jeden zdroj m��e b�t �lenem v�ce ne� jedn� skupiny. ":
1060 "Kdy� je tento p�ep�na� zapnut�, zobraz� graf u�it� pro skupinu zdroj� v okn� v�ce graf� v programu Sequencer.":
1070 "Tato barva se zobraz� na grafu u�it�, kter� je viditeln� v okn� v�ce graf� v programu Sequencer.":
1080 "Graf u�it� v okn� v�ce graf� v programu Sequencer zobraz� tuto barvu, kdy� u�it� p�ekro�� po�et hodin dostupn�ch pro dan� zdroj nebo skupinu zdroj� (jestli�e pole Max. hodiny u�it� je nastaven� jako nespecifikovan�). Jestli�e do zm�n�n�ho pole byla zad�na n�jak� hodnota, pak graf zm�n� barvu podle t�to hodnoty. ":
1090 "Graf u�it� v okn� v�ce graf� v programu Sequencer pou�ije tuto barvu k vykreslen� ��ry, kter� ozna�� u�it� se��zen� m��en�ho v hodin�ch. ":
2020 "Specifikuje n�zev jednotliv�ho zdroje.":
2023 "Hodinov� n�klady provozov�n� dan�ho zdroje.":
2024 "Aplikuje hodnoty 'N�kladov� koeficient %', zalo�en�ho v kmenov�ch z�znamech kalend���, na hodinov� n�klady zdroje.":
2030 "Tento dialog udr�uje informace o zp�sobu, jak�m zp�sobem se m� zdroj nebo skupina zdroj� zobrazit v okn� souhrnu posloupnosti a v grafech u�it�.":
2040 "Lze nastavit Viditeln�, Minimalizovan� nebo Zablokovan�. Vyu��v� se k ovl�v�n� po��te�n�ho stavu v okn� tohoto zdroje, kdy� zahajuje svou �innost program Sequencer. Norm�ln� nastaven� je Minimalizovan�. Kdy� je nastaveno Zablokovan�, dan� zdroj se nepou�ije p�i �azen� do posloupnosti. ":
2050 "Ovl�d� vodorovnou (�asovou) stupnici Ganttov�ch oken zdroj� v programu Sequencer. M��e se m�nit od minut do t�dn� na jednotku.":
2070 "Dovoluje nastavit kapacitu zdroje na Kone�n� (Omezen�), Nekone�n� (Neomezen�) nebo Nekone�n� s uspo��d�n�m sm�n.":
2071 "Dovoluje nastavit kapacitu zdroje na Kone�n� (Omezen�), Nekone�n� (Neomezen�) nebo Nekone�n� s uspo��d�n�m sm�n p�i b�hu programu Sequencer v re�imu neomezen� kapacity.":
2080 "Ovl�d� vodorovnou (�asovou) stupnici oken zdroj� uspo��dan�ch vedle sebe v programu Sequencer.":
2100 "Vyb�r� sekund�rn� omezen� k pou�it� na prim�rn� zdroj. Specifikuje mno�stv� omezen� vy�adovan� zdrojem a zp�sob, jak�m se omezen� pou�ije na prim�rn� zdroj.":
2110 "Ur�uje, jak se u�it� (spot�eba) sekund�rn�ho zdroje m� zv�t�ovat nebo zmen�ovat, nap��klad zv�t�en� pro trv�n�, kter� vyu��v� sekund�rn� omezen� pro trv�n� dan� operace a uvol�uje ho p�i dokon�en�. Jestli�e pr�ce je um�st�na na skl��idlo na n�kolik operac�, m��ete specifikovat zv�t�en� p�i zah�jen� pro prvn� operaci a zmen�en� p�i dokon�en� pro posledn� operaci. To zajist�, �e skl��idlo nelze pou��t pro ��dnou jinou pr�ci, zat�mco prvn� pr�ce je ve front� na zdroji.":
2120 "Specifikuje pot�ebn� mno�stv� sekund�rn�ho omezen�. Jestli�e vyberete hodnotu 'Mno�stv�', pot�ebn� mno�stv� se rovn� mno�stv� d�vky pr�v� zpracov�van�.":
2130 "Definuje atribut operace, kter� zabr�n� vykon�v�n� nepodobn�ch operac�  sou�asn� na zdroji s nekone�nou kapacitou.":
2150 "U��v� se v produktech APS kv�li zalo�en� krit�ri� k pou�it� v pravidlech �azen� do p�ednostn�ch posloupnost� p�i vyb�r�n� pr�ce ke zpracov�n�.":
2160 "U��v� se v produktech APS v pravidlech rozvrhov�n� p�i minimalizaci rozpracovan� v�roby kv�li zalo�en� �asov�ch vyrovn�v�n� dod�vek, ve kter�ch se rozpracovan� v�roba m��e akumulovat p�ed vybran�mi zdroji.":
2180 "Numerick� hodnota u��van� ke t��d�n� do po�ad�, ve kter�m se zdroje zobrazuj� v tabulce dat zdroj�. Tak� ji lze vyu��t a p�epsat implicitn� po�ad�, ve kter�m se zdroje zobraz� v souhrnu posloupnosti.":
2181 "Displays the dialog where advanced resource constraint options can be defined if required":
2182 "Allows the definition of complex inter resource relationships using expressions. Details of expression syntax and creation can be found in the documentation.":
2183 "Allows the user to chose an attribute of an operation on an infinite capacity resource which specifies that only operations with the same value in the selected attribute can be scheduled at the same time.":
2185 "Determines whether a separator line is displayed below the resource on the gantt chart.  This can help when visualing resources in groups.":
2190 "Ur�uje zp�sob, jak�m se zdroje zobraz� v souhrnu posloupnosti.   Alternativy jsou 'V�dy', 'Pouze ve skupin�' a 'Skr�t'.":
2191 "Ur�uje zp�sob zobrazen� operac� v souhrnu posloupnosti. Lze zvolit hromadn� zobrazen�, kde jsou operace zobrazeny na jedn� ��dce souhrnu nebo kask�dn� zobrazen�, kde ka�d� operace je zobrazena na zvl�tn� ��dce.":
2200 "Used to establish a matrix of sequence dependent set-up values, defining the set-up time required changing from a product of one attribute type to another.":
2201 "This field sets which changeover group is assigned to this resource and as a result determines which changeover times between operations with different attributes are applied.":
2202 "Determines whther the setup and changeover times related to operations on this resource are applied concurrently or cumulatively.":
2205 "U�it� tohoto za�krt�vac�ho r�me�ku zastav� za�len�n� dan�ho zdroje do v�po�t� metriky v�konnosti rozvrhu.":
2210 "Toto pole se pou��v� k volb�, k jak�mu syst�mu prohl�e�e pat�� dan� zdroj. Pole obsahuje seznam n�zv� syst�m� p�evzat� z tabulky dat knihy adres PCO. ":
2220 "Toto tla��tko otev�r� dialog uv�d�j�c� r�zn� atributy sdru�en� se zdrojem.":
2230 "Toto pole dovoluje zad�vat �et�zcov� atributy pro dan� zdroj.":
2240 "Toto pole dovoluje zad�vat data re�ln�ch atribut� pro dan� zdroj. ":
2250 "Toto pole dovoluje zadat data atributu trv�n� pro dan� zdroj.":
2260 "Toto pole ozna�uje ��innost zdroje, implicitn� hodnota je 100%, jestli�e se ��innost zm�n� na 200%, pak ka�d� operace rozvr�en� na tento zdroj by byla zpracov�na dvakr�t tak rychle (polovina ��dn� doby zpracov�n�). ":
2270 "To je pole p�ep�na�e, kter� p�i zapnut� pou�ije hodnotu ��innosti v poli ��innost % na v�echny operace, kter� maj� doby se��zen� a jsou rozvr�en� na zdroj, kde je p�ep�na� nastaven� zapnut�.":
2280 "Kdy� je tento p�ep�na� zapnut�, zobraz� graf u�it� pro zdroj v okn� v�ce graf� v programu Sequencer.":
5035 "N�kladov� koefecient, kter� ovliv�uje provozn� n�klady zdroje, na kter� se pou��v�. Pou�it� hodnoty 100% neznamen� ��dn� vzr�st, hodnota 150% zv��� provozn� n�klady o 50%. N�kladov� koeficienty jsou zalo�eny v tabulce dat stav� kalend��� a poskytuj� implicitn� hodnoty u��van� v kmenov�ch souborech hlavn�ho rozvrhu.":
6100 "Displays a dialog which allows the selection of which resources from the selected group are valid and the assigment of resource specifc data.":
6110 "This field determines whether the resource will be selected during automatic sequencing.  If unticked the operation can still be manually placed on the resource.":
6120 "This field enables an individual setup time value to be established each of the resources that are valid for the operation.":
6130 "This field enables an individual operation time to be established for each of the resources that are valid for the operation.":
6131 "This field enables an individual rate per hour to be established for each of the resources that are valid for the operation.":
6132 "This field enables an individual batch time to be established for each of the resources that are valid for the operation.":
6140 "This field is used to define a secondary resource used by the primary resource during the current operation.":
6150 "Toto pole se u��v� ke specifikaci, jak bude sekund�rn� omezen� pou�it� b�hem dan� operace, nap��klad zv�t�en� pro trv�n�, zv�t�en� pouze pro dobu se��zen� atd.":
6160 "Toto pole u�ijte pro vyzna�en� mno�stv� sekund�rn�ho omezen� b�hem aktu�ln� operace, nap��klad m��ete specifikovat, �e dan� operace pot�ebuje jedno st�l� skl��idlo.":
6170 "The Scheduler will utilize this period of time to attempt to load the current operation onto the preferred resource. If it is unable to do so by the end of this time, it will try to load the operation on any other resources in the group.":
6180 "Funkce Nastavte skupinu n�sledn�ch zdroj� zakl�d� 'prosazovan� seznam' zdroj�, to jest zdroj� specifikovan�ch ve zvolen� skupin�. Prosazuje, aby operace 'po proudu' nebo n�sledn� operace  pou��valy pouze ty zdroje, kter� jsou obsa�eny v 'prosazovan�m seznamu'. Tud� jestli�e postup zpracov�n� vol� skupinu zdroj� v operaci po proudu obsahuj�c� n�kter� zdroje, kter� nejsou v onom seznamu, ty nebudou u�ity p�i �azen� do posloupnosti. Funkce Nastavte skupinu n�sledn�ch zdroj� je akumulativn� funkce a lze ji vyu��t ve v�ce ne� jedn� operaci v postupu, p�i�em� p�id�v� zdroje do 'prosazovan�ho seznamu'.":
6190 "Funkce Obnovte skupinu n�sledn�ch zdroj� odstra�uje v�echny zdroje obsa�en� ve zvolen� skupin� zdroj� z 'prosazovan�ho seznamu' zalo�en�ho p��kazem Nastavte skupinu n�sledn�ch zdroj�. Jestli�e byla zalo�ena konceptu�ln� skupina zdroj� 'V�echny', kter� zahrnuje v�echny dostupn� zdroje, zdroje pou�it� n�sledn�mi operacemi budou ty nastaven� v p�vodn�m postupu.":
6230 "Toto pole umo��uje zadat dobu se��zen� p�i p�echodu od p�edchoz�ho v�robku na aktu�ln� v�robek. Hodnoty v poli Doba se��zen� budou p�id�ny k v�em hodnot�m se��zen� zalo�en�m pro dan� zdroj matic� Doby se��zen� z�visl� na posloupnosti.":
6430 "Zvolte n�zev ikony z p�ekryvn�ho r�me�ku. Tla��tko Upravit dovol�, abyste vytvo�ili nov� ikony.":
6470 "Displays the Valid Secondary Constraints Dialog, allowing valid constraints to be applied to individual records in this table. Characteristics of constraint usage can also be edited here.":
6530 "Specifikuje maxim�ln� �asov� interval dovolen� mezi dv�ma n�sledn�mi opreracemi. Tento interval se vymezuje polem 'Typ intervalu', kter� zakl�d� vztahy 'Od za��tku do za��tku', 'Od konce do konce' atd.":
6540 "Zalo�� vztah u��van� k um�st�n� maxim�ln�ho �asov�ho intervalu mezi dv� sousedn� operace, stanoven�ho v poli 'Max. �as p�ed dal�� operac�'. To m��e b�t vztah 'Od konce do konce', 'Od konce do zah�jen�', 'Od zah�jen� do zah�jen�' nebo 'Od zah�jen� do konce'. ":
6550 "Specifikuje maximum �asu, vyj�d�en� jako procento teoretick� doby zpracov�n�, p�es kter� se operace m��e roz���it, kdy� se automaticky �ad� do posloupnosti programem Sequencer.":
6560 "Defines a given amount of slack time to be built in between this operation and the previous.":
6565 "Defines a given amount of slack time to be built in between this operation and the next.":
6580 "This field can be used to apply a process rate multiplier order to affect the operation length.":
6681 "This field is used to specify an attribute of this record which is referenced from one of the attribute tables.  These can be used to affect setup times, scheduling order and constraint usage.":
6682 "This field is used to specify a free format string attribute of this record.  These can be used set display options and group operations.":
6683 "This field is used to specify a numerical attribute of this record.  These can be used to  set display options, affect scheduling order and constraint usage.":
6684 "This field is used to specify a date attribute of this record. These can be used to set display options and affect scheduling order.":
6685 "This field is used to specify a duration attribute of this record. These can be used to set display options and affect scheduling order.":
6690 "Pole Vyrovn�vac� z�sobn�k obsahuje �asov� �daj, kter� se ode�te od term�nu dokon�en�, kdy� se zp�tn� �ad� do posloupnosti, tak�e operace budou rozvr�eny na d��v�j�� �as, ne� je nejpozd�j�� mo�n� �as. To dovoluje uva�ovat neo�ek�van� zpo�d�n� procesu.":
7020 "Po�et dn� p�ed aktu�ln�m �asem, kter� lze zobrazit v souhrnu posloupnosti.":
7030 "�asov� obdob�, po aktu�ln�m �ase, kter� lze zobrazit v souhrn u posloupnosti.":
7035 "Otev�e dialog nastaven� konfigurace, kter� u�ivateli dovoluje ud�lat z�kaznick� �pravy souhrnu posloupnosti.":
7040 "Specifikuje posun od �asu zad�n� pracovn�ho p��kazu, p�ed kter�m nelze pr�ci zah�jit. Pokud je nastaveno Nespecifikov�no, neexistuje ��dn� jin� omezen� ne� aktu�ln� �as.":
7050 "Specifikuje posun od �asu zad�n� pracovn�ho p��kazu, do kter�ho  nebude pr�ce dostupn�. Lze p�epsat.":
7060 "Mno�stv� �asu, o kter� byl posunut termin�tor od aktu�ln�ho �asu. Termin�tor p�edstavuje aktu�ln� �as, kdy� posun termin�toru je nastaven na 0 hodin 00 minut.":
7067 "Zakl�d� volby v�po�t� n�klad�, kter� jsou: B�hem posloupnosti, Po posloupnosti, Nikdy. ":
7120 "Nastav� re�im souhrnu posloupnosti.":
7130 "Po�et dn� od nyn�j�ka, dokdy lze zah�jit souhrn posloupnosti.":
7140 "Po�et dn� od nyn�j�ka, dokdy lze ukon�it souhrn posloupnosti.":
7320 "Umo��uje vybrat skript, pot�ebn� k importu pracovn�ch p��kaz�, z tabulky dat 'Skripty'. ":
7330 "Umo��uje vybrat skript, pot�ebn� k exportu pracovn�ch p��kaz�, z tabulky dat 'Skripty'. ":
7430 "Toto pole p�ep�na�e, kdy� je za�krtnut�, p�epne na mal� �ern� troj�heln�k u ka�d�ho pruhu operace v programu Sequencer. To usnad�uje p�etahov�n� operac�, kter� jsou p�i�azen�, na pl�novac� tabuli, zejm�na men�� operace.":
7450 "Specifikuje implicitn� Skript ud�losti PESP, kter� se p�i impportov�n� p��kaz� m� spustit tla��tkem 'Importovat p��kazy' z menu p�esunu dat.":
7470 "Specifikuje implicitn� Skript ud�losti PESP, kter� se p�i exportov�n� p��kaz� m� spustit tla��tkem 'Exportovat p��kazy' z menu p�esunu dat.":
7480 "Specifikuje implicitn� Skript ud�losti PESP, kter� se m� spustit p�i uvol�ov�n� rozvrh� tla��tkem 'Uvolnit rozvrh' z menu p�esunu dat.":
7490 "Specifikuje implicitn� Skript ud�losti PESP, kter� se m� spustit, kdy� se p�id�luj� operace v programu Sequencer se zapnutou mo�nost� vyu��v�n� pravidel APS.":
8020 "N�zev sekund�rn�ho omezen�.":
8030 "Dovoluje zvolit barvu u�ivatelsk�ho grafu programu Sequencer, kdy� hodnoty jsou mezi horn� a doln� mez�.":
8040 "Nastav� vzor vypln�n� (�rafov�n�) grafu.":
8060 "Vzor vypln�n� grafu, kdy� by graf m�l p�ekro�it horn� mez. ":
8080 "Vzor vypln�n� grafu, kdy� by graf m�l p�ekro�it doln� mez. ":
8090 "Specifikuje, zda toto sekund�rn� omezen� ovlivn� rozvrh, kdy� pou�ijete produkt 300 FCS nebo vy���. Ve v�ech verz�ch neza�krtnut� tohoto r�me�ku zastav� program Sequencer, aby vydal varov�n�, jestli�e budou p�ekro�eny meze nastaven� pro toto sekund�rn� omezen�.":
8091 "V re�imu nekone�n� kapacity programu Sequencer toto pole ur�uje, zda se p�i pou�it� produkt� 300 FCS a vy���ch m� druhotn� omezen� aplikovat na rozvrh.":
8092 "Options for controlling the behaviour of this constraint when the system is set to infinite capacity mode.":
8100 "Ur�uje, jak ��innost kalend��e prim�rn�ch zdroj� ovlivn� u�it� tohoto sekund�rn�ho omezen�. Mo�nosti jsou: Bez vlivu; ��innost za��tku pr�ce; Sledovat zm�ny ��innosti; Pou��t 100%, jestli�e je v�t�� ne�  0%":
8101 "P�i b�hu programu Sequencer v re�imu neomezen� kapacity toto pole ur�uje, jak ��innost kalend��e prim�rn�ch zdroj� ovlivn� u�it� tohoto sekund�rn�ho omezen�. Mo�nosti jsou: Bez vlivu; ��innost za��tku pr�ce; Sledovat zm�ny ��innosti; Pou��t 100%, jestli�e je v�t�� ne�  0%":
8120 "Toto tla��tko otev�e dialog uv�d�j�c� seznam r�zn�ch atribut� sdru�en�ch se sekund�rn�m omezen�m.":
8130 "Toto pole dovol� zadat �et�zcov� data atributu pro sekund�rn� omezen�.":
8140 "Toto pole dovol� zadat re�ln� data atributu pro sekund�rn� omezen�.":
8150 "Toto pole dovol� zadat data atributu trv�n� pro sekund�rn� omezen�.":
8160 "Kdy� je tento p�ep�na� zapnut�, zobraz� graf u�it� pro sekund�rn� omezen� v okn� v�ce graf� v programu Sequencer. ":
9020 "Nastavte n�zvy skupin, kter� tvo�� osy X a Y matice dob se��zen�  z�visl�ch na posloupnosti v tabulce dat zdroj�.":
12020 "N�zev z�znamu atributu v tabulce dat atributu 1 v�robku.":
13020 "N�zev z�znamu atributu v tabulce dat atributu 2 v�robku.":
14020 "N�zev z�znamu atributu v tabulce dat atributu 3 v�robku.":
16020 "N�zev u�it� k popisu konfigurace zobrazen� na obrazovce ulo�en� pod n�zvem souboru. Tento popis se tak� pou�ije jako tip zobrazen� pro ikony pruhu n�stroj� pracovn�ho prostoru.":
16030 "Soubor vybran� volbou souboru z mo�nost� nab�zen�ch tla��tkem  nalevo od pole. P�vodn� konfigura�n� soubor pracovn�ho prostoru se ulo�� s p��ponou  .WPI pomoc� polo�ky Ulo�it pracovn� prostor v nab�dce Pracovn� prostor v menu programu Sequencer.":
18510 "Jm�no jednotlivce nebo n�zev organizace, kter� uplatnila pracovn� p��kaz.":
18520 "Jm�no prim�rn�ho kontaktu v r�mci n�zev organizace, kter� uplatnila pracovn� p��kaz.":
18530 "Telefonn� ��slo k pou�it� ve spojen� s pracovn�m p��kazem.":
18540 "E-mailov� adresa k pou�it� ve spojen� s pracovn�m p��kazem.":
21000 "Toto pole dovoluje zadat r�zn� statusy pracovn�ch p��kaz�; status p��kazu m��ete vybrat v souboru Rozvrh.":
21020 "Toto pole se u��v� pro popis, co znamen� n�zev statusu pracovn�ho p��kazu zadan� do pole �N�zev statusu p��kazu�.":
21100 "Name of the attribute record in the Attribute data table.":
21110 "Used to establish a priority ranking between records in this Attribute data table which can be used by scheduling rules":
24000 "Toto pole specifikuje, zda z�znam je rodi�ovsk�m z�znamem sady pravidel nebo potomek.":
24010 "Obsahuje n�zev sady pravidel.":
24020 "Tento p�ep�na� se u��v� k vynulov�n� spojov�ch odkaz� pouze pro p��kazy, kter� jsou ve front� popt�vky prvn�ho pr�chodu (a� u� odblokovan� �i nikoli) sady pravidel.":
24030 "Uchov�v� n�zev konkr�tn� funkce pr�chodu pravidla. ":
24040 "P�ep�na�, kter� kdy� je nastaven� zapnut� (true), umo�n� pr�chod pravidla. Kdy� je nastaven vypnut� (false), pr�chod se bude ignorovat, kdy� se spust� sada pravidel.":
24050 "Kdy� je tento p�ep�na� zapnut� a spust� se sada pravidel, v pracovn�m adres��i se vytvo�� ladic� soubor.":
24060 "Toto pole se u��v� ke specifikov�n� krit�ri�, kter� lze u��t k omezen� toho, jak� polo�ky se um�st� do fronty intern�ho z�soben�. Implicitn� hodnota pro toto pole je nastaven� jako V�ECHNY, ale to se d� zm�nit zad�n�m v�razu nap��klad (~{$Order Type}~==~Stock~).  Fronta filtruje z�znamy uchov�van� v datab�zi pracovn�ch p��kaz�.":
24070 "Toto pole obsahuje krit�ria vyu�iteln� pro kategorizov�n� polo�ek ve front� intern�ho z�soben�. Nap��klad m��ete kategorizovat frontu intern�ho z�soben� pomoc� term�nu dokon�en�, datumu nejd��v�j��ho zah�jen� nebo priority. ":
24080 "Toto pole se u��v� ke specifikov�n� krit�ri�, kter� lze u��t k omezen�, jak� polo�ky se um�st� do fronty intern�ho z�soben�. Implicitn� hodnota pro toto pole je nastaven� jako V�ECHNY, ale to se d� zm�nit zad�n�m v�razu nap��klad (~{$Order Type}~==~Stock~).  Fronta filtruje z�znamy uchov�van� v datab�zi pracovn�ch p��kaz�.":
24090 "Toto pole obsahuje krit�ria vyu�iteln� pro kategorizov�n� polo�ek ve front� intern�ho z�soben�. Nap��klad m��ete kategorizovat frontu intern�ho z�soben� pomoc� term�nu dokon�en�, datumu nejd��v�j��ho zah�jen� nebo priority.":
24100 "Toto pole obsahuje seznam r�zn�ch standardn�ch pravidel spojov�n�, kter� poslou�� ke spojov�n� pracovn�ch p��kaz� dohromady. Tak� obsahuje t�i speci�ln� polo�ky: Definovan� u�ivatelem, U�ivatelsk� funkce a skript PESP, kter� poskytuj� p��le�itost tvo�it pravidla v�ce upraven� na pot�eby z�kazn�k�.":
24110 "Toto pole bude viditeln� tehdy, kdy� pole 'Typ pravidla' je nastaven� 'Definovan� u�ivatelem' nebo 'U�ivatelsk� funkce'. V�raz se m� pou��t pro pravidlo, zadan� do tohoto pole. Mo�n�m p��kladem je : (~{+:$Product Attribute 1}~==~{-:$Product Attribute 1}~), co� dovoluje, aby se spojovaly pouze p��kazy z�soben� i popt�vky, jestli�e pole 'Atribut 1 v�robku' budou m�t stejnou hodnotu.":
24120 "Toto pole bude viditeln� jen tehdy, kdy� pole 'Typ pravidla'  je nastaven� na 'Skript PESP'. Toto pole uchov�v� n�zev skriptu PESP, kter� se m� pou��t jako pravidlo.":
24130 "Tato volba dovoluje vytv��et spoje (odkazy) na ��dky struktury v�robku (kusovn�ku), kde mno�stv� polo�ky struktury v�robku nemus� b�t �pln� uspokojeno pro dan� spoj, kter� se m� ud�lat. Ka�d� polo�ka, kde chyb� materi�l, se zv�razn� jako nedostatek materi�lu. ":
24140 "Tato volba pouze dovol� tvo�it spoje na ��dky struktury v�robku, kde je mno�stv� struktury v�robku pln� uspokojeno. V�echny polo�ky, kde chyb� materi�l , se zv�razn� jako nedostatek materi�lu.":
24141 "Tato volba m�n� implicitn� chov�n� SMC tak, �e povol� zp�tn� propojen� pro p��pady, kdy dojde k v�rob� a� po spot�eb�.":
24150 "Kdy� je zde nastaveno �pravdiv��, p��kazy ji� rozvr�en� lze znovu spojovat.":
24160 "Kdy� je tento p�ep�na� zapnut� (true), pole 'Kategorizace fronty z�soben�' se odblokuje a dovol� �adit z�znamy z�soben� do kategori� podle v�b�rov�ho krit�ria 'Kategorizace fronty z�soben�'. Tuto mo�nost  volte jen v p��pad�, kdy se v�echny z�znamy uchov�vaj� v datab�zi pracovn�ch p��kaz�.":
24170 "Toto pole se u��v� ke specifikov�n� krit�ri�, kter� lze u��t k omezen� toho, jak� polo�ky se um�st� do fronty intern�ho z�soben�. Implicitn� hodnota pro toto pole je nastaven� jako V�ECHNY, ale to se d� zm�nit zad�n�m v�razu nap��klad (~{$Order Type}~==~Stock~).  ":
24180 "Bude zpracov�no ka�d� pole z klasifikace INHERIT FROM SUPPLY (n�zev pole).":
24190 "Bude zpracov�no ka�d� pole z klasifikace INHERIT FROM DEMAND (n�zev pole).":
24200 "Kdy� je tetno p�ep�na� zapnut� (true), pole 'Kategorizace fronty popt�vky' se odblokuje a dovol�, aby z�znamy popt�vky byly �azeny do kategori� podle krit�ria v�b�ru v poli 'Kategorizace fronty popt�vky'. Tuto volbu pou�ijte, jen kdy� v�echny z�znamy budou uchov�v�ny v datab�zi pracovn�ch p��kaz�.":
24210 "Mno�stv� vytvo�en�ho spoje (odkazu) se bude p�i�azovat v e stanoven�ch n�sobc�ch, jestli�ev tento p�ep�na� bude zapnut� (true). Tento n�sobek je specifikov�n datech struktur v�robk�.":
24500 "Kdy� je za�krtnuto pole 'V�dy u�ijte tuto sadu pravidel', bude v tomto poli zvoleno pravidlo spojov�n�, kter� se implicitn� spust�, kdy� v programu Sequencer zvol�te mo�nost 'Spojit materi�ly'. ":
24505 "Tato glob�ln� volba m�n� implicitn� chov�n� SMC tak, �e povol� zp�tn� propojen� pro p��pady, kdy dojde k v�rob� a� po spot�eb�.":
24510 "Kdy� bude tento p�ep�na� za�krtnut�, pou�ije se pravidlo vybran� v poli 'Vybran� sada pravidel spojov�n�' jako implicitn� pravidlo, kter� pob��, jestli�e v programu Sequencer je zvolen� mo�nost 'Spojit materi�ly'. Kdy� mo�nost 'V�dy u��t tuto sadu pravidel' nebude za�krtnut�, objev� se dialog v�b�ru pravidel, kdy� vyberete  mo�nost 'Spojit materi�ly', co� dovol�, aby toto pravidlo, kter� m� b�et, bylo vybr�no v tomto okam�iku.":
25400 "Toto pole se u��v� pro ��slo p��kazu z�soben�.":
25410 "Toto pole vyzna�uje typ p��kazu, nap��klad Z�soba nebo N�kup.":
25420 "N�zev organizace, kter� dod�v� materi�l pro dan� p��kaz.":
25430 "��slo d�lu, pro kter� je tento p��kaz.":
25440 "Popis d�lu, pro kter� je tento p��kaz.":
25450 "Datum, kdy je tento materi�l bude dod�n.":
25500 "Toto pole se u��v� k vyzna�en�, ke kter�mu p��kazu pat�� dan� d�l. Prvn� ��dka p��kazu bude rodi�ovsk�m z�znamem a v tomto poli zobraz� PARENT. Ostatn� ��dky p��kazu budou z�znamy potomk� a v tomto poli zobraz� ��slo p��kazu, ke kter�mu tento d�l pat��. ":
25510 "Toto pole uchov�v� ��slo popt�vkov�ho p��kazu.":
25520 "Toto pole vyzna�uje typ p��kazu, nap��klad v�roba na sklad nebo zak�zka.":
25530 "Jednozna�n� idetifikuje polo�ku p��kazu.":
25540 "N�zev organizace, kter� po�aduje materi�ly pro tento p��kaz.":
25550 "Daum, kdy se vy�aduje tento materi�l.":
25560 "Specifikuje n�sobek artiklu, kter� nutno spojit. �asto je to po�et artikl� v krabici nebo pouzdru, nap��klad 12 plechovek tvo�� jednu krabici, p��kaz vy�aduje 60 plechovek. P��kaz je na 50 plechovek.  Preactor spoj� pouze 48 plechovek z 50, pak se pod�v� po zb�vaj�c�ch 12 plechovk�ch, kter� se po�aduj�, ale ud�l� spoj jen tehdy, kdy� jich najde p�esn� 12. Mus�te za�krtnout pole 'P�i�adit jen n�sobky' v datab�zi 'Pravidla spojov�n�', abyste zapnuli tuto vlastnost.":
25600 "Order number that the BoM line belongs to.":
25605 "Part number of the order that BoM line belongs to.":
25610 "Operation number that the BoM line belongs to.":
25611 "Name of the operation that the BoM line belongs to.":
25615 "Part number of the product which requires the specified material":
25620 "��slo d�lu polo�ky struktury v�robku.":
25630 "Po�adovan� mno�stv� polo�ky struktury v�robku.":
25640 "Kdy� je nastaven� na zapnuto (true), toto pole zp�sob�, �e mno�stv� p��kazu se vyn�sob� po�adovan�m mno�stv�m struktury v�robku.":
25650 "Zp�sob�, �e na nedostatek materi�lu nebude br�n ohled, kdy� je spu�t�n� pravidlo spojov�n�. Dovoluje rozvrhovat p��kazy s nedostatkem materi�lu.":
25700 "��slo p��kazu, ve kter�m se vyr�b� koprodukt.":
25705 "Part number of the order that co-product is produced in.":
25710 "��slo operace, kter� vyr�b� koprodukt.":
25715 "Operation name that produces co-product.":
25720 "N�zev koproduktu.":
25730 "Vyroben� mno�stv� koproduktu.":
25740 "Kdy� je toto pole nastaven� jako zapnut� (true), zp�sob�, �e mno�stv� koproduktu se bude n�sobit mno�stv�m p��kazu.":
25800 "Toto pole vyzna�uje typ p��kazu, nap��klad pracovn� p��kaz, n�kupn� objedn�vka, zak�zka nebo z�soba.":
25810 "Kdy� je pole za�krtnut�, nerozvr�en� operace se u� nad�le nebude zobrazovat v okn� 'Nerozvr�en� operace'.":
25820 "Zobrazuje dialog s poli, kter� se t�kaj� ��zen� materi�lu.":
25830 "Toto pole poskytuje informace o statusech popt�vky potom, co materi�ly byly spojeny. Bude obsahovat jednu z n�sleduj�c�ch hodnot: 'Nezn�m�', 'Spln�n�', 'V�echen nedostatek ignorov�n', 'Nedostatek', 'Nadm�rn� z�soben�', 'Nadm�rn� z�soben�, nedostatek', 'Nadm�rn� z�soben�, v�echen nedostatek ignorov�n'.":
25840 "Toto pole se zapln� potom, co materi�ly budou spojeny. Kdy� ud�l�te spoj na p��kaz z�soben� v datab�zi p��kaz�, pole 'Datum popt�vky' v datab�zi pracovn�ch p��kaz� se vypln� hodnotou 'Datum z�soben�' p��kazu z�soben�.  Preactor vyhodnot� datum z�soben� v��i hodnot� 'Nejd��v�j�� datum zah�jen�' a pou�ije pozd�j�� z t�chto dvou datum� k rozhodnut�, kter� datum se m� pou��t p�i rozvrhov�n�.":
25850 "Toto pole se zapln� potom, co materi�ly budou spojeny. Kdy� byl ud�l�n spoj na p��kaz popt�vky v datab�zi, pole 'Datum z�soben�' v datab�zi p��kaz� se vypln� hodnotou datumu popt�vky, s n� je tento p��kaz spojen. Preactor vyhodnot� datum popt�vky v��i term�nu dokon�en� a pou�ije nejd��v�j�� ze dvou datum� k rozvrhov�n�.":
25900 "Zobraz� dialog s poli t�kaj�c�mi se stausu operace.":
25910 "Tuto volbu m��ete vybrat, kdy� p��kaz bude rozd�len, tato mo�nost umo�n�, �e ka�d� z v�robn�ch d�l��ch d�vek bude pokra�ovat v�robn�m procesem nez�visle, nap��klad v�echny d�l�� d�vky se nemus� dokon�it v jedn� operaci, d��ve ne� m��e za��t operace n�sleduj�c�.":
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
