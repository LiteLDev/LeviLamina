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
    // vIndex: 0
    virtual ~MapDataManagerOptions() = default;

    // vIndex: 1
    virtual bool isPremiumWorldTemplate() const;

    // vIndex: 2
    virtual bool isLegacyLevel() const;

    // vIndex: 3
    virtual bool hasMapsCenteredToOrigin() const;

    // vIndex: 4
    virtual class BlockPos const& getWorldCenter() const;

    MCAPI explicit MapDataManagerOptions(class LevelData&);

    // NOLINTEND
};
