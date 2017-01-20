#ifndef NETWORK_CXX
#define NETWORK_CXX

#include "Network.h"

namespace NEAT {
  // Getters
  const std::vector<std::shared_ptr<Node> > & Network::GetNodes() const {
    return m_nodes;
  }
  const std::vector<std::shared_ptr<Gene> > & Network::GetGenes() const {
    return m_genes;
  }

  // Functions to modify the network
  std::shared_ptr<Node> & Network::AddNode() {
    // Update the max node id
    m_maxNodeId++;

    // Use the current max node id as the ID of the new node
    std::shared_ptr<Node> newNodePtr ( new Node(m_maxNodeId) );

    // Add this new node to the network
    m_nodes.push_back(newNodePtr);

    return m_nodes.at(m_nodes.size()-1);
  }

  void Network::ConnectNodes(std::shared_ptr<Node> & node1, std::shared_ptr<Node> & node2){
    // Link the two nodes together
    node1->LinkToNode(node2); 
    node2->LinkToNode(node1);

    // Now make a gene for the link
    std::shared_ptr<Gene> newGenePtr ( new Gene(0, node1, node2) );
    m_genes.push_back(newGenePtr);
  }

} // namespace NEAT

#endif // NETWORK_CXX
