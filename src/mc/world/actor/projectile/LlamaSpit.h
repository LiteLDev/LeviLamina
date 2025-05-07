#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/PredictableProjectile.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
struct ActorUniqueID;
// clang-format on

class LlamaSpit : public ::PredictableProjectile {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb21078;
    // NOLINTEND

public:
    // prevent constructor by default
    LlamaSpit& operator=(LlamaSpit const&);
    LlamaSpit(LlamaSpit const&);
    LlamaSpit();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 38
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const /*override*/;

    // vIndex: 84
    virtual ::ActorUniqueID getSourceUniqueID() const /*override*/;

    // vIndex: 8
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
