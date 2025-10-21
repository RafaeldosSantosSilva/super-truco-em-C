# 🃏 Super Trunfo

## 🎯 Descrição do Projeto
Este é o **desafio final** do projeto **Super Trunfo em C**, desenvolvido para consolidar o aprendizado sobre **estruturas de decisão, operadores lógicos e menus dinâmicos**.

O jogo simula uma **batalha entre cartas de países**, onde o jogador escolhe **dois atributos diferentes** para comparar. A carta com **melhor desempenho geral** vence a rodada!

Este projeto foi construído como parte de um exercício avançado de **lógica de programação em C**.

---

## 🧠 Objetivos de Aprendizagem
- Praticar **estruturas condicionais (`if`, `else`, `switch`)**
- Aplicar **operadores ternários (`? :`)** de forma eficiente
- Criar **menus interativos e dinâmicos**
- Tratar **entradas inválidas** e **empates**
- Trabalhar com **atributos múltiplos** e **regras específicas de comparação**

---

## ⚙️ Funcionalidades
✅ Permite comparar **duas cartas de países**  
✅ Jogador escolhe **dois atributos diferentes** (entre 7 disponíveis)  
✅ Calcula automaticamente a **soma dos atributos**  
✅ Exibe **valores, resultados e vencedor** de forma clara  
✅ Trata **empates e erros de entrada**  
✅ Implementa **regra especial da Densidade Demográfica** (menor vence)  
✅ Código limpo, comentado e fácil de manter  

---

## 🗺️ Atributos Disponíveis
| Código | Atributo               | Regra de Vitória            |
|--------|------------------------|-----------------------------|
| 1      | População              | Maior vence                 |
| 2      | Área                   | Maior vence                 |
| 3      | PIB                    | Maior vence                 |
| 4      | Pontos Turísticos      | Maior vence                 |
| 5      | Densidade Demográfica  | **Menor vence** (exceção)   |
| 6      | PIB per Capita         | Maior vence                 |
| 7      | Super Poder            | Maior vence                 |

---

## 🧮 Lógica do Jogo

1. O jogador escolhe **dois atributos diferentes** entre os sete disponíveis.  
2. O sistema busca os valores correspondentes de cada carta.  
3. A **densidade demográfica** é avaliada de forma inversa (menor vence).  
4. A **soma dos dois atributos** é calculada para cada carta.  
5. O programa exibe:
   - Nomes dos países  
   - Valores de cada atributo  
   - Soma dos atributos  
   - Resultado final (Carta vencedora ou empate)

---


## 🧰 Tecnologias Utilizadas
- Linguagem C  
- Compilador GCC (ou Dev C++)  
- Console (entrada e saída de dados padrão)  

---


## 🧩 Organização do Código

- main() — Função principal com fluxo do jogo

- switch() — Menus dinâmicos de seleção de atributos

- if-else e ? : — Regras de comparação e decisão

---

## 🛡️ Tratamento de Erros

- Impede escolha repetida de atributos

- Valida opções fora do intervalo (1–7)

- Exibe mensagens claras em caso de erro


---

## 🏆 Autor

Rafael Santos
💼 Analista de Dados e Desenvolvedor em formação
📚 Projeto criado para consolidar habilidades em lógica de programação em C