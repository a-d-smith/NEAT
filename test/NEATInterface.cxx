#include <iostream>

// NEAT specific headers ----------------------------
#include "Node.h"
#include "Network.h"

using namespace NEAT;

// Useful typedefs ----------------------------------
typedef std::shared_ptr<Node> NodePtr;
typedef std::vector<NodePtr>  NodeVector;

int main() {
  
  Network n;
  NodePtr a = n.AddNode();
  NodePtr b = n.AddNode();
  NodePtr c = n.AddNode();

  n.ConnectNodes(a, b);
  n.ConnectNodes(b, c);
  
  for (NodePtr node : n.GetNodes()){
    std::cout << "Node " << node->GetId() << std::endl;
    for (NodePtr links : node->GetLinks()){
      std::cout << "  Link " << links->GetId() << std::endl;
    }
  }

  return 0;
}
