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
  n.AddNode();
  n.AddNode();
  n.AddNode();

  NodeVector nodes = n.GetNodes();

  n.ConnectNodes(nodes[0], nodes[1]);
  n.ConnectNodes(nodes[0], nodes[2]);
  
  for (NodePtr node : n.GetNodes()){
    std::cout << "Node " << node->GetId() << std::endl;
    for (NodePtr links : node->GetLinks()){
      std::cout << "  Link " << links->GetId() << std::endl;
    }
  }

  return 0;
}
