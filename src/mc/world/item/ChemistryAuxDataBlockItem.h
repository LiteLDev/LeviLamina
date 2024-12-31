#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/AuxDataBlockItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class ChemistryAuxDataBlockItem : public ::AuxDataBlockItem {
public:
    // prevent constructor by default
    ChemistryAuxDataBlockItem& operator=(ChemistryAuxDataBlockItem const&);
    ChemistryAuxDataBlockItem(ChemistryAuxDataBlockItem const&);
    ChemistryAuxDataBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 97
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    // vIndex: 0
    virtual ~ChemistryAuxDataBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
