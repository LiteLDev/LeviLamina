#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class CompoundTag;
class DataLoadHelper;
class Vec3;
// clang-format on

class ExplodeComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk19c889;
    ::ll::UntypedStorage<4, 4> mUnk99d116;
    ::ll::UntypedStorage<4, 4> mUnk62a77f;
    ::ll::UntypedStorage<4, 4> mUnkb32111;
    ::ll::UntypedStorage<1, 1> mUnk5ddf5d;
    ::ll::UntypedStorage<1, 1> mUnk8a65b7;
    ::ll::UntypedStorage<4, 4> mUnkd971d3;
    ::ll::UntypedStorage<1, 1> mUnk25b64a;
    ::ll::UntypedStorage<1, 1> mUnk89afe7;
    ::ll::UntypedStorage<1, 1> mUnk1207e7;
    ::ll::UntypedStorage<1, 1> mUnkea255f;
    ::ll::UntypedStorage<1, 1> mUnk9a50a6;
    ::ll::UntypedStorage<1, 1> mUnk3c0b59;
    ::ll::UntypedStorage<4, 4> mUnka3f423;
    ::ll::UntypedStorage<2, 2> mUnk1c198f;
    ::ll::UntypedStorage<4, 4> mUnkfb9442;
    ::ll::UntypedStorage<1, 1> mUnk2ce52b;
    // NOLINTEND

public:
    // prevent constructor by default
    ExplodeComponent& operator=(ExplodeComponent const&);
    ExplodeComponent(ExplodeComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExplodeComponent();

    MCAPI void addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void explode(::Actor& actor, ::Vec3 const& explosionPosition);

    MCFOLD int getFuseLength() const;

    MCFOLD int getInitialFuseLength() const;

    MCFOLD bool getIsFuseLit() const;

    MCFOLD bool getNegatesFallDamage() const;

    MCFOLD bool isFuseLit() const;

    MCAPI void readAdditionalSaveData(::Actor& owner, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD bool requiresTntExplodeGameRuleEnabled() const;

    MCFOLD void setAllowUnderwater(bool allow);

    MCFOLD void setFuseLength(int fuseLength);

    MCAPI void setTntExpodeGameRuleRequired();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
