def calculator():
    number1 = (input("first number:"))
    if number1.isnumeric():
        number1 = int(number1)
    else:
        print('invalid value of number1')
        return
    operation = input('required operation:')
    number2 = (input("second number:"))
    if number2.isnumeric():
        number2 = int(number2)
    else:
        print('invalid value of number2')
        return
    if operation is '+':
        return number1 + number2
    elif operation is '-':
        return number1 - number2
    elif operation is '*':
        return number1*number2
    elif operation is '/':
        return number1/number2
    elif operation is '^':
        return number1**number2
    else:
        print('invalid operator')
        return

print(calculator())
