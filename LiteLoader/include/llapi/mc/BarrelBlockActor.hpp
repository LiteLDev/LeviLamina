/**
 * @file  MC/BarrelBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BarrelBlockActor.
 *
 */
class BarrelBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BARRELBLOCKACTOR
public:
    class BarrelBlockActor& operator=(class BarrelBlockActor const &) = delete;
    BarrelBlockActor(class BarrelBlockActor const &) = delete;
    BarrelBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BARRELBLOCKACTOR
    /**
     * @hash   -1904356419
     * @symbol ?getName@BarrelBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -1242718285
     * @symbol ?onPlace@BarrelBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onPlace(class BlockSource &);
    /**
     * @hash   1380829584
     * @symbol ?playCloseSound@BarrelBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @hash   500138394
     * @symbol ?playOpenSound@BarrelBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playOpenSound(class BlockSource &);
    /**
     * @hash   -417200258
     * @symbol ?startOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   606384158
     * @symbol ?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
#endif
    /**
     * @hash   91436817
     * @symbol ??0BarrelBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI BarrelBlockActor(class BlockPos const &);

};