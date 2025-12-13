#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/ILegacyActorDependencies.h"

namespace Interactions {

class LegacyActorDependencies : public ::Interactions::ILegacyActorDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk80e268;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyActorDependencies& operator=(LegacyActorDependencies const&);
    LegacyActorDependencies(LegacyActorDependencies const&);
    LegacyActorDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isRemoved() /*override*/;

    virtual ~LegacyActorDependencies() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isRemoved();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Interactions
