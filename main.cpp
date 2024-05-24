#include <iostream>
#include <list>
#include <set>
#include <string>
#include "List.cpp"
#include "Map.cpp"


int main() {
    //-------------------------------ListandStack-----------------------------------------------------------------------

    std::list<int> list = {1, 2, 3, 4, 5};
    std::list<int> list2 = kehrt(list);
    for (int element : list2) {
        std::cout << element << " ";
    }


    //-------------------------------Map--------------------------------------------------------------------------------

    std::string words = "Schreiben Sie eine Klasse deren Aufgabe es ist, Wörter zu zählen, die in\n"
                        "einem String übergeben wurden. Wenn in dem String beispielsweise\n"
                        "dreimal das Wort \"Hobbit\" vorkommt, sollte am Ende der Analyse das\n"
                        "Wort „Hobbit“ mit dem Wert 3 assoziiert sein. Realisieren Sie Ihre Lösung\n"
                        "mittels einer Map.";


    //---------------------------------Set------------------------------------------------------------------------------

    std::list<std::string> tiere = {"Giraffe", "Giraffe", "Katze", "Giraffe", "Hund", "Giraffe", "Giraffe", "Elefant"};
    std::set<std::string> arche;

    std::set<std::string> tier_Arten;
    for(auto i : tiere) {
        tier_Arten.insert(i);
    }

    for(auto i : tiere) {
        if(tier_Arten.find(i) != tier_Arten.end()) {
            tier_Arten.erase(i);
        }
        else {
            arche.insert(i);
        }
    }

    for(auto i: arche) {
        std::cout << i;
    }


    //---------------------------------Set------------------------------------------------------------------------------

    std::set<std::pair<std::string, std::string>> tier_Arten2 = {{"Rammler", "Zibbe"}, {"Erperl", "Ente"}};
    std::list<std::string> tiere2 = {"Rammler", "Zibbe", "Erperl", "Ente"};
    std::set<std::pair<std::string, std::string>> arche2;

    for(auto i : tiere2) {
        for(auto j : tiere2) {
            if(tier_Arten2.find(std::pair<std::string, std::string>(i, j)) != tier_Arten2.end()) {
                arche2.insert(std::pair<std::string, std::string>(i, j));
            }
        }
    }

    return 0;
}