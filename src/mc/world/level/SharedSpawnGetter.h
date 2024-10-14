#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ISharedSpawnGetter.h"

class SharedSpawnGetter : public ::ISharedSpawnGetter {
public:
    // prevent constructor by default
    SharedSpawnGetter& operator=(SharedSpawnGetter const&);
    SharedSpawnGetter(SharedSpawnGetter const&);
    SharedSpawnGetter();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedSpawnGetter() = default;

    // vIndex: 1
    virtual class BlockPos const& getSharedSpawnPosition() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class BlockPos const& getSharedSpawnPosition$() const;

    // NOLINTEND
};
