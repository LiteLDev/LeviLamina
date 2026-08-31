#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class ChemistryItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void fixupCommon(::ItemStackBase& stack) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void validate(::ItemStackBase& stack);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $fixupCommon(::ItemStackBase& stack) const;


    // NOLINTEND
};
