#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/biome/Biome.h"

std::vector<class Biome*> BiomeRegistry::lookupByType(enum class VanillaBiomeTypes type) const {
    std::vector<Biome*> res;
    forEachBiome([&](Biome& biome) {
        if (biome.getBiomeType() == type)
            res.push_back(&biome);
    });
    return res;
}