#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class WarpedFungusOnAStickItem : public ::ComponentItem {
public:
    // prevent constructor by default
    WarpedFungusOnAStickItem& operator=(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem(WarpedFungusOnAStickItem const&);
    WarpedFungusOnAStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 38
    virtual bool isHandEquipped() const /*override*/;

    // vIndex: 50
    virtual bool requiresInteract() const /*override*/;

    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 55
    virtual int getEnchantValue() const /*override*/;

    // vIndex: 0
    virtual ~WarpedFungusOnAStickItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WarpedFungusOnAStickItem(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $isHandEquipped() const;

    MCAPI bool $requiresInteract() const;

    MCAPI int $getEnchantSlot() const;

    MCAPI int $getEnchantValue() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
