#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
// clang-format on

class SpeleothemFeature : public ::IFeature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mBaseBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mPointedBlock;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mReplaceableBlocks;
    // NOLINTEND

public:
    // prevent constructor by default
    SpeleothemFeature& operator=(SpeleothemFeature const&);
    SpeleothemFeature(SpeleothemFeature const&);
    SpeleothemFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
