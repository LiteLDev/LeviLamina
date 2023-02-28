#include "llapi/memory/Hook.h"
#include "llapi/mc/Biome.hpp"
#include "llapi/mc/BiomeRegistry.hpp"
#include "llapi/mc/VanillaBiomes.hpp"
#include "llapi/mc/Level.hpp"
#include "llapi/mc/HashedString.hpp"

using ll::memory::dAccess;

int Biome::getId() const { return dAccess<int, 136>(this); }

std::string const& Biome::getName() const { return dAccess<HashedString, 8>(this).getString(); }

Biome* Biome::fromId(int id) {
    auto& reg = Global<Level>->getBiomeRegistry();
    return reg.lookupById(id);
}

Biome* Biome::fromName(std::string const& name) {
    auto& reg = Global<Level>->getBiomeRegistry();
    return reg.lookupByName(name);
}

std::vector<Biome*> Biome::getBiomesByType(VanillaBiomeTypes type) {
    std::vector<Biome*> result;
    auto&               reg = Global<Level>->getBiomeRegistry();
    reg.forEachBiome([&](Biome& biome) {
        if (biome.getBiomeType() == type)
            result.push_back(&biome);
    });
    return result;
}

#ifdef DEBUG

#include "llapi/LoggerAPI.h"
#include "llapi/mc/Minecraft.hpp"

#include "liteloader/LiteLoader.h"

using ll::logger;

LL_AUTO_INSTANCE_HOOK(
    StartServerThread_TestBiome,
    HookPriority::Normal,
    "?startServerThread@ServerInstance@@QEAAXXZ",
    void,
) {
    Global<Level> = Global<Minecraft>->getLevel();
    auto& reg     = Global<Level>->getBiomeRegistry();
    assert(reg.isRegistrationFinished());
    reg.forEachBiome([](class Biome& bio) {
        logger.warn("id: {}, name: {}, typeId: {}", bio.getId(), bio.getName(), (int)bio.getBiomeType());
        assert(&bio == Biome::fromId(bio.getId()));
        assert(&bio == Biome::fromName(bio.getName()));
    });
    for (size_t i = 0; i < 20; i++) {
        auto        biomes     = Biome::getBiomesByType((VanillaBiomeTypes)i);
        std::string biomesInfo = "";
        for (auto biome : biomes)
            biomesInfo += biome->getName() + ", ";
        logger.warn("type: {}, biomes: {}", i, biomesInfo);
    }
    std::vector<Biome*> bimes = dAccess<std::vector<Biome*>>(&reg, 126 * 8);
    __debugbreak();
    return origin();
}

#endif // DEBUG
