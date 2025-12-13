#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockStepOnEvent; }
// clang-format on

class OnStepOnTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf4b4fe;
    // NOLINTEND

public:
    // prevent constructor by default
    OnStepOnTrigger& operator=(OnStepOnTrigger const&);
    OnStepOnTrigger(OnStepOnTrigger const&);
    OnStepOnTrigger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnStepOnTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCNAPI void onStepOn(::BlockEvents::BlockStepOnEvent const& eventData) const;
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
