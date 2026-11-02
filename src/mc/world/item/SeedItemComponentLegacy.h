#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/molang/MolangVersion.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/level/block/BlockDescriptor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class CompoundTag;
class Item;
class ItemStack;
class Vec3;
namespace Json { class Value; }
// clang-format on

class SeedItemComponentLegacy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Item&>                           mOwner;
    ::ll::TypedStorage<8, 8, ::Block const*>                    mResult;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mTargetLandBlocks;
    ::ll::TypedStorage<1, 1, bool>                              mPlantAtAnyVisibleSolidSurface;
    ::ll::TypedStorage<1, 1, bool>                              mIsPlanting;
    ::ll::TypedStorage<1, 1, uchar>                             mFaceToPlantAt;
    // NOLINTEND

public:
    // prevent constructor by default
    SeedItemComponentLegacy& operator=(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy(SeedItemComponentLegacy const&);
    SeedItemComponentLegacy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SeedItemComponentLegacy(::Item& owner);

    MCNAPI ::std::unique_ptr<::CompoundTag> buildNetworkTag() const;

#ifdef LL_PLAT_C
    MCNAPI bool canUseOn(::Actor& entity, ::BlockPos const& blockPos, uchar face) const;
#endif

    MCAPI bool init(::Json::Value const& data, ::MolangVersion molangVersion);

    MCNAPI bool useOn(
        ::ItemStack&      instance,
        ::Actor&          actor,
        ::BlockPos const& blockPos,
        uchar             face,
        ::Vec3 const&     clickPos,
        ::HandSlot
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Json::Value initializeFromNetwork(::CompoundTag const& tag);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Item& owner);
    // NOLINTEND
};
