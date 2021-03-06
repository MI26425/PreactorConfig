#VERSION 0
;
PTG POPUP HELP
1 "Nenhum t�pico de ajuda est� associado � este item.":
10 "Este campo � utilizado para identificar a que Ordem o item pertence. A primeira opera��o de ordem � definido como PAI, as outras opera��es s�o definidas com um n�mero sequencial �nico ou nome.":
40 "Este campo � usado para identificar o c�digo do item. Pressionando o bot�o ser� mostrado todos os c�digos da tabela de produtos de dados. A sele��o de c�digo ir� mudar automaticamente o nome do produto.":
41 "Esse campo cont�m uma lista de diferentes status que podem ser definidos para uma Ordem. O valor � capturado da tabela de dados Status da Ordem onde novos status podem ser adicionados.":
45 "Este campo � usado para identificar o c�digo do item. ":
50 "Este campo � usado para identificar o nome do produto. Use o bot�o para selecionar o nome e o ser� automaticamente alterado.":
55 "Este campo � usado para identificar o nome do produto. ":
60 "Este campo � usado para identificar o n�mero da Ordem para este produto. A Ordem pode ser um n�mero de uma Ordem interna ou outra especificada pelo cliente. O n�mero da Ordem precisa ser �nico.":
70 "Este campo pode ser usado para conter coment�rios sobre a ordem. Pode ser um lembrete sobre data de entrega, ou simplesmente uma mensagem para um operador do ch�o de f�brica.":
75 "Abre uma tela que mostra todas as informa��es de atributos para a opera��o.":
80 "Use este campo para definir a prioridade para um trabalho que ser� usado pelo sequenciador (PRS). Quanto menor o n�mero, maior a prioridade. Note que prioridades podem ser negativas.":
90 "Este campo define o n�mero da opera��o para um trabalho. Isso � usado para sequenciar o trabalho no sequenciador (PRS). N�mero de opera��o menores ser�o terminados antes de n�meros maiores. Se existem duas opera��es com o mesmo n�mero, ent�o ambas as opera��es devem ser terminadas para que uma opera��o com n�mero maior possa come�ar.":
110 "Esta � uma descri��o escrita ou nome da opera��o que se realiza, tamb�m identificado pelo n�mero de opera��o.":
112 "Abre uma tela que cont�m informa��es sobre os dados de recursos atribu�dos a esta opera��o":
120 "Grupos de setups s�o definidos na tabela de dados Grupos de Setups. Esses valores s�o usados como eixos das matrizes de Setup Dependente de Sequ�ncia, que estabelece o setup entre produtos de diferentes grupos de setup. Setups individuais s�o alocados a produtos na tabela de dados Produtos, entretanto esse valor ser� sobrescrito.":
130 "Este campo identifica o grupo de recursos v�lidos para processar a opera��o. ":
140 "Se necess�rio, este campo pode ser usado para identificar um Recurso espec�fico que deve processar a opera��o. Se na tabela de dados do Produto este campo foi definido como 'Selecionar do Grupo, ent�o qualquer um dos Recursos no grupo de Recursos pode ser usado. Se voc� quer for�ar uma opera��o a ser sequenciada em um Recurso espec�fico, ent�o selecione um Recurso da lista.":
150 "Esse campo mostra o Recurso que vai processar a opera��o. Se a Ordem ainda n�o estiver sequenciada, ent�o este campo ser� definido como N�o Especificado. Se a opera��o j� estiver sido especificado ent�o o Recurso exibido neste campo ser� o Recurso onde a programa��o foi programada.":
180 "Esse campo � usado para indicar se a taxa de produ��o � calculado como tempo por lote, tempo por item ou taxa por hora. Se 'Tempo por Lote' � selecionado ent�o o tempo exibido neste campo � o tempo que leva para processar todas as partes no lote. Se 'tempo por item' � selecionado ent�o o tempo de processo ser� o valor no campo abaixo multiplicado pelo tamanho do lote. Se 'taxa por hora' � selecionado ent�o o tempo de processo ser� calculado diretamente do n�mero no lote.":
220 "Voc� selecionou o Tipo de Tempo de Processo como 'Tempo por Item'. Voc� precisa de definir um tempo de opera��o para cada item neste campo.":
230 "Voc� selecionou o Tipo de Tempo de Processo como 'Tempo por Lote'. Voc� precisa indicar o tempo total de opera��o por lote neste campo.":
240 "Voc� selecionou o Tipo de Tempo de Processo 'Taxa por Hora'. Voc� necessita especificar quantos itens podem ser produzidos por hora neste campo.":
251 "A cor neste campo instrui o sequenciador a exibir uma parte da barra do gr�fico de Gantt com uma cor diferente.":
260 "Este campo � usado para especificar a quantidade da Ordem ou do lote.":
270 "Este campo � usado para especificar o lucro ordem ou do lote e pode ser usado para influenciar o sequenciamento quando se utiliza a regra de pondera��o.":
280 "Este campo mostrar� a hora de in�cio da primeira opera��o desta ordem quando a op��o MakeSpan est� habilitada no arquivo PRCDF.":
290 "Este campo mostrar� a hora de fim da �ltima opera��o desta ordem quando a op��o MakeSpan est� habilitada no arquivo PRCDF.":
300 "Este valor determina a quantidade que deve ser processada antes da opera��o subsequente poder ser iniciada. Infomrando N�o especificado ou -1, o sistema n�o permitir� sobreposi��o entre opera��es.":
360 "usado para especificar uma data que a Ordem n�o pode come�ar antes dela. Como exemplo, essa data pode ser a data onde existir� material dispon�vel para ela.":
370 "Este campo � usado para informar a data de entrega desejada para a ordem. O valor do campo � utilizado para real�ar as ordens atrasadas e pode ser usado para priorizar o sequenciamento quando a op��o Data de Entrega � selecionada. 	":
380 "Selecione este campo para mostrar ao sequenciador que os tempos no Tempo de In�cio e Tempo de Fim s�o valores reais. Quando definido, esse campo previne a Ordem de ser desalocada de qualquer Recurso no sequenciador.":
390 "O sequenciador define este campo, durante o sequenciamento, com o tempo de inicio do setup da opera��o.":
400 "O sequenciador atualiza este campo durante o sequenciamento com o tempo que o trabalho est� programado para come�ar.":
410 "O sequenciador atualiza este campo durante o sequenciamento com o tempo que o trabalho est� programado para terminar.":
420 "Marque este campo se n�o quiser desalocar esta opera��o depois de selecionar Desprogramar todas as opera��es. Isto ir� travar a opera��o. ":
421 "Opera��es que tem esse campo marcado vai permanecer desalocada na janela de opera��es desprogramadas, quando automaticamente sequenciar opera��es.":
430 "Permite que caracter�sticas definidas pelo usu�rio sejam definidas � Produtos (como cores). � poss�vel definir Ranks para os atributos para que sejam utilizados pela regra de programa��o Sequ�ncia Preferida.":
440 "Preenche a informa��o sobre a quantidade conclu�da e define o tempo que o lote foi completado. O sequenciador vai automaticamente recalcular o tempo de fim da opera��o.":
450 "Preenche o tempo que o lote foi completado e define a informa��o da quantidade conclu�da. O sequenciador vai recalcular automaticamente o fim para essa opera��o.":
460 "O Tempo Efetivo de Opera��o utiliza entradas nos campos Quantidade do Lote e Tempo do Lote para calcular um tempo de opera��o revisado baseado nessas informa��es. ":
474 "Usado para gravar o custo de um item quando ele � introduzido no processo. Esse campo pode ser usado para gravar custos fixos por item.":
476 "use o Custo de Material por Item para fornecer o custo de material do lote no ponto onde o custo por item � introduzido no processo.":
477 "Custo direto do trabalho no processo atual.":
530 "Estabelece um horizonte de tempo em que ordens podem ser agrupadas para produ��o. Um Recurso, ap�s completar uma opera��o, vai procurar nesse ponto ap�s o horizonte de tempo estabelecido no Horizonte de Otimiza��o.":
540 "Estabelecido na tabela de dados Produtos, promove acesso a um documento que pode conter informa��es do produto. Esse documento pode tamb�m ser acessado e editado a partir do arquivo de edi��o da Programa��o.":
541 "Esse campo � utilizado para descrever o progresso de uma opera��o individual. Existem 4 status diferentes: N�o Iniciada; Setup; Em Execu��o; Conclu�da.":
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
2071 "Permite definir a capacidade do recurso como Finito, Infinito ou Infinito com o Turno quando o modo de Capacidade Infinita � acionado no Sequenciador. ":
2080 "Controla a escala do horizonte do Recurso no sequenciador.":
2100 "Seleciona a Recurso Secund�rio que ser� aplicada ao Recurso prim�rio. Especifica a quantidade da restri��o requerida pelo Recurso e a maneira que a restri��o � aplicada ao Recurso prim�rio.":
2110 "Estipula quando a utiliza��o do Recurso Secund�rio deve ser incrementada ou decrementada. Se um trabalho � colocado em um dispositivo el�trico para v�rias opera��es, o incremento no in�cio para a primeira opera��o e Decremento em Concluir para a �ltima opera��o pode ser especificado. Isto ir� assegurar que o dispositivo n�o pode ser usado para qualquer outro trabalho, enquanto a primeira Ordem est� na fila para um Recurso.":
2120 "Especifica a quantidade requerida para a Recurso Secund�rio. Se o valor 'Quantidade' � selecionado ent�o a quantidade requerida � igual � quantidade do lote que est� sendo processado.":
2130 "Define um atributo para uma opera��o que vai prevenir que opera��es n�o similares sejam sequenciadas simultaneamente em um Recurso de capacidade infinita.":
2150 "Usado em produtos APS para estabelecer o crit�rio que ser� usado na regra de sequenciamento preferida.":
2160 "Usado pela regra de sequenciamento �Minimizar WIP' para estabelecer quando o  WIP pode acumular no Recurso selecionado.":
2180 "Um valor num�rico usado para organizar a ordem que os Recursos s�o exibidos na tabela de dados dos Recursos. Tamb�m usado para alterar a ordem padr�o em que os Recursos s�o exibidos na Vis�o Geral do sequenciador.":
2181 "Mostra a tela onde op��es avan�adas de restri��es da opera��o podem ser definidos, se necess�rio. ":
2182 "Permite o uso de express�es para definir rela��es complexas entre recursos. Como criar as express�es e a sintaxe a ser usada podem ser encontradas na documenta��o. ":
2183 "Permite a escolha de um atributo de uma opera��o que permitira que apenas opera��es com o mesmo atributo possam ser alocadas em paralelo no recurso com capacidade infinita. ":
2185 "Determina se uma linha separadora � exibida abaixo do recurso no gr�fico de Gantt. Ajuda a melhor visualizar os recursos em grupos.":
2190 "Determina a maneira que os Recursos s�o exibidos na Vis�o Geral do sequenciador. As alternativas s�o Sempre, Apenas em Grupo e Esconder.":
2191 "Determina a maneira pela qual as opera��es ser�o exibidos na Vis�o Geral do Sequenciador. As op��es s�o:  'empilhados', onde as opera��es s�o exibidos em uma linha e 'Cascata' onde cada opera��o � exibido em uma linha pr�pria.":
2200 "Usado para definir a matriz de tempos de setup dependente da sequencia, definindo o tempo de setup requerido quando da troca de um produto com um atributo por outro. ":
2201 "Este campo define o grupo de setup que deve ser usado pelo recurso e, como resultado, determina que tempos de setup ser�o aplicados entre as opera��es com diferente atributo. ":
2202 "Determina se os tempos de setup das opera��es ser�o aplicados de forma acumulativa ou concorrente. ":
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
6100 "Mostra tela que permite a sele��o de quais recursos de um grupo espec�fico s�o validos para uma determinada opera��o. ":
6110 "Este campo determina se o recurso pode ser selecionado automaticamente durante o sequenciamento. Se o campo for desmarcado, opera��es s� podem ser manualmente alocadas ao recurso.":
6120 "Este campo permite que um valor espec�fico de tempo de setup possa ser definido para cada recurso v�lido para realizar a opera��o. ":
6130 "Este campo permite que um valor especifico de tempo unit�rio de processamento possa ser definido para cada recurso v�lido para realizar a opera��o. ":
6131 "Este campo permite que um valor espec�fico de taxa por hora possa ser definido para cada recurso v�lido para realizar a opera��o. ":
6132 "Este campo permite que um valor espec�fico de tempo por lote possa ser definido para cada recurso v�lido para realizar a opera��o. ":
6140 "Este campo definie se um recurso secund�rio ser� usado pelo recurso prim�rio durante a execu��o da opera��o. ":
6150 "Esse campo � utilizado para especificar como uma Recurso Secund�rio � usada durante uma opera��o. ":
6160 "Use este campo para indicar a quantidade do Recurso Secund�rio requerida durante a opera��o.":
6170 "O Sequenciador ir� utilizar esse per�odo de tempo para tentar alocar a opera��o no recurso preferencial. Se n�o for poss�vel alocar a opera��o at� o final do per�odo informado, o Sequenciador ir� tentar alocar em qualquer outro recurso do grupo. ":
6180 "Definir um Grupo de Recursos Subsequentes significa 'limitar' a escolha dos Recursos dentro da lista.":
6190 "Remove todos os Recursos contidos no Grupo de Recursos selecionado da lista estabelecida pelo comando Definir Grupo de Recurso Subsequente.":
6230 "Esse campo permite definir um tempo de setup , quando se troca de um produto para outro. Valores definidos no campo Tempo de Setup ser�o adicionados para qualquer valores de setups estabelecidos para o Recurso em uma matriz de Setup Dependente de Sequ�ncia.":
6430 "Selecione um nome do �cone. O bot�o de editar permite a voc� criar novos �cones.":
6470 "Exibe tela de Recurso Secund�rio v�lido. Permite que sejam aplicadas Recursos Secund�rios v�lidas para opera��es ou produtos individuais. Forma e quantidade de uso da restri��o tamb�m podem ser editadas aqui.":
6530 "Especifica o intervalo m�ximo que ser� permitido entre duas opera��es sequenciadas. O tempo m�ximo de intervalo � qualificado pelo 'Tipo de Intervalo'.":
6540 "Estabelece a rela��o usada para interpolar o tempo m�ximo de intervalo entre duas opera��es subsequentes..":
6550 "Especifica o m�ximo de tempo que a opera��o pode estender quando sequenciada automaticamente pelo sequenciador.":
6560 "Define um determinado per�odo de tempo de folga/espera a ser considerada entre esta opera��o e a anterior.":
6565 "Define um determinado per�odo de tempo de folga/espera a ser considerada entre esta opera��o e a pr�xima.":
6580 "Este campo pode ser usado para aplicar fator multiplicador de velocidade do tempo de processo que ir� afetar o comprimento opera��o.":
6681 "Este campo � usado especificar um atributo ao registro, referenciado em uma das tabelas de atributos. Quando usado, este campo pode afetar nos tempos de setup, sequenciamento e uso de recursos secund�rios. ":
6682 "Este campo � utilizado para especificar um atributo de formato livre ao registro. Este valor pode ser usado para definir op��es de exibi��o e grupos de opera��es.":
6683 "Este campo � utilizado para especificar um atributo num�rico ao registro. Este valor pode ser usado para definir op��es de exibi��o, influenciar o sequenciamento ou como quantidade de uso de recurso secund�rio.":
6684 "Este campo � utilizado para especificar um atributo de data ao registro. Este valor pode ser usado para definir op��es de exibi��o e influenciar o sequenciamento.":
6685 "Este campo � utilizado para especificar um atributo de dura��o ao registro. Este valor pode ser usado para definir op��es de exibi��o e influenciar o sequenciamento.":
6690 "Cont�m um tempo que ser� subtra�do da Data de Entrega quando sequenciado para tr�s para que as opera��es sejam programadas antes, evitando grandes problemas com atrasos n�o planejados.":
7020 "O n�mero de dias a partir da data atual que podem ser exibidos na Vis�o Geral do Sequenciador.":
7030 "O periodo de tempo, a partir da data atual, que podem ser exibidos na Vis�o Geral do Sequenciador,":
7035 "Abre a caixa de configura��o do setup que permite ao usu�rio customizar a Vis�o Geral do sequenciador.":
7040 "Especifica uma margem, desde o momento da entrada do pedido, antes que uma Ordem n�o possa ser iniciada. Se definido como n�o especificado, n�o h� outra restri��o al�m o tempo atual.":
7050 "Especifica uma margem, desde o momento da entrada do pedido at� quando a Ordem possa estar dispon�vel. Pode ser substitu�do.":
7060 "A quantidade de tempo que o Terminador foi deslocado do tempo atual. O Terminador representa o tempo atual quando a margem do Terminador � definido como 0 hr 00 min.":
7067 "Estabelece as op��es de c�lculo de custo: Durante a Sequ�ncia, Depois da Sequ�ncia ou Nunca.":
7120 "Define o modo do exibi��o do sequenciador":
7130 "O n�mero de dias a partir de agora para iniciar a vis�o geral do sequenciador.":
7140 "O n�mero de dias a partir de agora para terminar a vis�o geral do sequenciador.":
7320 "Habilita o script da tabela de dados Script requerido para importar ordens ":
7330 "Habilita o script da tabela de dados Script requerido para exportar ordens ":
7430 "Esse campo adiciona um pequeno tri�ngulo preto em cada opera��o sequenciada, facilitando o drag and drop dessas opera��es, especialmente de opera��es pequenas.":
7450 "Especifica o evento de script PESP padr�o que ser� executado quando ordens forem importadas a partir do bot�o 'Importar Ordens' no menu de Integra��o.":
7470 "Especifica o evento de script PESP padr�o que ser� executado quando ordens forem exportadas a partir do bot�o 'Exportar Ordens' no menu de Integra��o.":
7480 "Especifica o evento de script PESP padr�o que ser� executado quando uma programa��o for liberada a partir do bot�o 'Liberar Programa��o' a partir do menu de Integra��o.":
7490 "Especifica o evento de script PESP padr�o que ser� executado quando opera��es forem alocadas no sequenciados quando a op��o Regra APS estiver marcada. ":
8020 "Nome do Recurso Secund�rio .":
8030 "Permite a voc� selecionar a cor do Gr�fico do Usu�rio quando os valores est�o entre os valores limites.":
8040 "Define o padr�o de preenchimento do gr�fico.":
8060 "Cor do gr�fico se este passar o valor limite m�ximo.":
8080 "Cor do gr�fico se este passar o valor limite m�nimo.":
8090 "Especifica se essa restri��o restringir� de fato o sequenciamento quando se utiliza o Preactor 300 ou superior. Em todas as vers�es, se esse campo permanecer desmarcado o sequenciador n�o exibir� as mensagens de alerta avisando que a restri��o foi ultrapassada.":
8091 "Quando o modo de Capacidade Infinita � acionado, este campo determina se o recursos secund�rio deve funcionar como restri��o (P300 ou superior). ":
8092 "Op��es de controle do comportamento da restri��o quando o sistema � parametrizado para calcular no modo de capacidade infinita. ":
8100 "Determina como a efici�ncia do calend�rio do Recurso prim�rio vai afetar a utiliza��o dessa Recurso Secund�rio.":
8101 "Quando o mode de Capacidade Infinita � acionado, este campo determina como a efici�ncia dos calend�rios ser�o aplicados nos recursos secund�rios. ":
8120 "Esse bot�o abre um di�logo listando os diferentes atributos associados com a Recurso Secund�rio.":
8130 "Esse campo permite atributos do tipo string a serem definidos nos Recurso Secund�rio.":
8140 "Esse campo permite atributos do tipo real a serem definidos nos Recurso Secund�rio.":
8150 "Esse campo permite que dados de atributos do tipo dura��o sejam definidos nos Recurso Secund�rio.":
8160 "Quando marcado, esse toogle mostrar� um gr�fico de utiliza��o para a Recurso Secund�rio.":
9020 "Nome de Grupos de Setups que formam os eixos X e Y da matriz.":
12020 "Nome de um atributo na tabela de dados de atributos de produto":
13020 "Nome de um atributo na tabela de dados de atributos de produto":
14020 "Nome de um atributo na tabela de dados de atributos de produto.":
16020 "O nome usado para descrever a configura��o da tela salva com o nome do arquivo. Esta descri��o � tamb�m usada como dica para mostrar �cones.":
16030 "O arquivo � escolhido selecionando um arquivo a partir da op��o oferecida pelo bot�o no canto esquerdo deste campo. ":
18510 "O nome do indiv�duo ou organiza��o referente � Ordem.":
18520 "Nome do contato principal da organiza��o referente � Ordem.":
18530 "N�mero de telefone para ser usado em conex�o com uma Ordem.":
18540 "Endere�o de E-mail para ser usado em conex�o com uma Ordem.":
21000 "Este campo permite que diferentes status da Ordem sejam definidos.":
21020 "Este campo � utilizado para conter a descri��o do que o nome do estado de Ordem significa que tenha sido definido no campo 'Nome de Ordem '.":
21100 "Nome do atributo na tabela de Atributo. ":
21110 "Utilizado para estabelecer uma sequencia de prioridade entre os registros desta tabela. Este valor pode ser usado pelas regras de sequenciamento. ":
24000 "Esse campo especifica se o registro � um registro pai da regra ou se � um registro filho.":
24010 "Cont�m o nome da regra.":
24020 "Esta altern�ncia � usado para limpar as liga��es somente para ordens que est�o na fila de demanda de primeira passagem (seja habilitado ou n�o) do conjunto de regras.":
24030 "Amazena o nome de uma fun��o particular da regra.":
24040 "Um campo que, quando marcado, habilita a regra, quando desmarcado esse passo particular ser� ignorado quando a regra for executada.":
24050 "Quando este campo for marcado e a regra for executada, um arquivo de debug ser� criado no diret�rio de trabalho.":
24060 "Esse campo � utilizado para especificar um crit�rio que pode ser utilizado para restringir itens que est�o na Fila de Fornecimento Interno. O valor padr�o deste campo � definido como ALL, mas isso pode ser alterado por uma express�o como (~{$Tipo de Ordem}~==~Stoque~).":
24070 "Esse campo cont�m crit�rios que podem ser utilizados para criar um rank aos itens na Fila de Fornecimento Interno. Esse rank pode ser criado utilizando crit�rios como Data de Entrega, Prioridade, etc.":
24080 "� Este campo � usado para especificar os crit�rios que podem ser usados ??para restringir os itens que s�o colocados na Fila de Demanda. O valor padr�o para este campo � definido como ALL, mas isso pode ser mudado inserindo uma express�o, por exemplo (~{$Order Type}~==~Stock~). Isso registra fila de filtros realizada em banco de dados 'Ordens de Trabalho'.":
24090 "Este campo cont�m os crit�rios que podem ser usados ??para classificar os itens na fila de demanda interna. Por exemplo, voc� pode classificar a fila de Demanda Interna por data de entrega, primeira data de in�cio ou prioridade.":
24100 "Este campo cont�m uma lista da regra padr�o que pode ser usado para as ordens. Ele tamb�m cont�m tr�s itens especiais - Definidos pelo Usu�rio, Fun��es de Usu�rio e Script PESP que fornecem a oportunidade de criar regras mais personalizadas.":
24110 "Este campo s� � vis�vel quando o campo �Tipo de Regra� � definido pelo usu�rio ou quando � uma fun��o. A express�o a ser utilizada para a regra entra neste campo. Um exemplo pode ser assim: (~{+:$Product Attribute 1}~==~{-:$Product Attribute 1}~) permitindo fornecer assim  apenas ordens de demanda a ser ligada se o �atributo do produto 1� tem o mesmo valor.":
24120 "Este campo s� � vis�vel quando o campo 'Tipo de Regra' � definido como 'Script PESP'. Este campo cont�m o nome do Script PESP para ser usado como regra.":
24130 "Esta op��o permite a cria��o de la�os em linhas BoM onde a quantidade de linha BoM n�o tem que ser totalmente preenchida para que o link seja feito. ":
24140 "Esta op��o s� ir� permitir a cria��o de links em linhas BoM onde a quantidade de linha BoM est� totalmente satisfeito.":
24141 "Quando esta op��o estiver marcada o comportamento padr�o do SMC � substitu�do, permitindo que a liga��o para tr�s seja criada quando a produ��o ocorre ap�s o consumo.":
24150 "Quando definido como verdadeiro, as ordens que j� est�o sequenciadas podem ser re-ligados.":
24160 "Quando esse campo estiver marcado, o Rank da Fila de Fornecimento � habilitada, permitindo que registros de fornecimentos sejam organizados de acordo com o rank de acordo com o crit�rio selecionado no Rank da Fila de Fornecimento. Essa op��o deve ser selecionada apenas se todos os registros est�o armazenados na tabela de Ordens de Produ��o.":
24170 "Este campo � usado para especificar os crit�rios que podem ser usados ??para restringir os itens que s�o colocados na fila de alimenta��o externa. O valor padr�o para este campo � definido como ALL, mas isso pode ser mudado inserindo uma express�o, por exemplo (~{$Order Type}~==~Stock~). ":
24180 "Qualquer campo com HERDAR DO FORNECIMENTO(Nome do Campo) a classifica��o, ser� processado.":
24190 "Qualquer campo com a HERDAR DA DEMANDA(Nome do Campo) a classifica��o, ser� processado.":
24200 "Quando esta op��o estiver definida como verdadeira, o campo 'Classifica��o Fila de Demanda' torna-se habilitado permitindo que registros de demanda sejam classificados de acordo com os crit�rios de sele��o no campo 'Classifica��o Fila de Demanda'. Esta op��o deve ser selecionada somente se todos os registros s�o mantidos no banco de dados 'Ordens de Trabalho'.":
24210 "A quantidade de um link criado ser� alocada em grupos espec�ficos quando esta op��o estiver definida como verdadeira. Este grupo � especificado nos Dados BoM.":
24500 "Se o campo 'Sempre usar essa Regra' estiver marcado, a regra selecionada neste campo ser� aquela que por padr�o vai ser executada quando a op��o":
24505 "Quando esta op��o global est� marcada o comportamento padr�o do SMC � substitu�do, permitindo que as liga��es para tr�s sejam criadas quando a produ��o ocorre ap�s o consumo.":
24510 "Se o campo 'Sempre usar essa Regra' estiver marcado, a regra selecionada neste campo ser� aquela que por padr�o vai ser executada quando a op��o Alocar Materiais -SMC estiver selecionada no sequenciador. Se o campo em quest�o estiver desmarcado, ent�o um di�logo de sele��o de regra ser� exibido.":
25400 "Esse campo � utilizado para armazenar o n�mero da ordem da ordem de fornecimento.":
25410 "Esse campo identifica o tipo da Ordem. Como exemplo, Ordem de estoque ou compra":
25420 "O nome da organiza��o que est� fornecendo materiais para a Ordem.":
25430 "O n�mero do produto correspondente � Ordem.":
25440 "Descri��o do produto correspondente � Ordem.":
25450 "Data de quando o material ser� fornecido.":
25500 "Este campo � utilizado para identificar a qual encomenda a pe�a pertence. A linha da primeira ordem de uma ordem ser� o registro PAI, as linhas de outra ordem que fazem parte desta ordem ser�o registros filho e exibir�o o n�mero de ordem a que pertencem, neste campo.":
25510 "Esse campo armazena o N�mero da Ordem da Ordem de Demanda.":
25520 "Esse campo identifica o tipo da ordem. Como exemplo, produzir para estocar ou Ordem de Venda.":
25530 "Identifica um item de linha de uma ordem.":
25540 "O nome da organiza��o que est� requerindo o material para a Ordem.":
25550 "Data de quando o material ser� requerido.":
25560 "Especifica o grupo que um item deve ser indexada. Muitas vezes, um n�mero de itens ir�o compor uma caixa ou caso, um exemplo pode ser onde 12 latas comp�em uma caixa, uma ordem exigindo 60 latas chega. H� uma ordem de abastecimento para 50 latas. O Preactor s� aloca 48 latas de 50, ele ir� procurar outro lugar para as 12 latas restantes que ela exige, mas ela s� vai fazer a liga��o se a quantidade exata de 12 � encontrada. O campo 'Allocate Multiples Only' deve ser verificado no banco de dados da 'Regra Pegging� para que esse recurso esteja ligado. ":
25600 "N�mero da Ordem que a linha BoM pertence.":
25605 "C�digo do produto da Ordem que a linha BoM pertence. ":
25610 "N�mero da Opera��o que a linha BoM pertence":
25611 "Nome da opera��o que a linha BoM pertence. ":
25615 "Codigo do produto que requer o material especificado. ":
25620 "C�digo do Produto do item da BoM.":
25630 "Quantidade requerida do item da BoM.":
25640 "Quando marcado, este campo far� com que a quantidade da ordem seja multiplicada pela quantidade requerida da BoM.":
25650 "Faz com que as faltas de materiais sejam ignoradas quando uma regra de aloca��o de materiais estiver sendo executada. Permite que Ordens com faltas sejam sequenciadas.":
25700 "N�mero da Ordem que o co-produto est� sendo produzido.":
25705 "C�digo do Produto da ordem que produz o co-produto. ":
25710 "N�mero da Opera��o que produz o co-produto":
25715 "Nome da opera��o que produz o co-produto. ":
25720 "Nome do co-produto.":
25730 "Quantidade do co-produto produzida.":
25740 "Quando marcado, esse campo faz com que a quantidade do co-produto seja multiplicada pela quantidade da ordem.":
25800 "Este campo identifica o tipo de ordem, por exemplo: Ordem de Trabalho, Ordem de Compra, Ordem de Vendas ou de Estoque.":
25810 "Quando marcada, a opera��o de n�o programadas n�o ser� mais exibido na janela 'Opera��es N�o Programadas'.":
25820 "Exibe um di�logo que exibe dom�nios relacionados com o Material Control.":
25830 "Este campo fornece informa��es sobre o status da demanda ap�s os materiais serem atrelados. Ele ir� conter um dos seguintes valores: 'Desconhecido', 'Satisfeito', 'Falta Ignorada', 'Escassez', 'Fornecido'.":
25840 "Este campo � preenchido ap�s os materiais serem atrelados.":
25850 "Este campo � preenchido ap�s a materiais foram atrelados. ":
25900 "Mostra uma janela com os campos relativos ao status de uma opera��o.":
25910 "Esta op��o pode ser selecionada quando uma ordem � divida, esta op��o permite que cada lote de produ��o prossiga de forma independente atrav�s do processo de fabrica��o, por exemplo, todos os lotes n�o t�m que serem conclu�dos em uma opera��o antes de uma opera��o subseq�ente poder come�ar.":
25920 "Este campo define a cor usada na barra do grafico de Gantt. ":
26000 "Este campo definie o nome do grupo de setup. ":
26100 "Este campo define a quantidade de tempo de setup que se incorre quando o atributo especificado muda entre as opera��es sequenciadas uma ap�s outra.":
26200 "Nome da ferramenta definida pelo usu�rio. ":
26210 "Script que ser� executado quando a ferramenta for selecionada. ":
26220 "Nome do Menu de Ferramentas do Usu�rio ":
26230 "A fun��o c�digo para preencher o conte�do da janela do usu�rio":
26240 "o r�tulo da janela do usu�rio":
26300 "O nome do bot�o de menu. Isto d� uma indica��o de onde o bot�o ir� aparecer no sistema de menus":
26310 "Este campo controla se o bot�o est� habilitado e, portanto, se ele aparece":
26320 "Este campo controla o texto que ir� aparecer no bot�o. ":
26330 "Script que ser� executado quando o bot�o for acionado. ":
;
