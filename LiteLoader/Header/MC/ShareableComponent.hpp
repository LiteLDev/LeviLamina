// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ShareableComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHAREABLECOMPONENT
public:
    class ShareableComponent& operator=(class ShareableComponent const &) = delete;
    ShareableComponent(class ShareableComponent const &) = delete;
    ShareableComponent() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHAREABLECOMPONENT
public:
#endif
    MCAPI int getCountToPickUp(class Actor const &, class ItemActor const &) const;
    MCAPI int getCountToPickUp(class Actor const &, class ItemStack const &) const;
    MCAPI int getSlotToSwap(class Actor &, class ItemActor const &) const;
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, class ItemStack &, bool) const;
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, bool) const;
    MCAPI bool itemBelongsInInventory(class Actor &, class ItemStack const &, bool) const;
    MCAPI int wantsMore(class Actor const &, class ItemStack const &) const;
    MCAPI bool willPickup(class Actor &, class ItemStack const &, bool, bool) const;


//private:
    MCAPI int _getItemPriority(class ShareableDefinition const &, class ItemStack const &) const;
    MCAPI bool _shouldReplaceItem(class ItemStack const &, class ItemStack const &, class ShareableDefinition const &, bool) const;
    MCAPI static bool _useLegacySurplusRules(class Level const &);

};