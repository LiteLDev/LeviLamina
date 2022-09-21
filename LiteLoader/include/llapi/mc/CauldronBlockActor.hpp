/**
 * @file  MC/CauldronBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Potion.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CauldronBlockActor.
 *
 */
class CauldronBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CAULDRONBLOCKACTOR
public:
    class CauldronBlockActor& operator=(class CauldronBlockActor const &) = delete;
    CauldronBlockActor(class CauldronBlockActor const &) = delete;
    CauldronBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCKACTOR
    /**
     * @hash   1805684307
     * @symbol ?_getUpdatePacket@CauldronBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -26006561
     * @symbol ?_onUpdatePacket@CauldronBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   2011833365
     * @symbol ?getContainer@CauldronBlockActor@@UEAAPEAVContainer@@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   1584111505
     * @symbol ?getContainer@CauldronBlockActor@@UEBAPEBVContainer@@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   -1870455491
     * @symbol ?getContainerSize@CauldronBlockActor@@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   1654146606
     * @symbol ?getItem@CauldronBlockActor@@UEBAAEBVItemStack@@H@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -680110644
     * @symbol ?getMaxStackSize@CauldronBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -447652495
     * @symbol ?getName@CauldronBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -739470655
     * @symbol ?load@CauldronBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -985066014
     * @symbol ?onChanged@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   -498757088
     * @symbol ?save@CauldronBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -1818857437
     * @symbol ?serverInitItemStackIds@CauldronBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   334595191
     * @symbol ?setItem@CauldronBlockActor@@UEAAXHAEBVItemStack@@@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -783506710
     * @symbol ?startOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   1135508234
     * @symbol ?stopOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   1516405002
     * @symbol ?tick@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   -357663123
     * @symbol ??0CauldronBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI CauldronBlockActor(class BlockPos const &);
    /**
     * @hash   -2069642080
     * @symbol ?getColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @hash   1025640158
     * @symbol ?getCustomColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getCustomColor() const;
    /**
     * @hash   1319136312
     * @symbol ?getMixDyeColor@CauldronBlockActor@@QEAA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getMixDyeColor();
    /**
     * @hash   1144865754
     * @symbol ?getPotionColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
     */
    MCAPI class mce::Color getPotionColor() const;
    /**
     * @hash   1185460228
     * @symbol ?getPotionType@CauldronBlockActor@@QEBA?AW4PotionType@Potion@@XZ
     */
    MCAPI enum Potion::PotionType getPotionType() const;
    /**
     * @hash   -318277501
     * @symbol ?mixDyes@CauldronBlockActor@@QEAAXXZ
     */
    MCAPI void mixDyes();
    /**
     * @hash   -602078006
     * @symbol ?setCustomColor@CauldronBlockActor@@QEAAXAEBVColor@mce@@@Z
     */
    MCAPI void setCustomColor(class mce::Color const &);
    /**
     * @hash   -816554284
     * @symbol ?setPotionType@CauldronBlockActor@@QEAAXW4PotionType@Potion@@@Z
     */
    MCAPI void setPotionType(enum Potion::PotionType);
    /**
     * @hash   -1827449689
     * @symbol ?WATER_COLOR@CauldronBlockActor@@2VColor@mce@@A
     */
    MCAPI static class mce::Color WATER_COLOR;

};