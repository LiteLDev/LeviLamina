#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/DefinitionTrigger.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockEventManager; }
namespace BlockEvents { class BlockPlayerDestroyEvent; }
// clang-format on

class OnPlayerDestroyedTrigger : public ::DefinitionTrigger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7d90fa;
    // NOLINTEND

public:
    // prevent constructor by default
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&);
    OnPlayerDestroyedTrigger();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OnPlayerDestroyedTrigger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void finalize(::BlockEvents::BlockEventManager& manager);

    MCNAPI void onPlayerDestroy(::BlockEvents::BlockPlayerDestroyEvent const& eventData) const;
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
