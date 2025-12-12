#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

class MushroomFeature : public ::Feature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk73cc93;
    ::ll::UntypedStorage<4, 4> mUnkcb7dc0;
    // NOLINTEND

public:
    // prevent constructor by default
    MushroomFeature& operator=(MushroomFeature const&);
    MushroomFeature(MushroomFeature const&);
    MushroomFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    virtual ~MushroomFeature() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
