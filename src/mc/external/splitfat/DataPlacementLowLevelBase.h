#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/splitfat/ErrorCode.h"

namespace SFAT {

class DataPlacementLowLevelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke45ad2;
    ::ll::UntypedStorage<1, 1> mUnk8ab6e8;
    // NOLINTEND

public:
    // prevent constructor by default
    DataPlacementLowLevelBase& operator=(DataPlacementLowLevelBase const&);
    DataPlacementLowLevelBase(DataPlacementLowLevelBase const&);
    DataPlacementLowLevelBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataPlacementLowLevelBase() = default;

    // vIndex: 1
    virtual ::SFAT::ErrorCode moveCluster(uint, uint) = 0;

    // vIndex: 2
    virtual ::SFAT::ErrorCode prepareForWriteTransaction() = 0;

    // vIndex: 3
    virtual ::SFAT::ErrorCode performDefragmentaionOnTransactionEnd() = 0;

    // vIndex: 4
    virtual ::SFAT::ErrorCode findFreeCluster(uint&, bool) = 0;
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
