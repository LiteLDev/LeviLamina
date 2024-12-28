#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitlementChangeListener : public ::std::enable_shared_from_this<::EntitlementChangeListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk11d24b;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitlementChangeListener& operator=(EntitlementChangeListener const&);
    EntitlementChangeListener(EntitlementChangeListener const&);
    EntitlementChangeListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntitlementChangeListener();

    // vIndex: 1
    virtual void onEntitlementReset();

    // vIndex: 2
    virtual void _onEntitlementChanged();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onEntitlementReset();

    MCAPI void $_onEntitlementChanged();
    // NOLINTEND
};
