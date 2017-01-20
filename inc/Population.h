#ifndef POPULATION_H
#define POPULATION_H

#include <stdlib.h>
#include <vector>
#include <memory>

#include "Network.h"

namespace NEAT {

/// Forward declare the Network class
class Network;

/**
 * @brief Population class
 */
class Population : public std::enable_shared_from_this<Population> {
  protected:
    size_t m_maxInnovation;                            ///< Maximum innovation number of all genes in any network 
    std::vector<std::shared_ptr<Network> > m_networks; ///< Vector of smart pointers to networks in the population
  public:
    /**
     * @brief Default constructor
     */
    Population() : m_maxInnovation(0) {};

    // Getters
    const std::vector<std::shared_ptr<Network> > & GetNetworks() const;

    // Setters
    std::shared_ptr<Network> AddNetwork();
};

} // namespace NEAT

#endif // POPULATION_H
