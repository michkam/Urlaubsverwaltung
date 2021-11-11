#include <iostream>

using namespace std;

int main() {
    
   int fertig=0, alter, grad, gueltig1=0, gueltig2=0;
   char eingabe;
    
    
  while ( !fertig ) {   //Schleife durchläuft bis fertig=1 und somit das Program                           beendet
      
    cout<<"\n\n..........................................................\n"<<endl; 
    cout<<"Hallo, was möchten Sie tun?\n"<<endl;
    cout<<"(u) Meine Urlaubstage rechnen"<<endl;
    cout<<"(v) Program verlassen"<<endl;
    cout<<"**********************************************************\n\n"<<endl;
 
     cout<<"Eingabe: ";
     cin>>eingabe;
     getchar(); 
  
     
      switch(eingabe) {

      case 'v': 
              cout<<"Auf Wiedersehen!\n"<<endl;
              fertig = 1; break;  //Das Program wird hier verlassen
         
	  case 'u':{ 
               while (!gueltig1) { //Wird wiederholt, bis ein gültiges Alter                             gegeben wird
                    cout<<"Wie alt sind Sie?"<<endl;
                    cin>> alter;
                        if(alter>=14 && alter<=67) //14≤Alter≤67
                            gueltig1 = 1; 
                    }
	           while(!gueltig2){  //Wird wiederholt, bis ein gültiges Grag                              gegeben wird
                    cout<<"Welches Behinderungsgrad haben Sie?"<<endl;
                    cin>>grad; 
                       if(grad >= 0 && grad <= 100) //0≤Grad≤100
                            gueltig2 = 1;
                    }
               if(grad<=50) { //Wird ausgeführt für Behinderungsgrad≤ 50
                   if(alter >= 18 && alter <= 55){ //Für Mitarbeiter, die zwischen                                   18J und 55J alt sind
                     cout<<"Ihnen stehen 30 Urlaubstage zur Verfügung."<<endl;
                     }
                   else if(alter > 55){ //Für älter als 55J Mitarbeiter 
                     cout<<"Ihnen stehen 32 Urlaubstage zur Verfügung."<<endl;
                     }
                   else {  //Für unter 18J Behirderte Mitarbeiter
                     cout<<"Ihnen stehen 35 Urlaubstage zur Verfügung."<<endl;
                     }
                  }
              
               if(grad>50) {  //Wird ausgeführt, wenn Behinderungsgrad ≥ 50
                   if(alter >= 18 && alter <= 55){ //Für alle behinderte Mitarbeiter, die zwischen 18J und 55J alt sind
                     cout<<"Ihnen stehen 35 Urlaubstage zur Verfügung."<<endl;
                     }
                   else if(alter > 55){ //Für alle älter als 55J Behirderte                              Mitarbeiter
                     cout<<"Ihnen stehen 37 Urlaubstage zur Verfügung."<<endl;
                     }
                   else {  //Für alle unter 18J Behirderte Mitarbeiter
                     cout<<"Ihnen stehen 40 Urlaubstage zur Verfügung."<<endl;
                     }
                  }   
                    } gueltig1= 0; gueltig2= 0; break; //Alter u Grad zurücksetzen
              
       default: //Wird ausgeführt, falls eine ungültige Eingabe im Startmenu                  gegeben wird
              cout<<"Auswahl nicht verfuebar!\n Wählen Sie bitte u oder v aus"<<endl; 
            }
      }
  
return 0;
}