#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/triggers/BlockTriggerDescription.h"

// auto generated forward declare list
// clang-format off
class OnPlayerDestroyedTrigger;
// clang-format on

class OnPlayerDestroyedTriggerDescription : public ::BlockTriggerDescription<::OnPlayerDestroyedTrigger> {
public:
    // prevent constructor by default
    OnPlayerDestroyedTriggerDescription& operator=(OnPlayerDestroyedTriggerDescription const&);
    OnPlayerDestroyedTriggerDescription(OnPlayerDestroyedTriggerDescription const&);
    OnPlayerDestroyedTriggerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 0
    virtual ~OnPlayerDestroyedTriggerDescription() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
