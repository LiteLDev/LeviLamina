#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlayerPlacingEvent; }
// clang-format on

class OnPlayerPlacingTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk53bf4e;
    // NOLINTEND

public:
    // prevent constructor by default
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&);
    OnPlayerPlacingTrigger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnPlayerPlacingTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCNAPI void onPlayerPlacing(::BlockEvents::BlockPlayerPlacingEvent& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
