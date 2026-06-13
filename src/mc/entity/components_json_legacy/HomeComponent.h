#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeakPtr.h"
#include "mc/entity/components_json_legacy/RestrictionType.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockSource;
class BlockType;
class CompoundTag;
class DataLoadHelper;
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
    // member functions
    // NOLINTBEGIN
    MCAPI HomeComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCFOLD ::BlockPos getHomePos() const;

    MCFOLD int getRestrictionRadius() const;

    MCFOLD int getRestrictionRadiusSqr() const;

    MCFOLD bool hasAnyRestriction() const;

    MCFOLD bool hasSpecificRestriction(::RestrictionType restrictionType) const;

    MCAPI bool hasValidBlockAtHomePos(::BlockSource const& region) const;

    MCAPI bool hasValidHomePos() const;

    MCAPI bool isInHomeDimension(::Actor const& owner) const;

    MCAPI bool isWithinRestriction(::BlockPos const& pos) const;

    MCAPI void readAdditionalSaveData(::Actor&, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void setHome(::BlockPos const& pos, ::DimensionType const& id);

    MCAPI void tick(::Actor& owner);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
