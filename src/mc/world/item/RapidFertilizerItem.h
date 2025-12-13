#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class RapidFertilizerItem : public ::FertilizerItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;

    virtual ~RapidFertilizerItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $fixupCommon(::ItemStackBase& stack) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
