#ifndef GENE_H
#define GENE_H

#include <stdlib.h>
#include <memory>

#include "Node.h"

namespace NEAT {


/**
 * @brief Gene class
 */
class Gene {
  protected:
    size_t m_innovation;
    std::shared_ptr<Node> m_node1, m_node2;
    double m_weight;
    bool m_enabled;
  public:
    /**
     * @brief Default constructor
     */
    Gene() {}; 

    /**
     * @brief Parametrised constructor
     */
    Gene(size_t innovation, std::shared_ptr<Node> node1, std::shared_ptr<Node> node2) : m_innovation(innovation), m_node1(node1), m_node2(node2) {}; 

    // Getters
    std::shared_ptr<Node> GetNode1() const;
    std::shared_ptr<Node> GetNode2() const;
    double GetWeight() const;
    bool IsEnabled() const;
    size_t GetInnovation() const;

    // Setters
    void SetWeight(double weight);
    void Enable();
    void Disable();
};

} // namespace NEAT

#endif // GENE_H
