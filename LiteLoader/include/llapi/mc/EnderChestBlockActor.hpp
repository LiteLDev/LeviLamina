/**
 * @file  EnderChestBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -557427768
     * @symbol ?canPullOutItem@EnderChestBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPullOutItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   1560816318
     * @symbol ?canPushInItem@EnderChestBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   1072419914
     * @symbol ?getName@EnderChestBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -501408646
     * @symbol ?playCloseSound@EnderChestBlockActor@@MEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @hash   -1078635388
     * @symbol ?playOpenSound@EnderChestBlockActor@@MEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playOpenSound(class BlockSource &);
#endif
    /**
     * @hash   611699943
     * @symbol ??0EnderChestBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@@Z
     */
    MCAPI EnderChestBlockActor(enum class BlockActorType, std::string const &, enum class BlockActorRendererId, class BlockPos const &);

//private:

private:
    /**
     * @hash   331169787
     * @symbol ?ITEMS_SIZE@EnderChestBlockActor@@0HB
     */
    MCAPI static int const ITEMS_SIZE;

};