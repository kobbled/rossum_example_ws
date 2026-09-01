# Print a ascii tree with the base length
# specified by the user
# -----------------------

userclear()
usershow()

number    := LR[]
number = userReadInt('enter length of ascii tree.')
number -=  1

i   := LR[]
for i in (0 to number)

  spaces   := LR[]
  spaces = number - i

  j   := LR[]
  for j in (0 to spaces)
    print(' ')
  end
  
  k   := LR[]
  for k in (0 to i)
    print('* ')
  end
  print_line('')
end
