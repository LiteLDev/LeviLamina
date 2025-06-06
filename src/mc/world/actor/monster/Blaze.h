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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk8bbde8;
    ::ll::UntypedStorage<4, 4> mUnk54d31f;
    // NOLINTEND

public:
    // prevent constructor by default
    Blaze& operator=(Blaze const&);
    Blaze(Blaze const&);
    Blaze();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 38
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 48
    virtual bool isOnFire() const /*override*/;

    // vIndex: 177
    virtual bool isDarkEnoughToSpawn() const /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 8
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
