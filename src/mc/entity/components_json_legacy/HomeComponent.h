#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/entity/components_json_legacy/RestrictionType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Dimension;
// clang-format on

class HomeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnke4d7e6;
    ::ll::UntypedStorage<4, 4>  mUnkf877d7;
    ::ll::UntypedStorage<4, 4>  mUnk814ab0;
    ::ll::UntypedStorage<4, 4>  mUnkb1e8f1;
    ::ll::UntypedStorage<4, 4>  mUnkd6819b;
    ::ll::UntypedStorage<8, 24> mUnk5482c7;
    ::ll::UntypedStorage<4, 12> mUnk2d8353;
    ::ll::UntypedStorage<4, 4>  mUnkbdd2fa;
    // NOLINTEND

public:
    // prevent constructor by default
    HomeComponent& operator=(HomeComponent const&);
    HomeComponent(HomeComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HomeComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI ::BlockPos getHomePos() const;

    MCFOLD int getRestrictionRadius() const;

    MCFOLD bool hasAnyRestriction() const;

    MCAPI bool hasSpecificRestriction(::RestrictionType restrictionType) const;

    MCAPI bool hasValidBlockAtHomePos(::BlockSource const& region) const;

    MCAPI bool hasValidHomePos() const;

    MCAPI bool isInHomeDimension(::Actor const& owner) const;

    MCAPI bool isWithinRestriction(::BlockPos const& pos) const;

    MCAPI ::HomeComponent& operator=(::HomeComponent&&);

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
