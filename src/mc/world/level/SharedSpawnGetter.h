#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ISharedSpawnGetter.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class SharedSpawnGetter : public ::ISharedSpawnGetter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7281fe;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedSpawnGetter& operator=(SharedSpawnGetter const&);
    SharedSpawnGetter(SharedSpawnGetter const&);
    SharedSpawnGetter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedSpawnGetter() /*override*/ = default;

    // vIndex: 1
    virtual ::BlockPos const& getSharedSpawnPosition() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos const& $getSharedSpawnPosition() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
