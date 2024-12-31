#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/triggers/BlockTriggerDescription.h"

// auto generated forward declare list
// clang-format off
class OnStepOffTrigger;
// clang-format on

class OnStepOffTriggerDescription : public ::BlockTriggerDescription<::OnStepOffTrigger> {
public:
    // prevent constructor by default
    OnStepOffTriggerDescription& operator=(OnStepOffTriggerDescription const&);
    OnStepOffTriggerDescription(OnStepOffTriggerDescription const&);
    OnStepOffTriggerDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 0
    virtual ~OnStepOffTriggerDescription() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
