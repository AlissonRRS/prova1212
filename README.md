# Estoque Inteligente

Site para ajudar a controlar os produtos da casa: saber o que ainda tem, o que está acabando e o que precisa comprar, sem esquecer nada no mercado.

A ideia é simples: cada produto cadastrado tem uma duração estimada, e o site mostra se ele está "Ok" ou "Acabando" para você se organizar antes de faltar.

## Para quem é

- Quem mora sozinho e quer parar de esquecer itens no mercado.
- Famílias grandes, em que o consumo da casa acaba rápido.
- Quem cuida das compras e quer uma visão clara do estoque.

## Páginas do site

**Estoque**
Mostra uma tabela com cada produto, a categoria, a quantidade, quanto tempo costuma durar e a situação (Ok ou Acabando). Embaixo tem um formulário para cadastrar um produto novo, com nome, categoria, quantidade, data da compra, duração estimada, se é um item essencial e observações.

**Lista de Compras**
Reúne os itens que estão acabando, separados por categoria (Essenciais, Frutas, Limpeza). Cada item tem uma caixinha para marcar quando for comprado, e dá para adicionar um item novo.

**Mercado**
Lista os mercados perto de você, com a distância, o horário e o ponto forte de cada um (por exemplo, frutas frescas ou preço bom em quantidade). Tem também um link que abre os mercados no mapa.

**Promoção**
Mostra o dia da semana em que cada tipo de produto costuma entrar em oferta, para você planejar a compra no dia mais barato.

**Como Escolher**
Dicas para escolher frutas, carnes e peixe no mercado (cor, cheiro, textura) e como guardar cada um em casa. Basta clicar no item para abrir as dicas.

**Minha Casa**
Um formulário com os dados da casa: quantas pessoas moram nela, a região, a frequência de ida ao mercado e se há crianças, pets ou alguém com dieta especial. Essas informações servem para estimar melhor o consumo.

## Como abrir

1. Deixe todos os arquivos `.html` e o `cores.css` na mesma pasta.
2. Abra o `1.estoque.html` no navegador.
3. Navegue pelos botões do menu no topo.

## Cores do site

As cores ficam no arquivo `cores.css`, que o programa `prova.c` gera com um tema à escolha (Claro, Escuro ou Verde). Depois de trocar o tema, atualize o navegador (F5).

## Situação atual

- O site é feito só com HTML e CSS.
- Os dados de estoque, mercados e promoções são exemplos para trocar pelos seus.
- Os formulários ainda não guardam as informações.

## Ideias para o futuro

- Salvar os produtos cadastrados.
- Calcular automaticamente a situação de cada item pela data da compra.
- Usar o número de pessoas da casa para deixar a previsão mais exata.
- Avisar quando um item estiver acabando.