def apresentacao(name, gender, age, city, job)
  if gender == "male"
    if age < 18
      puts"Olá, meu nome é #{name}, sou um jovem de #{age} anos, moro em #{city} e trabalho como #{job}.\n"
    else
      puts"Olá, meu nome é #{name}, sou um homem de #{age} anos, moro em #{city} e trabalho como #{job}.\n"
    end
  elsif gender == "female"
    if age < 18
      puts"Olá, meu nome é #{name}, sou uma jovem de #{age} anos, moro em #{city} e trabalho como #{job}.\n"
    else
      puts"Olá, meu nome é #{name}, sou uma mulher de #{age} anos, moro em #{city} e trabalho como #{job}.\n"
    end
  elsif gender == "non_binary"
    if age < 18
      puts"Olá, meu nome é #{name}, sou ume jovem de #{age} anos, moro em #{city} e trabalho como #{job}.\n"
    else
      puts"Olá, meu nome é #{name}, sou uma pessoa de #{age} anos, moro em #{city} e trabalho como #{job}.\n"
    end
  else
    puts "Gênero não reconhecido!"
  end
end

apresentacao("Alex", "non_binary", 20, "Taguatinga", "escritor de histórias")
apresentacao("Davi", "male", 16, "Ipiranga do Piauí", "CEO e programador Back-End de uma startup")
apresentacao("Ana Laura", "female", 16, "Ipiranga do Piauí", "designer e programadora Front-End de uma startup")