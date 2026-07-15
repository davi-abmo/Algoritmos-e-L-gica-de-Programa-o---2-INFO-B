print("Olá, Davi! O professor Israel da matéria de Algoritmos e Lógica de Programação gostaria de calcular o seu desempenho médio durante as três primeiras avaliações, porém infelizmente as notas foram perdidas devido a um erro ocorrido no servidor do SUAP (como sempre...). Peço que busque em sua casa as suas notas e insira abaixo para que possamos calcular a sua média.");
n1 = int(input("Insira sua primeira nota: "))
n2 = int(input("Insira sua segunda nota: "))
n3 = int(input("Insira sua terceira nota: "))

m = (n1+n2+n3)/3

print(f"Obrigado! A sua média é {m}")