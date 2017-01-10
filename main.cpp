
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>


using namespace std;

enum genre {pop, rock, klassik, hard_rock};

class Lied{
   public:
    string titel;
    string interpret;
    string erscheinungsjahr;
    string laenge;
    genre g;
    int eintrag = 0;
    
   
   

void eintraganlegen(vector<Lied>& liste, Lied li){
    string k;
    
    cout << "Geben Sie einen Titel an: ";
    cin >> titel;
    li.titel = "Titel: " + titel;
    
    cout << "Geben Sie einen Interpreten an: ";
    cin >> interpret;
    li.interpret = "Interpret: " + interpret;
    
    cout << "Geben Sie ein Erscheinungsjahr an: ";
    cin >> erscheinungsjahr;
    li.erscheinungsjahr = "Erscheinungsjahr: " + erscheinungsjahr;
    
    cout << "Geben Sie eine laenge an: ";
    cin >> laenge;
    li.laenge = "Laenge: " + laenge;
    
    
    cout << "Geben sie ein Genre an:";
    cin >> k;
    
    if (k == "pop") {
        li.g = pop;
    }
        
    if (k == "rock") {
        li.g = rock;
    }
        
    if (k == "klassik") {
        li.g = klassik;
    }   
    if (k == "hard_rock") {
        li.g = hard_rock;    
    }
   
    eintrag = eintrag + 1;
    li.eintrag = eintrag;
    
    
    liste.push_back(li);
    
    
    
}

    
   



void eintraganzeigen(vector<Lied>& liste, Lied li){
    int eintragsnr;
    
    
    cout << "Welchen Eintrag moechten Sie sehen?" << endl;
    cin >> eintragsnr;
    

        cout << liste[eintragsnr - 1].eintrag << ".Eintrag" << endl;
        cout << liste[eintragsnr - 1].titel << endl;
        cout << liste[eintragsnr - 1].interpret << endl;
        cout << liste[eintragsnr - 1].erscheinungsjahr << endl;
        cout << liste[eintragsnr - 1].laenge << endl;
        
} 

void alleeintraganzeigen(vector<Lied>& liste, Lied li){
  
    
    
     
    for (int i = 0; i < liste.size(); i++){
        cout << endl << liste[i].eintrag << ".Eintrag" << endl;
        cout << liste[i].titel << endl;
        cout << liste[i].interpret << endl;
        cout << liste[i].erscheinungsjahr << endl;
        cout << liste[i].laenge << endl;
        
        if (liste[i].g == pop) {
            cout << "Genre: Pop" << endl << endl;  
        }
        
        if (liste[i].g == rock) {
            cout << "Genre: Rock" << endl << endl;
        }
        
        if (liste[i].g == klassik) {
            cout << "Genre: Klassik" << endl << endl;
        }
        
        if (liste[i].g == hard_rock) {
            cout << "Genre: Hard Rock" << endl << endl;
        }
    } 
}

void eintragloeschen(vector<Lied>& liste, Lied li){
    int loeschen;
    
    cout << "Welchen Eintrag moechten Sie loeschen?";
    
    cin >> loeschen;
    
    liste.erase(liste.begin () + loeschen - 1);
    
    for  (int i = loeschen - 1; i < liste.size(); i++) {
        liste[i].eintrag--;
        
          
    }  
}

void eintragbearbeiten(vector<Lied>& liste, Lied li){
    int bearbeiten;
    string information;
    
    cout << "Welchen Entrag moechten Sie bearbeiten?" << endl;
    
    cin >> bearbeiten;
        
        cout << liste[bearbeiten - 1].eintrag << ".Eintrag" << endl;
        cout << liste[bearbeiten - 1].titel << endl;
        cout << liste[bearbeiten - 1].interpret << endl;
        cout << liste[bearbeiten - 1].erscheinungsjahr << endl;
        cout << liste[bearbeiten - 1].laenge << endl;
        
        if (liste[bearbeiten - 1].g == pop) {
            cout << "Genre: Pop" << endl << endl;  
        }
        
        if (liste[bearbeiten - 1].g == rock) {
            cout << "Genre: Rock" << endl << endl;
        }
        
        if (liste[bearbeiten - 1].g == klassik) {
            cout << "Genre: Klassik" << endl << endl;
        }
        
        if (liste[bearbeiten - 1].g == hard_rock) {
            cout << "Genre: Hard Rock" << endl << endl;
        }
        
        
        cout << "Welchhe Information wollen Sie bearbeiten?" << endl;
        
        cin >> information;
        
        if (information == "titel" | information == "Titel") {
            cout << "Geben Sie einen Titel an." << endl;
            cin >> titel;
            liste[bearbeiten - 1].titel = "Titel: " + titel;
        }
        
        if (information == "interpret" | information == "Interpret") {
            cout << "Geben Sie einen Interpreten  an." << endl;
            cin >> interpret;
            liste[bearbeiten - 1].interpret = "Titel: " + interpret;
        }
        
        if (information == "erscheinungsjahr" | information == "Erscheinungsjahr") {
            cout << "Geben Sie ein Erscheinungsjahr an." << endl;
            cin >> erscheinungsjahr;
            liste[bearbeiten - 1].erscheinungsjahr = "Titel: " + erscheinungsjahr;
        }
        
        if (information == "laenge" | information == "Laenge") {
            cout << "Geben Sie die Laenge an." << endl;
            cin >> laenge;
            liste[bearbeiten - 1].laenge = "Titel: " + laenge;
        }
        
        if (information == "genre" | information == "Genre") {
            cout << "Bitte geben Sie ein Genre an." << endl;
            cin >> information;
            
            if (information == "pop") { 
                g = pop;
            }  
            if (information == "rock") { 
                g = rock;
            } 
            if (information == "klassik") { 
                g = klassik;
            } 
            if (information == "hard_rock" | information == "hard rock") { 
                g = hard_rock;
            } 
            liste[bearbeiten-1].g = g;
            
          
        }
        
    
}
};



int menu(vector<Lied>& liste){
    Lied li;
    string eingabe;
   
   
    
    while(true){
    cout << endl << "********** Musikblibothek Version 0.1 **********" << endl;
    cout <<"Hauptmenue" << endl;
    cout <<"1. (N)euen Eintrag anlegen" << endl;
    cout <<"2. (D)etails eines Eintrages anzeigen" << endl;
    cout <<"3. Einen Eintrag (l)oeschen" << endl;
    cout <<"4. Einen Eintrag (b)earbeiten" << endl;
    cout <<"5. Einen Eintrag (s)uchen" << endl;   
    cout <<"6. (A)lle Eintraege anzeigen" << endl;
    
    cout <<" " << endl;    
    
    cout <<"0. Programm beenden" <<endl;
    
    cin >> eingabe;
    
    if (eingabe == "1" | eingabe == "N" | eingabe == "n"){
        cout << "Sie befinden sich im Menuepunkt Neuen Eintrag anlegen" << endl << endl;
        li.eintraganlegen(liste, li);
        
        
    }
    
    if (eingabe == "2" | eingabe == "D" | eingabe == "d"){
        cout << "Sie befinden sich im Menuepunkt Details eines Eintrages anzeigen." << endl << endl;
        li.eintraganzeigen(liste, li);
    }
    
    if (eingabe == "3" | eingabe == "L" | eingabe == "l"){
        cout << "Sie befinden sich im Menuepunkt Einen Eintrag loeschen-" << endl << endl;
        li.eintragloeschen(liste, li);
    }
    
    if (eingabe == "4" | eingabe == "B" | eingabe == "b"){
        cout << "Sie befinden sich im Menuepunkt Neuen Eintrag anlegen." << endl << endl;
        li.eintragbearbeiten(liste, li);
    }
    
     if (eingabe == "5" | eingabe == "S" | eingabe == "s"){
        cout << "Sie befinden sich im Menuepunkt Einen Eintrag suchen." << endl << endl;
        
    }
    
     if (eingabe == "6" | eingabe == "A" | eingabe == "a"){
        cout << "Sie befinden sich im Menuepunkt Alle Eintraege anzeigen." << endl << endl;
        li.alleeintraganzeigen(liste, li);
    }
    
    if (eingabe == "0"){
        return 0;
    }
    
    }
}

int main() {
   vector<Lied> liste; 
   menu(liste); 
   
   
   
   return 0;
}
