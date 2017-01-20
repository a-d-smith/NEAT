#ifndef NODE_CXX
#define NODE_CXX

#include "Node.h"

namespace NEAT {

// Getters
size_t Node::GetId() const {
  return m_id;  
}

const std::vector<std::shared_ptr<Node> > & Node::GetLinks() const {
  return m_links;
}

// Setters
void Node::LinkToNode(std::shared_ptr<Node> & node) {
  m_links.push_back(node);
}




} // namespace NEAT

#endif // NODE_CXX
