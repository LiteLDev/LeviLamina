#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class OnPlacedTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk149f78;
    // NOLINTEND

public:
    // prevent constructor by default
    OnPlacedTrigger& operator=(OnPlacedTrigger const&);
    OnPlacedTrigger(OnPlacedTrigger const&);
    OnPlacedTrigger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OnPlacedTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent const& eventData) const;
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
