#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemStackBase.h"

// auto generated forward declare list
// clang-format off
class Block;
class CompoundTag;
class Item;
// clang-format on

class LootItemStack : public ::ItemStackBase {
public:
    // prevent constructor by default
    LootItemStack();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reinit(::Block const& block, int count) /*override*/;

    virtual void reinit(::Item const& item, int count, int auxValue) /*override*/;

    virtual void reinit(::std::string_view item, int count, int auxValue) /*override*/;

    virtual void setNull(::std::optional<::std::string> reason) /*override*/;

    virtual explicit operator bool() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI LootItemStack(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Item const& item, int count, int auxValue, ::CompoundTag const* _userData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reinit(::Block const& block, int count);

    MCNAPI void $reinit(::Item const& item, int count, int auxValue);

    MCNAPI void $reinit(::std::string_view item, int count, int auxValue);

    MCNAPI void $setNull(::std::optional<::std::string> reason);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
