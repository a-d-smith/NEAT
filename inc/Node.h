#ifndef NODE_H
#define NODE_H

#include <stdlib.h>
#include <vector>
#include <memory>

namespace NEAT {


/**
 * @brief Node class
 */
class Node {
  protected:
    const size_t m_id;                           ///< Unique identifier for the node 
    std::vector<std::shared_ptr<Node> > m_links; ///< Vector of smart pointers to nodes that this node links to
  public:
    /**
     * @brief Default constructor
     */
    Node() : m_id(0) {};

    /**
     * @brief Parametrised constructor
     */
    Node(size_t id) : m_id(id) {};

    // Getters
    size_t GetId() const;
    const std::vector<std::shared_ptr<Node> > & GetLinks() const;

    // Setters
    void LinkToNode(std::shared_ptr<Node> &node);
};

} // namespace NEAT

#endif // NODE_H
