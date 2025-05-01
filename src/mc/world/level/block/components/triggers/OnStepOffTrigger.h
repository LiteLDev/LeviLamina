#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockStepOffEvent; }
// clang-format on

class OnStepOffTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf678f7;
    // NOLINTEND

public:
    // prevent constructor by default
    OnStepOffTrigger& operator=(OnStepOffTrigger const&);
    OnStepOffTrigger(OnStepOffTrigger const&);
    OnStepOffTrigger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnStepOffTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCNAPI void onStepOff(::BlockEvents::BlockStepOffEvent const& eventData) const;
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
