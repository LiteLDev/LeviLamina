/**
 * @file  ShareableComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -1719869834
     * @symbol  ?getCountToPickUp\@ShareableComponent\@\@QEBAHAEBVActor\@\@AEBVItemActor\@\@\@Z
     */
    MCAPI int getCountToPickUp(class Actor const &, class ItemActor const &) const;
    /**
     * @hash   1864111136
     * @symbol  ?getCountToPickUp\@ShareableComponent\@\@QEBAHAEBVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI int getCountToPickUp(class Actor const &, class ItemStack const &) const;
    /**
     * @hash   1032073552
     * @symbol  ?getSlotToSwap\@ShareableComponent\@\@QEBAHAEAVActor\@\@AEBVItemActor\@\@\@Z
     */
    MCAPI int getSlotToSwap(class Actor &, class ItemActor const &) const;
    /**
     * @hash   -471828860
     * @symbol  ?hasSurplus\@ShareableComponent\@\@QEBAHAEAVActor\@\@AEBVItemStack\@\@AEAV3\@_N\@Z
     */
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, class ItemStack &, bool) const;
    /**
     * @hash   -540683247
     * @symbol  ?hasSurplus\@ShareableComponent\@\@QEBAHAEAVActor\@\@AEBVItemStack\@\@_N\@Z
     */
    MCAPI int hasSurplus(class Actor &, class ItemStack const &, bool) const;
    /**
     * @hash   1004314421
     * @symbol  ?itemBelongsInInventory\@ShareableComponent\@\@QEBA_NAEAVActor\@\@AEBVItemStack\@\@_N\@Z
     */
    MCAPI bool itemBelongsInInventory(class Actor &, class ItemStack const &, bool) const;
    /**
     * @hash   1102060014
     * @symbol  ?wantsMore\@ShareableComponent\@\@QEBAHAEBVActor\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI int wantsMore(class Actor const &, class ItemStack const &) const;
    /**
     * @hash   1988819623
     * @symbol  ?willPickup\@ShareableComponent\@\@QEBA_NAEAVActor\@\@AEBVItemStack\@\@_N2\@Z
     */
    MCAPI bool willPickup(class Actor &, class ItemStack const &, bool, bool) const;

//private:
    /**
     * @hash   -1322963967
     * @symbol  ?_getItemPriority\@ShareableComponent\@\@AEBAHAEBVShareableDefinition\@\@AEBVItemStack\@\@\@Z
     */
    MCAPI int _getItemPriority(class ShareableDefinition const &, class ItemStack const &) const;
    /**
     * @hash   -1162842723
     * @symbol  ?_shouldReplaceItem\@ShareableComponent\@\@AEBA_NAEBVItemStack\@\@0AEBVShareableDefinition\@\@_N\@Z
     */
    MCAPI bool _shouldReplaceItem(class ItemStack const &, class ItemStack const &, class ShareableDefinition const &, bool) const;
    /**
     * @hash   1635708565
     * @symbol  ?_useLegacySurplusRules\@ShareableComponent\@\@CA_NAEBVLevel\@\@\@Z
     */
    MCAPI static bool _useLegacySurplusRules(class Level const &);

private:

};