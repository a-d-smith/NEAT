#ifndef NETWORK_H
#define NETWORK_H

#include <stdlib.h>
#include <vector>

#include "Node.h"

namespace NEAT {

/**
 * @brief Network class
 */
class Network {
  protected:
    std::vector<std::shared_ptr<Node> > m_nodes; ///< Vector of smart pointers to nodes in this Network
    size_t m_maxNodeId;                          ///< Maximum node ID in the Network
  public:
    /**
     * @brief Default constructor
     */
    Network();

    // Getters
    const std::vector<std::shared_ptr<Node> > & GetNodes() const;

    // Functions to modify the network
    std::shared_ptr<Node> & AddNode();
    void ConnectNodes(std::shared_ptr<Node> & node1, std::shared_ptr<Node> & node2);
};

} // namespace NEAT

#endif // NETWORK_H
