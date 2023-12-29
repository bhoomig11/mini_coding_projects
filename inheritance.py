#inheritance
#possibility - 1
class Parent():
    
    def print_last_name(self):
        print('Sharma')


class Child(Parent):

    def print_first_name(self):
        print('Advait')

    def print_last_name(self):  #overriding the inheritance
        print('Chaubey')

advait = Child()
advait.print_first_name()
advait.print_last_name()


#multiple inheritance

class Mario():

    def move(self):
        print('I am moving!')

class Mushroom():
    def eatmushroom(self):
        print('now I am big!')


class BigMario(Mario, Mushroom):
    pass     #need a line don't have aynthing to add

bm = BigMario()
bm.move()
bm.eatmushroom() 


#possibility - 2

class Parent():
    def __init__(self, fname, lname):
        self.fname = fname
        self.lname = lname

    def print_full_name(self):  
        print(str(self.fname) + str(self.lname) )
   

person1 = Parent("Advait", " Sharma")
person1.print_full_name()

#possibility - 3

class Parent():
    
    def print_last_name(self):
        return 'Sharma'

class Child(Parent):

    def __init__(self, name):
        self.name = name

    def get_full_name(self):  
        return str(self.name) + " " + str(self.print_last_name())

person1 = Child("Bhoomi")
print(person1.get_full_name())

#possibility - 4


class Parent():
    def __init__(self):
        self.lname = "Sharma"

class Child(Parent):

    def __init__(self, fname):
        Parent.__init__(self)
        self.name = fname

    def get_full_name(self):  
        print(str(self.name) + " " + str(self.lname))

person1 = Child("Advait")
person1.get_full_name()



class Human():

    def __init__(self, eyecolor, height, weight, haircolor):
        self.eyecolor = eyecolor
        self.height = height
        self.weight = weight
        self.haircolor = haircolor

    def get_eyecolor(self):
        return(str(self.eyecolor)) 

    def get_height(self):   
        return(str(self.height)) 
        
    def get_weight(self):
        return(str(self.weight))
        
    def get_haircolor(self):    
        return(str(self.haircolor))

    def get_features(self):  #using dictionary
        return {"eyecolor": self.eyecolor, "height":self.height, "weight":self.weight, "haircolor": self.haircolor}

    

person1 = Human('brown' , '6ft', '94kg', 'golden')
print(person1.get_features())