# Print a ascii tree with the base length
# specified by the user
# -----------------------

userclear()
usershow()

number    := R[56]
number = userReadInt('enter length of ascii tree.')

i := R[46]
Dummy_1   := R[225]
Dummy_1 = number - 1
for i in (0 to Dummy_1)

  Dummy_2   := R[226]
  Dummy_2 = Dummy_1 - i
  j := R[48]
  for j in (0 to Dummy_2)
    print(' ')
  end

  k         := R[50]
  for k in (0 to i)
    print('* ')
  end
  print_line('')
end
