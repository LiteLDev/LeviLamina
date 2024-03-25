#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/LimboEntitiesVersion.h"

// clang-format off
namespace mce { class Color; }
// clang-format on

class IDimension {

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IDimension@@UEAA@XZ
    virtual ~IDimension();

    // vIndex: 1
    virtual bool isNaturalDimension() const = 0;

    // vIndex: 2
    virtual DimensionType getDimensionId() const = 0;

    // vIndex: 3
    virtual void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*) = 0;

    // vIndex: 4
    virtual void flushLevelChunkGarbageCollector() = 0;

    // vIndex: 5
    virtual void initializeWithLevelStorageManager(class LevelStorageManager&) = 0;

    // vIndex: 6
    virtual class BiomeRegistry& getBiomeRegistry() = 0;

    // vIndex: 7
    virtual class BiomeRegistry const& getBiomeRegistry() const = 0;

    // vIndex: 8
    virtual class Vec3 translatePosAcrossDimension(class Vec3 const&, DimensionType) const = 0;

    // vIndex: 9
    virtual void forEachPlayer(std::function<bool(class Player&)> callback) const = 0;

    // NOLINTEND
};
