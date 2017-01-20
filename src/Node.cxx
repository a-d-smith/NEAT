#ifndef NODE_CXX
#define NODE_CXX

#include <algorithm>

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
  // Check if a link doesn't already exist
  if (std::find(m_links.begin(), m_links.end(), node) == m_links.end() && node->GetId() != m_id){
    m_links.push_back(node);
  }
}




} // namespace NEAT

#endif // NODE_CXX
