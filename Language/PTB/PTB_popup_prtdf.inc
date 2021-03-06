#VERSION 0
;
PTB POPUP HELP
1 "Nenhum t�pico de ajuda est� associado � este item.":
10 "Este campo � utilizado para identificar a que pedido a pe�a pertence. Na primeira opera��o de um pedido, ele � definido como PAI, nas outras opera��es, � definido com um n�mero sequencial ou nome �nico.":
40 "Este campo � usado para identificar o n�mero da pe�a. Pressionando o bot�o ser� mostrado todos os n�meros de pe�a na tabela de dados de produtos. A sele��o de um n�mero de pe�a mudar� automaticamente o nome do produto.":
41 "Esse campo cont�m uma lista de diferentes status que podem ser definidos para uma Ordem. O valor � capturado da tabela de dados Status da Ordem onde novos status podem ser adicionados.":
45 "Este campo � usado para identificar o n�mero da pe�a.":
50 "Este campo � usado para identificar o nome do produto. Use o bot�o para selecionar o nome, o n�mero da pe�a ser� automaticamente alterado.":
55 "Este campo � usado para identificar o nome do produto.":
60 "Este campo � usado para identificar o n�mero da Ordem para este produto. A Ordem pode ser um n�mero de uma Ordem interna ou outra especificada pelo cliente. O n�mero da Ordem precisa ser �nico.":
70 "Este campo pode ser usado para conter coment�rios sobre o pedido. Pode ser um lembrete sobre datas de entrega ou simplesmente uma mensagem para um montador/embalador do ch�o de f�brica.":
75 "Abre uma caixa de di�logo que mostra todas as informa��es de atributos para a opera��o.":
80 "Use este campo para definir a prioridade para um trabalho que ser� usado pelo sequenciador (PRS). Quanto menor o n�mero, maior a prioridade. Note que prioridades podem ser negativas.":
90 "Este campo define o n�mero da opera��o para um trabalho. Isso � usado para sequenciar o trabalho no sequenciador (PRS). N�mero de opera��o menores ser�o terminados antes de n�meros maiores. Se existem duas opera��es com o mesmo n�mero, ent�o ambas as opera��es devem ser terminadas para que uma opera��o com n�mero maior possa come�ar.":
110 "Esta � uma descri��o escrita ou nome da opera��o que se realiza, tamb�m identificado pelo n�mero de opera��o.":
112 "Abre uma tela que cont�m informa��es sobre os dados de recursos atribu�dos a esta opera��o":
120 "Grupos de setups s�o definidos na tabela de dados Grupos de Setups. Esses valores s�o usados como eixos das matrizes de Setup Dependente de Sequ�ncia, que estabelece o setup entre produtos de diferentes grupos de setup. Setups individuais s�o alocados a produtos na tabela de dados Produtos, entretanto esse valor ser� sobrescrito.":
130 "Este campo identifica o grupo de recursos v�lidos que pode processar a opera��o atual.":
140 "Se necess�rio, este campo pode ser usado para identificar um Recurso espec�fico que deve processar a opera��o. Se na tabela de dados do Produto este campo foi definido como 'Selecionar do Grupo, ent�o qualquer um dos Recursos no grupo de Recursos pode ser usado. Se voc� quer for�ar uma opera��o a ser sequenciada em um Recurso espec�fico, ent�o selecione um Recurso da lista.":
150 "Esse campo mostra o Recurso que vai processar a opera��o. Se a Ordem ainda n�o estiver sequenciada, ent�o este campo ser� definido como N�o Especificado. Se a opera��o j� estiver sido especificado ent�o o Recurso exibido neste campo ser� o Recurso onde a programa��o foi programada.":
180 "Esse campo � usado para indicar se a taxa de produ��o � calculado como tempo por lote, tempo por item ou taxa por hora. Se 'Tempo por Lote' � selecionado ent�o o tempo exibido neste campo � o tempo que leva para processar todas as partes no lote. Se 'tempo por item' � selecionado ent�o o tempo de processo ser� o valor no campo abaixo multiplicado pelo tamanho do lote. Se 'taxa por hora' � selecionado ent�o o tempo de processo ser� calculado diretamente do n�mero no lote.":
220 "Voc� selecionou o Tipo de Tempo de Processo como 'Tempo por Item'. Voc� precisa de definir um tempo de opera��o para cada item neste campo.":
230 "Voc� selecionou o Tipo de Tempo de Processo como 'Tempo por Lote'. Voc� precisa indicar o tempo total de opera��o por lote neste campo.":
240 "Voc� selecionou o Tipo de Tempo de Processo 'Taxa por Hora'. Voc� necessita especificar quantos itens podem ser produzidos por hora neste campo.":
251 "A cor neste campo instrui o sequenciador a exibir uma parte da barra do gr�fico de Gantt com uma cor diferente.":
260 "Este campo � usado para especificar a quantidade da Ordem ou do lote.":
270 "Este campo � usado para especificar o lucro do pedido ou do lote e pode ser usado para influenciar o sequenciamento quando se usa a regra de pondera��o.":
280 "Este campo mostra a hora inicial da primeira opera��o deste pedido quando o recurso MakeSpan est� ativado":
290 "Este campo mostra a hora final da �ltima opera��o deste pedido quando o recurso MakeSpan est� ativado":
300 "Este valor determina a quantidade que deve ser processada antes de a opera��o subsequente poder ser iniciada. Um valor n�o especificado impede a sobreposi��o entre opera��es":
360 "usado para especificar uma data que a Ordem n�o pode come�ar antes dela. Como exemplo, essa data pode ser a data onde existir� material dispon�vel para ela.":
370 "Este campo deve ser usado para informar a data de entrega. A data de entrega � usado para real�ar os itens atrasados no sequenciador e priorizar o carregamento do trabalho no planejamento se a op��o 'data de entrega' � selecionada.":
380 "Selecione este campo para mostrar ao sequenciador que os tempos no Tempo de In�cio e Tempo de Fim s�o valores reais. Quando definido, esse campo previne a Ordem de ser desalocada de qualquer Recurso no sequenciador.":
390 "O sequenciador define este campo, durante o sequenciamento, com o tempo de inicio do setup da opera��o.":
400 "O sequenciador atualiza este campo durante o sequenciamento com o tempo que o trabalho est� programado para come�ar.":
410 "O sequenciador atualiza este campo durante o sequenciamento com o tempo que o trabalho est� programado para terminar.":
420 "Marque este campo se n�o quiser desalocar esta opera��o depois de selecionar Desprogramar todas as opera��es. Isto ir� travar a opera��o.":
421 "Opera��es que tem esse campo marcado vai permanecer desalocada na janela de opera��es desprogramadas, quando automaticamente sequenciar opera��es.":
430 "Permite que caracter�sticas definidas pelo usu�rio sejam definidas � Produtos (como cores). � poss�vel definir Ranks para os atributos para que sejam utilizados pela regra de programa��o Sequ�ncia Preferida.":
440 "Preenche a informa��o sobre a quantidade conclu�da e define o tempo que o lote foi completado. O sequenciador vai automaticamente recalcular o tempo de fim da opera��o.":
450 "Preenche o tempo que o lote foi completado e define a informa��o da quantidade conclu�da. O sequenciador vai recalcular automaticamente o fim para essa opera��o.":
460 "O Tempo Efetivo de Opera��o utiliza entradas nos campos Quantidade do Lote e Tempo do Lote para calcular um tempo de opera��o revisado baseado nessas informa��es.":
474 "Usado para gravar o custo de um item quando ele � introduzido no processo. Esse campo pode ser usado para gravar custos fixos por item.":
476 "use o Custo de Material por Item para fornecer o custo de material do lote no ponto onde o custo por item � introduzido no processo.":
477 "Custo direto do trabalho no processo atual.":
530 "Estabelece um horizonte de tempo em que ordens podem ser agrupadas para produ��o. Um Recurso, ap�s completar uma opera��o, vai procurar nesse ponto ap�s o horizonte de tempo estabelecido no Horizonte de Otimiza��o.":
540 "Estabelecido na tabela de dados Produtos, promove acesso a um documento que pode conter informa��es do produto. Esse documento pode tamb�m ser acessado e editado a partir do arquivo de edi��o da Programa��o.":
541 "Esse campo � utilizado para descrever o progresso de uma opera��o individual. Existem 4 status diferentes: N�o Iniciada; Setup; Em Execu��o; Conclu�da":
550 "Produtos podem ter caracter�sticas individuais associadas � eles que s�o armazenadas na tabela de dados Atributos. Essas tabelas s�o definidas pelo usu�rio e, por exemplo, a tabela Atributos do Produto 1 pode ser utilizada para a cor do produto.":
560 "Utilizado para estabelecer Ranks entre registros na tabela de dados Atributos do Produto 1.":
570 "Produtos podem ter caracter�sticas individuais associadas � eles que s�o armazenadas na tabela de dados Atributos. Essas tabelas s�o definidas pelo usu�rio e, por exemplo, a tabela Atributos do Produto 1 pode ser utilizada para a cor do produto.":
580 "Usado para estabelecer o Rank de Prioridade entre registros na tabela de dados Atributos do Produto 2.":
590 "Produtos podem ter caracter�sticas individuais associadas � eles que s�o armazenadas na tabela de dados Atributos. Essas tabelas s�o definidas pelo usu�rio e, por exemplo, a tabela Atributos do Produto 1 pode ser utilizada para a cor do produto.":
600 "Usado para estabelecer uma Rank de prioridade entre registros.":
602 "Este campo calcula a dura��o total da Ordem contando o come�o do setup da primeira opera��o at� o final da �ltima opera��o.":
620 "Regra que calcula um n�mero, dividindo o tempo que falta para o tempo definido na data de Entrega pelo tempo esperado que passou para completar a opera��o. Um valor menor que 1 indica que a Ordem est� atrasado e um valor maior que 1 indica que a Ordem est� adiantada.":
815 "Essa op��o permite que valores de setup e tempos de opera��o sejam estabelecidos. Tamb�m � utilizado para atualizar o progresso de ordens no sistema de produ��o.":
1020 "Especifica o nome do grupo de Recursos. Esse nome ser� usado para identificar grupos espec�ficos de Recursos que s�o capazes de realizar fun��es similares.":
1030 "Identifica os Recursos v�lidos para esse grupo de Recurso. Um Recurso pode pertencer a mais de um grupo de Recurso.":
1060 "Quando marcado, esse campo vai mostrar o gr�fico de utiliza��o do grupo de Recurso na janela de gr�ficos de utiliza��o dentro do sequenciador.":
1070 "Essa cor vai ser exibida no gr�fico de utiliza��o que � vis�vel na janela de gr�fico no sequenciador.":
1080 "O gr�fico de utiliza��o vai exibir essa cor quando a utiliza��o ultrapassa o n�mero de horas dispon�veis para o Recurso ou grupo de Recurso.":
1090 "O gr�fico de utiliza��o vai usar esta cor para desenhar uma linha que marca o tempo de setups (calculado em horas).":
2020 "Especifica o nome do Recurso individual.":
2023 "O custo por hora para trabalhar com o Recurso.":
2024 "Aplica o valor 'Fator de Custo %' no custo por hora do Recurso.":
2030 "Esta janela cont�m informa��es sobre a maneira com que um Recurso ou grupo de Recursos deve ser exibido na Vis�o Geral da Sequ�ncia e do Gr�fico de Utiliza��o.":
2040 "Pode ser definido como Vis�vel, Minimizado e Desabilitado. usado para controlar o estado inicial desta janela de Recurso quando o sequenciador � iniciado. Normalmente definido como Minimizado. Se definido como Desabilitado, o Recurso n�o ser� usado no sequenciamento.":
2050 "Controla a escala do horizonte do Gantt no sequenciador. Pode variar de minutos at� semanas por unidades.":
2070 "Permite definir a capacidade de um Recurso como Infinita, Finita ou Infinita com turno.":
2071 "Permite definir a capacidade do recurso como Finito, Infinito ou Infinito com padr�es de turno ao executar no modo de sequenciador de capacidade infinita.":
2080 "Controla a escala do horizonte do Recurso no sequenciador.":
2100 "Seleciona a Recurso Secund�rio que ser� aplicada ao Recurso prim�rio. Especifica a quantidade da restri��o requerida pelo Recurso e a maneira que a restri��o � aplicada ao Recurso prim�rio.":
2110 "Estipula quando a utiliza��o do Recurso Secund�rio deve ser incrementada ou decrementada. Se um trabalho � colocado em um dispositivo el�trico para v�rias opera��es, o incremento no in�cio para a primeira opera��o e Decremento em Concluir para a �ltima opera��o pode ser especificado. Isto ir� assegurar que o dispositivo n�o pode ser usado para qualquer outro trabalho, enquanto a primeira Ordem est� na fila para um Recurso.":
2120 "Especifica a quantidade requerida para a Recurso Secund�rio. Se o valor 'Quantidade' � selecionado ent�o a quantidade requerida � igual � quantidade do lote que est� sendo processado.":
2130 "Define um atributo para uma opera��o que vai prevenir que opera��es n�o similares sejam sequenciadas simultaneamente em um Recurso de capacidade infinita.":
2150 "Usado em produtos APS para estabelecer o crit�rio que ser� usado na regra de sequenciamento preferida.":
2160 "Usado pela regra de sequenciamento �Minimizar WIP' para estabelecer quando o  WIP pode acumular no Recurso selecionado.":
2180 "Um valor num�rico usado para organizar a ordem que os Recursos s�o exibidos na tabela de dados dos Recursos. Tamb�m usado para alterar a ordem padr�o em que os Recursos s�o exibidos na Vis�o Geral do sequenciador.":
2181 "Mostra a caixa de di�logo onde op��es avan�adas de restri��es da opera��o podem ser definidos, se necess�rio":
2182 "Permite a defini��o de relacionamentos entre recursos complexos usando express�es. Detalhes da sintaxe da express�o e cria��o podem ser encontrados na documenta��o.":
2183 "Permite ao usu�rio escolher um atributo de uma opera��o em um recurso de capacidade infinita, que especifica que apenas opera��es com o mesmo valor no atributo selecionado podem ser programadas ao mesmo tempo.":
2185 "Determina se uma linha separadora � exibida abaixo do recurso no gr�fico de Gantt. Ajuda a melhor visualizar os recursos em grupos.":
2190 "Determina a maneira que os Recursos s�o exibidos na Vis�o Geral do sequenciador. As alternativas s�o Sempre, Apenas em Grupo e Esconder.":
2191 "Determina a maneira pela qual as opera��es ser�o exibidas na vis�o geral do sequenciador. As op��es s�o 'Empilhadas', onde as opera��es s�o exibidas em uma linha de vis�o geral, e 'Cascata', onde cada opera��o � exibida na sua pr�pria linha de vis�o geral.":
2200 "Usado para definir a matriz de valores de configura��o dependentes da sequ�ncia, definindo o tempo de configura��o exigido mudando de um produto de um tipo de atributo para outro.":
2201 "Este campo define que grupo de troca � atribu�do a este recurso e, como resultado, determina quais tempos de troca entre opera��es com diferentes atributos s�o aplicados.":
2202 "Determina se os tempos de configura��o e de troca relacionados �s opera��es neste recurso s�o aplicados de forma acumulativa ou simult�nea.":
2205 "Retira este Recurso do c�lculo da performance m�trica da programa��o.":
2210 "Esse campo � usado para selecionar qual sistema Preactor Viewer o Recurso pertence. Esse campo cont�m uma lista com os nomes dos sistemas de sequenciamento retirados da tabela de dados PCO.":
2220 "Esse bot�o abre uma janela listando os diferentes atributos associados com o Recurso.":
2230 "Esse campo permite que atributos do tipo string sejam definidos ao Recurso.":
2240 "Esse campo permite que atributos do tipo real sejam definidos ao Recurso.":
2250 "Esse campo permite que atributos do tipo dura��o sejam definidos ao Recurso.":
2260 "Esse campo indica a efici�ncia de um Recurso (o valor padr�o � 100%), se a efici�ncia � alterada para 200%, ent�o qualquer opera��o programada nesse Recurso vai ser processada duas vezes mais r�pida.":
2270 "Quando marcado, aplicar� o valor no campo % Efici�ncia para todas as opera��es que tem tempos de setup e est�o sequenciadas em Recursos que este campo est� marcado.":
2280 "Quando marcado, esse toogle vai mostrar o gr�fico de utiliza��o para o Recurso no gr�fico de utiliza��o do sequenciador.":
5035 "Um fator de multiplicador do custo que influencia o custo de execu��o do Recurso. Um valor de 100% n�o incrementa o custo, um valor de 150% aumenta o valor do custo em 50%. Estabelecido na tabela de dados Estado do Calend�rio.":
6100 "Mostra uma caixa de di�logo que permite a sele��o de quais recursos de um grupo espec�fico s�o v�lidos e a atribui��o dos dados espec�ficos do recurso.":
6110 "Este campo determina se o recurso ser� selecionado automaticamente durante o sequenciamento. Se o campo for desmarcado, a opera��o ainda pode ser manualmente alocadas ao recurso.":
6120 "Este campo permite que um valor espec�fico de tempo de configura��o possa ser definido para cada recurso v�lido para a opera��o.":
6130 "Este campo permite que um tempo de opera��o individual seja estabelecido para cada recurso v�lido para a opera��o.":
6131 "Este campo permite que uma taxa por hora individual seja estabelecida para cada recurso v�lido para a opera��o.":
6132 "Este campo permite que um tempo de lote espec�fico seja estabelecido para cada recurso v�lido para a opera��o.":
6140 "Este campo � usado para definir um recurso secund�rio usado pelo recurso prim�rio durante a opera��o atual.":
6150 "Esse campo � utilizado para especificar como uma Recurso Secund�rio � usada durante uma opera��o.":
6160 "Use este campo para indicar a quantidade do Recurso Secund�rio requerida durante a opera��o.":
6170 "O programador usar� este per�odo de tempo para tentar carregar a opera��o atual no recurso preferencial. Se n�o for poss�vel fazer isso at� o final deste per�odo, ele tentar� carregar a opera��o em qualquer recurso do grupo.":
6180 "Definir um Grupo de Recursos Subsequentes significa 'limitar' a escolha dos Recursos dentro da lista.":
6190 "Remove todos os Recursos contidos no Grupo de Recursos selecionado da lista estabelecida pelo comando Definir Grupo de Recurso Subsequente.":
6230 "Esse campo permite definir um tempo de setup , quando se troca de um produto para outro. Valores definidos no campo Tempo de Setup ser�o adicionados para qualquer valores de setups estabelecidos para o Recurso em uma matriz de Setup Dependente de Sequ�ncia.":
6430 "Selecione um nome do �cone. O bot�o de editar permite a voc� criar novos �cones.":
6470 "Exibe a caixa de di�logo Restri��es secund�rias v�lidas, permitindo que restri��es v�lidas sejam aplicadas a registros individuais nesta tabela. As caracter�sticas de uso de restri��o tamb�m podem ser editadas aqui.":
6530 "Especifica o intervalo m�ximo que ser� permitido entre duas opera��es sequenciadas. O tempo m�ximo de intervalo � qualificado pelo 'Tipo de Intervalo'.":
6540 "Estabelece a rela��o usada para interpolar o tempo m�ximo de intervalo entre duas opera��es subsequentes.":
6550 "Especifica o m�ximo de tempo que a opera��o pode estender quando sequenciada automaticamente pelo sequenciador.":
6560 "Define um determinado per�odo de tempo de folga a ser considerado entre esta opera��o e a anterior.":
6565 "Define um determinado per�odo de tempo de folga a ser criado entre esta opera��o e a pr�xima.":
6580 "Este campo pode ser usado para aplicar multiplicador de taxa de processo que afeta a dura��o da opera��o.":
6681 "Este campo � usado especificar um atributo deste registro, referenciado em uma das tabelas de atributos. Esses podem ser usados para afetar os tempos de configura��o, programa��o de pedido e uso de restri��es.":
6682 "Este campo � usado para especificar um atributo de texto de formato livre deste registro. Estes valores podem ser usados para definir as op��es de exibi��o e opera��es de grupos.":
6683 "Este campo � usado para especificar um atributo num�rico deste registro. Este valor pode ser usado para definir op��es de exibi��o, influenciar a programa��o do pedido ou uso de restri��es.":
6684 "Este campo � usado para especificar um atributo de data deste registro. Este valor pode ser usado para definir op��es de exibi��o e influenciar a programa��o do pedido.":
6685 "Este campo � usado para especificar um atributo de dura��o deste registro. Este valor pode ser usado para definir op��es de exibi��o e influenciar a programa��o do pedido.":
6690 "Cont�m um tempo que ser� subtra�do da Data de Entrega quando sequenciado para tr�s para que as opera��es sejam programadas antes, evitando grandes problemas com atrasos n�o planejados.":
7020 "O n�mero de dias a partir da data atual que podem ser exibidos na Vis�o Geral do Sequenciador.":
7030 "O periodo de tempo, a partir da data atual, que podem ser exibidos na Vis�o Geral do Sequenciador.":
7035 "Abre a caixa de configura��o do setup que permite ao usu�rio customizar a Vis�o Geral do sequenciador.":
7040 "Especifica uma margem, desde o momento da entrada do pedido, antes que uma Ordem n�o possa ser iniciada. Se definido como n�o especificado, n�o h� outra restri��o al�m o tempo atual.":
7050 "Especifica uma margem, desde o momento da entrada do pedido at� quando a Ordem possa estar dispon�vel. Pode ser substitu�do.":
7060 "A quantidade de tempo que o Terminador foi deslocado do tempo atual. O Terminador representa o tempo atual quando a margem do Terminador � definido como 0 hr 00 min.":
7067 "Estabelece as op��es de c�lculo de custo: Durante a Sequ�ncia, Depois da Sequ�ncia ou Nunca.":
7120 "Define o modo do exibi��o do sequenciador.":
7130 "O n�mero de dias a partir de agora para iniciar a vis�o geral do sequenciador.":
7140 "O n�mero de dias a partir de agora para terminar a vis�o geral do sequenciador.":
7320 "Habilita o script da tabela de dados Script requerido para importar ordens.":
7330 "Habilita o script da tabela de dados Script requerido para exportar ordens.":
7430 "Esse campo adiciona um pequeno tri�ngulo preto em cada opera��o sequenciada, facilitando o drag and drop dessas opera��es, especialmente de opera��es pequenas.":
7450 "Especifica o evento de script PESP padr�o que ser� executado quando ordens forem importadas a partir do bot�o 'Importar Ordens' no menu de Integra��o.":
7470 "Especifica o evento de script PESP padr�o que ser� executado quando ordens forem exportadas a partir do bot�o 'Exportar Ordens' no menu de Integra��o.":
7480 "Especifica o evento de script PESP padr�o que ser� executado quando uma programa��o for liberada a partir do bot�o 'Liberar Programa��o' a partir do menu de Integra��o.":
7490 "Especifica o evento de script PESP padr�o que ser� executado quando opera��es forem alocadas no sequenciados quando a op��o Regra APS estiver marcada.":
8020 "Nome do Recurso Secund�rio.":
8030 "Permite a voc� selecionar a cor do Gr�fico do Usu�rio quando os valores est�o entre os valores limites.":
8040 "Define o padr�o de preenchimento do gr�fico.":
8060 "Cor do gr�fico se este passar o valor limite m�ximo.":
8080 "Cor do gr�fico se este passar o valor limite m�nimo.":
8090 "Especifica se essa restri��o restringir� de fato o sequenciamento quando se utiliza o Preactor 300 ou superior. Em todas as vers�es, se esse campo permanecer desmarcado o sequenciador n�o exibir� as mensagens de alerta avisando que a restri��o foi ultrapassada.":
8091 "Quando no modo do sequenciador de capacidade infinita, este campo determina se a restri��o secund�ria deve restringir a programa��o ao usar o produto 300 FCS ou acima.":
8092 "Op��es para controlar o comportamento desta restri��o quando o sistema est� definido no modo de capacidade infinita.":
8100 "Determina como a efici�ncia do calend�rio do Recurso prim�rio vai afetar a utiliza��o dessa Recurso Secund�rio":
8101 "Quando no modo de sequenciador de capacidade infinita, este campo determina como a efici�ncia do calend�rio de recurso prim�rio afeta o uso desta restri��o secund�ria. As op��es s�o: Sem efeito, In�cio da efici�ncia do trabalho, Seguir altera��es de efici�ncia e Usar 100% se maior que 0%":
8120 "Esse bot�o abre um di�logo listando os diferentes atributos associados com a Recurso Secund�rio.":
8130 "Esse campo permite atributos do tipo string a serem definidos nos Recurso Secund�rio.":
8140 "Esse campo permite atributos do tipo real a serem definidos nos Recurso Secund�rio.":
8150 "Esse campo permite que dados de atributos do tipo dura��o sejam definidos nos Recurso Secund�rio.":
8160 "Quando marcado, esse toogle mostrar� um gr�fico de utiliza��o para a Recurso Secund�rio.":
9020 "Nome de Grupos de Setups que formam os eixos X e Y da matriz.":
12020 "Nome de um atributo na tabela de dados de atributos de produto.":
13020 "Nome de um atributo na tabela de dados de atributos de produto.":
14020 "Nome de um atributo na tabela de dados de atributos de produto.":
16020 "O nome usado para descrever a configura��o da tela salva com o nome do arquivo. Esta descri��o � tamb�m usada como dica para mostrar �cones.":
16030 "O arquivo � escolhido selecionando um arquivo a partir da op��o oferecida pelo bot�o no canto esquerdo deste campo.":
18510 "O nome do indiv�duo ou organiza��o referente � Ordem.":
18520 "Nome do contato principal da organiza��o referente � Ordem.":
18530 "N�mero de telefone para ser usado em conex�o com uma Ordem.":
18540 "Endere�o de E-mail para ser usado em conex�o com uma Ordem.":
21000 "Este campo permite que diferentes status da Ordem sejam definidos.":
21020 "Este campo � utilizado para conter a descri��o do que o nome do estado de Ordem significa que tenha sido definido no campo 'Nome de Ordem '.":
21100 "Nome do registro de atributo na tabela de dados Atributos.":
21110 "Usado para estabelecer uma classifica��o de prioridade entre os registros nesta tabela de dados Atributos, que pode ser usado pelas regras de programa��o":
24000 "Este campo especifica se o registro � um registro pai da regra ou se � um registro filho.":
24010 "Cont�m o nome do conjunto de regras.":
24020 "Este campo � usado para limpar os links de aloca��o somente para pedidos que est�o na fila de demanda da primeira passagem ( habilitado ou n�o) do conjunto de regras.":
24030 "Armazena o nome de uma fun��o particular da passagem de regra.":
24040 "Um campo que, quando marcado, habilita a passagem da regra e, quando desmarcado, essa passagem de regra espec�fica ser� ignorada durante a execu��o do conjunto de regras.":
24050 "Quando este campo for selecionado, o conjunto de regras � executado, um arquivo de depura��o ser� criado no diret�rio de trabalho.":
24060 "Este campo � usado para especificar crit�rios que podem ser usados para restringir quais itens s�o colocados na fila de suprimento interno. O valor padr�o para este campo � definido como TODOS, mas isso pode ser alterado inserindo uma express�o, por exemplo, (~{$Order Type}~==~Stock~). Esta fila filtra registros mantidos no banco de dados 'Pedidos de trabalho'.":
24070 "Este campo cont�m crit�rios que podem ser usados para classificar os itens na fila de suprimento interna. Por exemplo, voc� pode classificar a fila de suprimento interna por data de entrega, primeira data de in�cio ou prioridade.":
24080 "Este campo � usado para especificar os crit�rios que podem ser usados ??para restringir os itens que s�o colocados na Fila de demanda. O valor padr�o para este campo � definido como TODOS, mas isso pode ser mudado inserindo uma express�o, por exemplo (~{$Order Type}~==~Stock~). Esta fila filtra registros mantidos no banco de dados 'Pedidos de trabalho'.":
24090 "Este campo cont�m os crit�rios que podem ser usados ??para classificar os itens na fila de demanda interna. Por exemplo, voc� pode classificar a fila de demanda interna por data de entrega, primeira data de in�cio ou prioridade.":
24100 "Este campo cont�m uma lista das v�rias regras de aloca��o padr�o que podem ser usadas para os pedidos. Ele tamb�m cont�m tr�s itens especiais - Definidos pelo usu�rio, Fun��es de usu�rio e Script PESP que fornecem a oportunidade de criar regras mais personalizadas.":
24110 "Este campo s� � vis�vel quando o campo �Tipo de regra� � definido pelo usu�rio ou quando � uma fun��o do usu�rio. A express�o a ser usada para a regra entra neste campo. Um exemplo pode ser assim: (~{+:$Product Attribute 1}~==~{-:$Product Attribute 1}~) permitindo fornecer apenas pedidos de demanda e de suprimento a ser vinculados se os campos 'Atributos do produto 1' tiverem o mesmo valor.":
24120 "Este campo s� � vis�vel quando o campo 'Tipo de regra' � definido como 'Script PESP'. Este campo cont�m o nome do Script PESP a ser usado como regra.":
24130 "Esta op��o permite a cria��o de links em linhas de BoM, onde a quantidade de linha BoM n�o tem que ser totalmente satisfeita para que o link seja feito. Qualquer item que esteja faltando ser� destacado como em falta.":
24140 "Esta op��o s� permitir� a cria��o de links em linhas BoM onde a quantidade da linha BoM esteja totalmente satisfeita. Quaisquer itens faltando ser�o destacados como em falta.":
24141 "Quando esta op��o estiver marcada, o comportamento padr�o do SMC � substitu�do, permitindo que links inversos sejam criado quando a produ��o ocorrer depois do consumo.":
24150 "Quando definido como verdadeiro, os pedidos que j� estiverem programados podem ser revinculados.":
24160 "Quando esta op��o estiver marcada, o campo 'Classifica��o de fila de fornecimento' fica ativa, permitindo que os registros de fornecimento sejam classificadas de acordo com os crit�rios de sele��o no campo 'Classifica��o de fila de suprimento'. Esta op��o deve ser selecionada apenas se todos os registros forem mantidos no banco de dados 'Pedidos de trabalhos'.":
24170 "Este campo � usado para especificar os crit�rios que podem ser usados ??para restringir os itens que s�o colocados na fila de fornecimento externa. O valor padr�o para este campo � definido como TODOS, mas isso pode ser alterado inserindo uma express�o, por exemplo (~{$Order Type}~==~Stock~). Esta fila filtra registros mantidos no banco de dados 'Demanda'.":
24180 "Qualquer campo com uma classifica��o HERDAR DO FORNECIMENTO(Nome do campo) ser� processado.":
24190 "Qualquer campo com a classifica��o HERDAR DA DEMANDA(Nome do campo) ser� processado.":
24200 "Quando esta op��o estiver definida, o campo 'Classifica��o da fila de demanda' torna-se habilitado, permitindo que registros de demanda sejam classificados de acordo com os crit�rios de sele��o no campo 'Classifica��o de fila de demanda'. Esta op��o deve ser selecionada somente se todos os registros forem mantidos no banco de dados 'Pedidos de trabalho'.":
24210 "A quantidade de um link criado ser� alocada em m�ltiplos espec�ficos quando esta op��o estiver definida como verdadeira. Este m�ltiplo � especificado nos Dados de BoM.":
24500 "Se o campo 'Sempre usar esta regra' estiver marcado, o conjunto de regras de aloca��o selecionado neste campo ser� aquela que, por padr�o, ser� executado quando a op��o 'Materiais de aloca��o' estiver selecionado no sequenciador.":
24505 "Quando esta op��o global est� marcada, o comportamento padr�o do SMC � substitu�do permitindo que os links inversos sejam criados quando a produ��o ocorrer ap�s o consumo.":
24510 "Se esta op��o estiver marcada, ser� usada a regra selecionada no campo 'Conjunto de regras de aloca��o selecionado' como regra padr�o, quando a op��o 'Materiais de aloca��o' estiver selecionada no sequenciador. Se a op��o 'Sempre usar este conjunto de regras' estiver desmarcado, uma caixa de di�logo de sele��o de regras ser� exibida ao selecionar a op��o 'Materiais de aloca��o' no sequenciador. Isso permitir� que a regra que deve ser executada seja selecionada neste momento.":
25400 "Esse campo � usado para armazenar o n�mero do pedido do pedido de fornecimento.":
25410 "Este campo identifica o tipo de pedido, por exemplo, Estoque ou Compra.":
25420 "O nome da organiza��o que est� fornecendo materiais para o pedido.":
25430 "O n�mero de pe�a para o qual o pedido � feito.":
25440 "Descri��o da pe�a para o qual o pedido � feito.":
25450 "Data de quando o material � fornecido.":
25500 "Este campo � usado para identificar a qual pedido a pe�a pertence. A linha do primeiro pedido de um pedido ser� o registro pai e exibir� PAI neste campo; as outras linhas de pedidos que s�o parte deste pedido ser�o registros filhos e exibir�o o n�mero de pedidos ao qual pertencem neste campo.":
25510 "Este � o campo usado para armazenar o n�mero de pedido do pedido de demanda.":
25520 "Este campo identifica o tipo do pedido, por exemplo, Produzir para estoque ou Pedido de vendas.":
25530 "Identifica um item de linha de um pedido de maneira �nica.":
25540 "O nome da organiza��o que est� exigindo materiais para o pedido.":
25550 "Data de quando o material � exigido.":
25560 "Especifica o m�ltiplo de um item que precisa ser alocado. Normalmente um n�mero de itens compor� uma caixa ou pasta, um exemplo pode ser onde 12 latas comp�em 1 caixa, um pedido exigindo 60 latas chega. H� um pedido de fornecimento de 50 latas. O Preactor alocar� apenas 48 latas das 50, depois procurar� em outro local pelas 12 latas de que precisa, mas criar� o link apenas se a quantidade exata de 12 for encontrada. O campo 'Alocar apenas m�ltiplos' deve ser verificado no banco de dados 'Regras de aloca��o' para este recurso ser ativado.":
25600 "N�mero do pedido ao qual a linha BoM pertence.":
25605 "N�mero da pe�a do pedido ao qual a linha BoM pertence.":
25610 "N�mero da opera��o � qual a linha BoM pertence.":
25611 "Nome da opera��o � qual a linha BoM pertence.":
25615 "N�mero da pe�a do produto que requer o material especificado":
25620 "N�mero da pe�a do item da BoM.":
25630 "Quantidade requerida do item da BoM.":
25640 "Quando marcado, este campo far� com que a quantidade do pedido seja multiplicada pela quantidade requerida da BoM.":
25650 "Faz com que as faltas de materiais sejam ignoradas ao executar uma regra de aloca��o. Permite que os pedidos com faltas sejam programados.":
25700 "N�mero do pedido no qual o co-produto � produzido.":
25705 "N�mero da pe�a do pedido em que o co-produto � produzido.":
25710 "N�mero da opera��o que produz o co-produto.":
25715 "Nome da opera��o que produz o co-produto.":
25720 "Nome do co-produto.":
25730 "Quantidade do co-produto produzida.":
25740 "Quando marcado, este campo faz com que a quantidade do co-produto seja multiplicada pela quantidade do pedido.":
25800 "Este campo identifica o tipo de pedido, por exemplo: Pedido de trabalho, Pedido de compra, Pedido de vendas ou Estoque":
25810 "Quando marcada, a opera��o n�o programada n�o ser� mais exibida na janela 'Opera��es n�o programadas'.":
25820 "Exibe uma caixa de di�logo que exibe os campos relacionados com o Controle de material.":
25830 "Este campo fornece informa��es sobre o status da demanda ap�s os materiais terem sido alocados. Ele cont�m um dos seguintes valores: 'Desconhecido', 'Satisfeito', 'Faltas', 'Escassez', 'Todas as faltas ignoradas'.":
25840 "Este campo � preenchido ap�s os materiais terem sido alocados. quando um link para um pedido de fornecimento no banco de dados de 'Pedidos de suprimento' tiver sido feito, o campo 'Data da demanda' no banco de dados 'Pedidos de trabalhos' � preenchido com a 'Data de fornecimento' do pedido de fornecimento. O Preactor avalia o campo 'Data de suprimento' em rela��o ao campo 'Data de in�cio mais cedo' e usar� a mais recente das duas datas para determinar qual data deve ser usada ao programar.":
25850 "Este campo � preenchido ap�s os materiais terem sido alocados. Quando um link para um pedido de demanda no banco de dados de 'Pedidos de demanda' tiver sido feito, o campo 'Data do fornecimento' no banco de dados 'Pedidos de trabalhos' � preenchido com a 'Data de demanda' do pedido de demanda ao qual est� vinculado. O Preactor avalia o campo 'Data de demanda' em rela��o ao campo 'Data de entrega' e usar� a mais recente das duas datas para determinar qual data deve ser usada ao programar.":
25900 "Mostra uma janela com os campos relacionados ao status de uma opera��o.":
25910 "Esta op��o pode ser selecionada quando um pedido � dividido, esta op��o permite que cada lote de produ��o prossiga de forma independente atrav�s do processo de fabrica��o, por exemplo, todos os lotes n�o t�m que serem conclu�dos em uma opera��o antes de uma opera��o subsequente possa come�ar.":
25920 "Este campo define a cor usada na barra do gr�fico de Gantt para este registro.":
26000 "Este campo define o nome do grupo de troca":
26100 "Este campo define a quantidade de tempo de troca que se incorre quando o atributo especificado muda entre as opera��es programadas uma ao lado da outra.":
26200 "O nome de exibi��o da ferramenta do usu�rio":
26210 "O script de evento que a ferramenta de usu�rio executar� quando selecionada":
26220 "o nome do menu de ferramenta da janela do usu�rio":
26230 "A fun��o de c�digo para preencher o conte�do da janela do usu�rio":
26240 "o r�tulo da janela do usu�rio":
26300 "O nome do bot�o de menu. Isto d� uma indica��o de onde o bot�o ser� exibido no sistema de menus":
26310 "Este campo controla se o bot�o est� habilitado e, portanto, se ele � exibido":
26320 "Este campo controla o texto que exibido no bot�o":
26330 "O script de evento que o bot�o de menu executa quando selecionado":
;
