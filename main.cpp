// CPSC 323 - Project 2
// LL(1 Predictive Parser
#include <iostream>
#include <string>
# include <vector>
#include <unordered_map>

using TableKey = std::string;
using ProductionRHS = std::string;

// Below this is a helper functions to build a map key for terminal and nonterminal
TableKey makeKey (char nonterminal, char terminal){
    std::string key;
    key.push_back(nonterminal);
    key.push_back(' ');
    key.pushback(terminal);
    return key
}
// This will be the predictive parser class
class PredictiveParser{
public:

}
