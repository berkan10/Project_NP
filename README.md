# Project_Network Programming


## Server-client based FIFA Ultimate Team game.

FIFA is een voetbalspel waarbij de player de kans krijgt om de meest zeldzame speler, coach of stadium te winnen om zo zijn/haar club te versterken.
Start eerst client daarna de server om het spel juist te beginnen. Wanneer de game start verwacht de server een GO command om het spel voort te zetten. Vervolgens heeft de speler de keuze tussen drie pakketten namelijk: 


                                  - Brons pack : beschikt over => 1 x Random player 
                                  - Silver pack : beschikt over => 1 x Random player , 1 x Random coach
                                  - Gold pack : bechikt over => 1 x Random player , 1 x Random Stadium , 1 x Random coach
                                  
                                  
## Techniche uitleg

De game werkt met een aantal commando's, namelijk =>

          pushtask     = FIFA!<task<Berkan> 
          subtask      = FIFA?<task<Berkan>
          subanswer    = FIFA!<answer>   
          pushanswer   = FIFA?<answer>    
  
De berichen worden altijd met een ? of ! verstuurd, zo is duidelijk wie wat heeft gestuurd. De client reageert altijd met een ? terwijl de server altijd antwoord met een !. 

Bij het opstarten van de game verstuurd de server => FIFA!<task<Berkan>Welcome to FIFA
                                                      Type 'GO' or 'go' to get further
De client antwoordt met FIFA?<answer>GO
Vervolgens stuurt de server het welkomsbericht naar de client => FIFA!<answer>Welcome to FIFA Ultimate Team pack opening let's gooooooo
                                                                  You got 3 attempts
                                                                  Choose your package to get your cards (press number)
                                                                  1 GOLD PACK
                                                                  2 SILVER PACK
                                                                  3 BRONZE PACK
  Nu verwacht de client een input van de player. De player heeft drie pogingen voordat de gebruiker de keuze heeft om het spel te hervatten of af te sluiten. 
  
  De client antwoordt met FIFA!<task<Berkan>( keuze pakket )
  De server antwoordt met FIFA!<answer<package> ( output van de pakketten )
  
  ## verloop game
```
- SERVER   : verstuurd eerst op FIFA!<task<Berkan>   
- CLIENT   : luistert op FIFA!<task<Berkan> en verstuurt het GO commando met FIFA?<answer>
- SERVER   : verstuurd op FIFA!<answer> het welkomsbericht
- CLIENT   : verstuurd op FIFA!<task<Berkan> de input van de player 
- LOOP     :  3 X input
- SERVER   : verstuurd op FIFA!<answer<package> de ouput van de pakketten
- CLIENT1  : verstuurd op blackjack>game?>naam1> wat hij wilt doen
- end loop :
- CLIENT   : vraagt of user opnieuw wil spelen
- CLIENT   : ALS Y, dan kan de player opnieuw drie keer een input ingeven zo niet wordt het programma afgesloten
```
  
  
  

