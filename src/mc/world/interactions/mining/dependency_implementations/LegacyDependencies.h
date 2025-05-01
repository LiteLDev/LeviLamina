#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/interactions/mining/ILegacyDependencies.h"

namespace Interactions::Mining {

class LegacyDependencies : public ::Interactions::Mining::ILegacyDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk68f03c;
    ::ll::UntypedStorage<8, 8>  mUnk4403e5;
    ::ll::UntypedStorage<8, 8>  mUnk6ae31b;
    ::ll::UntypedStorage<4, 12> mUnka24266;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyDependencies& operator=(LegacyDependencies const&);
    LegacyDependencies(LegacyDependencies const&);
    LegacyDependencies();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void hurtAndBreak(int damage) /*override*/;

    // vIndex: 0
    virtual ~LegacyDependencies() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $hurtAndBreak(int damage);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Interactions::Mining
