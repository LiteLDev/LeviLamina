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
    WarpedFungusOnAStickItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isHandEquipped() const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual int getEnchantValue() const /*override*/;

    virtual ~WarpedFungusOnAStickItem() /*override*/ = default;
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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isHandEquipped() const;

    MCFOLD bool $requiresInteract() const;

    MCAPI int $getEnchantSlot() const;

    MCFOLD int $getEnchantValue() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
