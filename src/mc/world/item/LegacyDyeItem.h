#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DyePowderItem.h"

class LegacyDyeItem : public ::DyePowderItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mAllowLegacyUseAsDye;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isDye() const /*override*/;

    virtual ~LegacyDyeItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isDye() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
