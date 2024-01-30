    //THis is a clip board for code. For developer use only
    


    //Player.cpp

player::player(){
    this->name = "John Doe";
}

//Constructor with parameters:
player::player(string aName, int aStre, int aIntell, int aPerc, int aEndur, int aCharis, int aAgil, int aLuck){
    this->name = aName;
    this->strength = aStre;
    this->intelligence = aIntell;
    this->perception = aPerc;
    this->endurance = aEndur;
    this->charisma = aCharis;
    this->agility = aAgil;
    this->luck = aLuck;
}

//game.h

    player(string, int, int, int, int, int, int, int);
    
    cout<<"Please type your name:"<<endl;
    cin>>mainChar.name;
    cout<<"How strong are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.strength;
    cout<<"How smart are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.intelligence;
    cout<<"How perceptive are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.perception;
    cout<<"How much can you endure? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.endurance;
    cout<<"How charismatic are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.charisma;
    cout<<"How fast are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.agility;
    cout<<"How lucky are you? (Insert a range from -5 to +5)"<<endl;
    cin>>mainChar.luck;