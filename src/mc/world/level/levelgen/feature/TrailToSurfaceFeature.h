#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class HashedString;
class IBlockWorldGenAPI;
class Random;
// clang-format on

class TrailToSurfaceFeature : public ::Feature {
public:
    // TrailToSurfaceFeature inner types define
    using IsValidFeaturePos = ::brstd::function_ref<bool(::IBlockWorldGenAPI const&, ::BlockPos const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>                                                 mFeature;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mHangingBlock;
    ::ll::TypedStorage<8, 8, ::HashedString const&>                                                mTrailBlock;
    ::ll::TypedStorage<8, 8, ::std::vector<::std::reference_wrapper<::HashedString const>> const&> mReplaceableBlocks;
    ::ll::TypedStorage<8, 16, ::brstd::function_ref<bool(::IBlockWorldGenAPI const&, ::BlockPos const&)> const>
        mIsValidFeaturePos;
    // NOLINTEND

public:
    // prevent constructor by default
    TrailToSurfaceFeature& operator=(TrailToSurfaceFeature const&);
    TrailToSurfaceFeature(TrailToSurfaceFeature const&);
    TrailToSurfaceFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool place(::BlockSource&, ::BlockPos const&, ::Random&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
