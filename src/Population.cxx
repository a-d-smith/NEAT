#ifndef POPULATION_CXX
#define POPULATION_CXX

#include "Population.h"

namespace NEAT {

// Getters
const std::vector<std::shared_ptr<Network> > & Population::GetNetworks() const {
  return m_networks;
}

// Setters
std::shared_ptr<Network> Population::AddNetwork() {
  std::shared_ptr<Network> newNetworkPtr(new Network(shared_from_this()));
  m_networks.push_back(newNetworkPtr);

  return m_networks[m_networks.size() - 1];
}

} // namespace NEAT

#endif // POPULATION_CXX
