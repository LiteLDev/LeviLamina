#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/DataPlacementLowLevelBase.h"
#include "mc/external/splitfat/ErrorCode.h"

namespace SFAT {

class DataPlacementStrategyBase : public ::SFAT::DataPlacementLowLevelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk47cc4a;
    // NOLINTEND

public:
    // prevent constructor by default
    DataPlacementStrategyBase& operator=(DataPlacementStrategyBase const&);
    DataPlacementStrategyBase(DataPlacementStrategyBase const&);
    DataPlacementStrategyBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::SFAT::ErrorCode moveCluster(uint, uint) /*override*/;

    // vIndex: 0
    virtual ~DataPlacementStrategyBase() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace SFAT
