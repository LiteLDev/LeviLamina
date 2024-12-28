#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AbstractCompassItem.h"

class RecoveryCompassItem : public ::AbstractCompassItem {
public:
    // prevent constructor by default
    RecoveryCompassItem& operator=(RecoveryCompassItem const&);
    RecoveryCompassItem(RecoveryCompassItem const&);
    RecoveryCompassItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RecoveryCompassItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RecoveryCompassItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
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
