#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components_json_legacy/RestrictionType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class BlockType;
class CompoundTag;
class DataLoadHelper;
class Dimension;
// clang-format on

class HomeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::RestrictionType>                            mRestrictionType;
    ::ll::TypedStorage<4, 4, int>                                          mRestrictionRadius;
    ::ll::TypedStorage<4, 4, int>                                          mRestrictionRadiusSqr;
    ::ll::TypedStorage<4, 4, int>                                          mCooldownTicksMax;
    ::ll::TypedStorage<4, 4, int>                                          mCooldownTicks;
    ::ll::TypedStorage<8, 24, ::std::vector<::WeakPtr<::BlockType const>>> mHomeBlocks;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                  mHomePos;
    ::ll::TypedStorage<4, 4, ::DimensionType>                              mDimensionId;
    // NOLINTEND

public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&);
    HomeComponent(HomeComponent const&);
    HomeComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool hasValidBlockAtHomePos(::BlockSource const& region) const;

    MCAPI bool isInHomeDimension(::Actor const& owner) const;

    MCAPI ::HomeComponent& operator=(::HomeComponent&&);

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND
};
