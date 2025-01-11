#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/ActorHasEquipmentTest.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
// clang-format on

class ActorHasDamagedEquipmentTest : public ::ActorHasEquipmentTest {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::std::string_view getName() const /*override*/;

    // vIndex: 7
    virtual bool _isExpectedItem(::std::vector<::ItemStack const*> const& itemList) const /*override*/;

    // vIndex: 0
    virtual ~ActorHasDamagedEquipmentTest() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string_view $getName() const;

    MCAPI bool $_isExpectedItem(::std::vector<::ItemStack const*> const& itemList) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
