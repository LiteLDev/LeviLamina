#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
// clang-format on

class LlamaSpit : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> ownerId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void normalTick() /*override*/;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    virtual ~LlamaSpit() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $normalTick();

    MCFOLD float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
