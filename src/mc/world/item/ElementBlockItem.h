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
    // virtual functions
    // NOLINTBEGIN
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    virtual ~ElementBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $fixupCommon(::ItemStackBase& stack) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
