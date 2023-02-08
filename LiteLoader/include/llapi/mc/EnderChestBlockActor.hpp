/**
 * @file  EnderChestBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderChestBlockActor.
 *
 */
class EnderChestBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERCHESTBLOCKACTOR
public:
    class EnderChestBlockActor& operator=(class EnderChestBlockActor const &) = delete;
    EnderChestBlockActor(class EnderChestBlockActor const &) = delete;
    EnderChestBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENDERCHESTBLOCKACTOR
    /**
     * @hash   1129252559
     * @symbol  ?canPullOutItem\@EnderChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPullOutItem(int, int, class ItemStack const &) const;
    /**
     * @hash   -149627111
     * @symbol  ?canPushInItem\@EnderChestBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @hash   1774057546
     * @symbol  ?getName\@EnderChestBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   200228986
     * @symbol  ?playCloseSound\@EnderChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @hash   -376997756
     * @symbol  ?playOpenSound\@EnderChestBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playOpenSound(class BlockSource &);
#endif
    /**
     * @hash   1313337575
     * @symbol  ??0EnderChestBlockActor\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorRendererId\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI EnderChestBlockActor(enum class BlockActorType, std::string const &, enum class BlockActorRendererId, class BlockPos const &);

//private:

private:
    /**
     * @hash   1378513715
     * @symbol  ?ITEMS_SIZE\@EnderChestBlockActor\@\@0HB
     */
    MCAPI static int const ITEMS_SIZE;

};