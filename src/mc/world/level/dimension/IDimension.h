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

    // vIndex: 0, symbol: ?isNaturalDimension@Dimension@@UEBA_NXZ
    virtual bool isNaturalDimension() const = 0;

    // vIndex: 1, symbol: ?getDimensionId@Dimension@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getDimensionId() const = 0;

    // vIndex: 2, symbol: ?sendPacketForPosition@Dimension@@UEAAXAEBVBlockPos@@AEBVPacket@@PEBVPlayer@@@Z
    virtual void sendPacketForPosition(class BlockPos const&, class Packet const&, class Player const*) = 0;

    // vIndex: 3, symbol: ?flushLevelChunkGarbageCollector@Dimension@@UEAAXXZ
    virtual void flushLevelChunkGarbageCollector() = 0;

    // vIndex: 4, symbol: ?initializeWithLevelStorageManager@Dimension@@UEAAXAEAVLevelStorageManager@@@Z
    virtual void initializeWithLevelStorageManager(class LevelStorageManager&) = 0;

    // NOLINTEND
};
