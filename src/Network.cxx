#ifndef NETWORK_CXX
#define NETWORK_CXX

#include "Network.h"

namespace NEAT {
  /**
   * @brief Default constructor
   */
  Network::Network() {
    m_maxNodeId = 0;
  } 

  // Getters
  const std::vector<std::shared_ptr<Node> > & Network::GetNodes() const {
    return m_nodes;
  }

  // Functions to modify the network
  std::shared_ptr<Node> & Network::AddNode() {
    // Update the max node id
    m_maxNodeId++;

    // Use the current max node id as the ID of the new node
    std::shared_ptr<Node> newNodePtr ( new Node(m_maxNodeId) );

    // Add this new node to the network
    m_nodes.push_back(newNodePtr);

    return m_nodes.at(m_nodes.size());
  }

} // namespace NEAT

#endif // NETWORK_CXX
