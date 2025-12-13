#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class OnInteractTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka2cc93;
    // NOLINTEND

public:
    // prevent constructor by default
    OnInteractTrigger& operator=(OnInteractTrigger const&);
    OnInteractTrigger(OnInteractTrigger const&);
    OnInteractTrigger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnInteractTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCNAPI void onInteract(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
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
