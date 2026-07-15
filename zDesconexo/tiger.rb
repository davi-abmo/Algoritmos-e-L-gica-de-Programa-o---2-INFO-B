require 'io/console'

class ContaBancaria
  attr_reader = :nome, :saldo

  def initialize(nome, saldo)
    @nome = nome
    @saldo = saldo
  end

  def show
    puts "\nOlá, #{@nome}!\nSeu saldo atual é: #{@saldo}\n"
  end
    
  def gamble
    puts "\nAtualmente você possui #{@saldo} na conta.\nQuanto você gostaria de apostar?\n"
    money = gets.chomp.to_f
    if money <= @saldo
      luck = rand(1..10)
      3.times do
        print "."
        sleep(1)
      end
      if luck == 8 
        @saldo += money
        puts "Parabéns! Você ganhou a aposta, a quantia de #{money} será adicionada ao seu saldo atual, totalizando #{@saldo} reais\n"
      else
        @saldo -= money
        puts "Que pena! Você perdeu a aposta, a quantia de #{money} será descontada do seu saldo atual, totalizando #{@saldo} reais\n"
      end
    else
      @saldo = 0
      puts "Tu tem menos que isso seu bostola!\nAgora seu saldo é 0 reais\n"  
    end
    sleep(4)
  end
end

joao = ContaBancaria.new("João", 100)
while true
  joao.show()
  joao.gamble()
  $stdout.clear_screen
end