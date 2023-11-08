#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/IMapDataManagerOptions.h"

class MapDataManagerOptions : public ::IMapDataManagerOptions {
public:
    // prevent constructor by default
    MapDataManagerOptions& operator=(MapDataManagerOptions const&);
    MapDataManagerOptions(MapDataManagerOptions const&);
    MapDataManagerOptions();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MapDataManagerOptions@@UEAA@XZ
    virtual ~MapDataManagerOptions() = default;

    // vIndex: 1, symbol: ?isPremiumWorldTemplate@MapDataManagerOptions@@UEBA_NXZ
    virtual bool isPremiumWorldTemplate() const;

    // vIndex: 2, symbol: ?isLegacyLevel@MapDataManagerOptions@@UEBA_NXZ
    virtual bool isLegacyLevel() const;

    // vIndex: 3, symbol: ?hasMapsCenteredToOrigin@MapDataManagerOptions@@UEBA_NXZ
    virtual bool hasMapsCenteredToOrigin() const;

    // vIndex: 4, symbol: ?getWorldCenter@MapDataManagerOptions@@UEBAAEBVBlockPos@@XZ
    virtual class BlockPos const& getWorldCenter() const;

    // symbol: ??0MapDataManagerOptions@@QEAA@AEAVLevelData@@@Z
    MCAPI explicit MapDataManagerOptions(class LevelData&);

    // NOLINTEND
};
