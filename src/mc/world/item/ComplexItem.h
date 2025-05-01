#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemStack;
class Level;
class Packet;
// clang-format on

class ComplexItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ComplexItem() /*override*/ = default;

    // vIndex: 59
    virtual bool isComplex() const /*override*/;

    // vIndex: 121
    virtual ::std::unique_ptr<::Packet> getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isComplex() const;

    MCNAPI ::std::unique_ptr<::Packet> $getUpdatePacket(::ItemStack const& item, ::Level& level, ::Actor& player) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
