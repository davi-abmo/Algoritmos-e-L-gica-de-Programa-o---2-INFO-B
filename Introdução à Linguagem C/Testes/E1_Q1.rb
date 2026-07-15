puts ("Olá, Davi! O professor Israel da matéria de Algoritmos e Lógica de Programação gostaria de calcular o seu desempenho médio durante as três primeiras avaliações, porém infelizmente as notas foram perdidas devido a um erro ocorrido no servidor do SUAP (como sempre...). Peço que busque em sua casa as suas notas e insira abaixo para que possamos calcular a sua média.")
print("\nInsira sua primeira nota: ")
n1 = gets.chomp.to_f
print("\nInsira sua segunda nota: ")
n2 = gets.chomp.to_f
print("\nInsira sua terceira nota: ")
n3 = gets.chomp.to_f

m = (n1+n2+n3)/3

puts("Obrigado! A sua média é #{m}")