#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
// clang-format on

class Blaze : public ::Monster {
public:
    // Blaze inner types define
    using DataFlagIdType = schar;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mAllowedHeightOffset;
    ::ll::TypedStorage<4, 4, int>   mNextHeightOffsetChangeTick;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    virtual void aiStep() /*override*/;

    virtual bool isOnFire() const /*override*/;

    virtual bool isDarkEnoughToSpawn() const /*override*/;

    virtual void normalTick() /*override*/;

    virtual ~Blaze() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void preTravel();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCFOLD float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCAPI void $aiStep();

    MCAPI bool $isOnFire() const;

    MCFOLD bool $isDarkEnoughToSpawn() const;

    MCAPI void $normalTick();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
