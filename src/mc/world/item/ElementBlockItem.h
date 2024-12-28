#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ChemistryAuxDataBlockItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class ElementBlockItem : public ::ChemistryAuxDataBlockItem {
public:
    // prevent constructor by default
    ElementBlockItem& operator=(ElementBlockItem const&);
    ElementBlockItem(ElementBlockItem const&);
    ElementBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 97
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    // vIndex: 0
    virtual ~ElementBlockItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fixupCommon(::ItemStackBase& stack) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
