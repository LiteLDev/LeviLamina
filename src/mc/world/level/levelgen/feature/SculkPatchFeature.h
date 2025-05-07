#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class SculkPatchFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcf5e30;
    ::ll::UntypedStorage<8, 8>  mUnk7fcce9;
    ::ll::UntypedStorage<4, 4>  mUnke97cf8;
    ::ll::UntypedStorage<4, 4>  mUnkcc4a7b;
    ::ll::UntypedStorage<4, 4>  mUnke1c92f;
    ::ll::UntypedStorage<4, 4>  mUnkd9913b;
    ::ll::UntypedStorage<4, 4>  mUnk85c4ba;
    ::ll::UntypedStorage<4, 4>  mUnkc4b064;
    ::ll::UntypedStorage<4, 8>  mUnk580d07;
    // NOLINTEND

public:
    // prevent constructor by default
    SculkPatchFeature& operator=(SculkPatchFeature const&);
    SculkPatchFeature(SculkPatchFeature const&);
    SculkPatchFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkPatchFeature() /*override*/ = default;

    // vIndex: 1
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const& context) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool _canSpreadFrom(::IBlockWorldGenAPI& target, ::BlockPos const& originPos) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::BlockPos> $place(::IFeature::PlacementContext const& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
