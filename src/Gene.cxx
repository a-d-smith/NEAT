#ifndef GENE_CXX
#define GENE_CXX

#include <stdlib.h>
#include <memory>

#include "Gene.h"

namespace NEAT {

    // Getters
    std::shared_ptr<Node> Gene::GetNode1() const {
      return m_node1;
    }

    std::shared_ptr<Node> Gene::GetNode2() const {
      return m_node2;
    }

    double Gene::GetWeight() const {
      return m_weight;
    }

    bool Gene::IsEnabled() const {
      return m_enabled;
    }

    size_t Gene::GetInnovation() const {
      return m_innovation;
    }

    // Setters
    void Gene::SetWeight(double weight) {
      m_weight = weight;
    }

    void Gene::Enable() {
      m_enabled = true;
    }

    void Gene::Disable() {
      m_enabled = false;
    }

} // namespace NEAT

#endif // GENE_CXX
