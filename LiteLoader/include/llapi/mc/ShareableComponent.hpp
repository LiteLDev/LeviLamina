/**
 * @file  ShareableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShareableComponent.
 *
 */
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
    /**
     * @hash   -876865258
     * @symbol ?getCountToPickUp@ShareableComponent@@QEBAHAEBVActor@@AEBVItemActor@@@Z
     */
    MCAPI int getCountToPickUp(class Actor const &, class ItemActor const &) const;
    /**
     * @hash   -1587851584
     * @symbol ?getCountToPickUp@ShareableComponent@@QEBAHAEBVActor@@AEBVItemStack@@@Z
     */
    MCAPI int getCountToPickUp(class Actor const &, class ItemStack const &) const;
    /**
     * @hash   1875078128
     * @symbol ?getSlotToSwap@ShareableComponent@@QEBAHAEAVActor@@AEBVItemActor@@@Z
     */
    MCAPI int getSlotToSwap(class Actor &, class ItemActor const &) const;
    /**
     * @hash   371129588
     * @symbol ?hasSurplus@ShareableComponent@@QEBAHAEAVActor@@AEBVItemStack@@AEAV3@_N@Z
     */
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, class ItemStack &, bool) const;
    /**
     * @hash   302244449
     * @symbol ?hasSurplus@ShareableComponent@@QEBAHAEAVActor@@AEBVItemStack@@_N@Z
     */
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, bool) const;
    /**
     * @hash   1847226741
     * @symbol ?itemBelongsInInventory@ShareableComponent@@QEBA_NAEAVActor@@AEBVItemStack@@_N@Z
     */
    MCAPI bool itemBelongsInInventory(class Actor &, class ItemStack const &, bool) const;
    /**
     * @hash   1944833950
     * @symbol ?wantsMore@ShareableComponent@@QEBAHAEBVActor@@AEBVItemStack@@@Z
     */
    MCAPI int wantsMore(class Actor const &, class ItemStack const &) const;
    /**
     * @hash   -1463373737
     * @symbol ?willPickup@ShareableComponent@@QEBA_NAEAVActor@@AEBVItemStack@@_N2@Z
     */
    MCAPI bool willPickup(class Actor &, class ItemStack const &, bool, bool) const;

//private:
    /**
     * @hash   -479790255
     * @symbol ?_getItemPriority@ShareableComponent@@AEBAHAEBVShareableDefinition@@AEBVItemStack@@@Z
     */
    MCAPI int _getItemPriority(class ShareableDefinition const &, class ItemStack const &) const;
    /**
     * @hash   -319669011
     * @symbol ?_shouldReplaceItem@ShareableComponent@@AEBA_NAEBVItemStack@@0AEBVShareableDefinition@@_N@Z
     */
    MCAPI bool _shouldReplaceItem(class ItemStack const &, class ItemStack const &, class ShareableDefinition const &, bool) const;
    /**
     * @hash   -1816085019
     * @symbol ?_useLegacySurplusRules@ShareableComponent@@CA_NAEBVLevel@@@Z
     */
    MCAPI static bool _useLegacySurplusRules(class Level const &);

private:

};