#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DyePowderItem.h"
#include "mc/world/item/ItemColor.h"

class LegacyDyeItem : public ::DyePowderItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk4123e4;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyDyeItem& operator=(LegacyDyeItem const&);
    LegacyDyeItem(LegacyDyeItem const&);
    LegacyDyeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 16
    virtual bool isDye() const /*override*/;

    // vIndex: 0
    virtual ~LegacyDyeItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyDyeItem(::std::string const& name, int id, ::ItemColor color, bool allowLegacyUseAsDye);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::ItemColor color, bool allowLegacyUseAsDye);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isDye() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
