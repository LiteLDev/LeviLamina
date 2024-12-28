#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class Random;
class RenderParams;
// clang-format on

class BeardAndShaverFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk8d2f81;
    ::ll::UntypedStorage<4, 24>  mUnk6fca60;
    ::ll::UntypedStorage<4, 4>   mUnk7ca8b3;
    ::ll::UntypedStorage<8, 184> mUnk58a20b;
    ::ll::UntypedStorage<8, 184> mUnk3dcb6e;
    ::ll::UntypedStorage<4, 4>   mUnkb90b8b;
    ::ll::UntypedStorage<4, 4>   mUnk531526;
    // NOLINTEND

public:
    // prevent constructor by default
    BeardAndShaverFeature& operator=(BeardAndShaverFeature const&);
    BeardAndShaverFeature(BeardAndShaverFeature const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BeardAndShaverFeature() /*override*/;

    // vIndex: 1
    virtual ::std::optional<::BlockPos>
    place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BeardAndShaverFeature();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::BlockPos>
    $place(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Random& random, ::RenderParams& renderParams) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
