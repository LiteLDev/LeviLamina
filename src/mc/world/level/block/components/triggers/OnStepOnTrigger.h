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
    // vIndex: 0
    virtual ~OnStepOnTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCAPI void onStepOn(::BlockEvents::BlockStepOnEvent const& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
