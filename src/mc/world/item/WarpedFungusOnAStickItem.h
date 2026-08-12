#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ComponentItem.h"

class WarpedFungusOnAStickItem : public ::ComponentItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isHandEquipped() const /*override*/;

    virtual bool requiresInteract() const /*override*/;

    virtual int getEnchantSlot() const /*override*/;

    virtual int getEnchantValue() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isHandEquipped() const;

    MCFOLD bool $requiresInteract() const;

#ifdef LL_PLAT_S
    MCAPI int $getEnchantSlot() const;
#else // LL_PLAT_C
    MCFOLD int $getEnchantSlot() const;
#endif

    MCFOLD int $getEnchantValue() const;


    // NOLINTEND
};
