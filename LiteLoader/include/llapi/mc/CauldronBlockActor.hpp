/**
 * @file  CauldronBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
     * @hash   -1609406765
     * @symbol  ?_getUpdatePacket\@CauldronBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   844382671
     * @symbol  ?_onUpdatePacket\@CauldronBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1357790875
     * @symbol  ?getContainer\@CauldronBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @hash   -1785512735
     * @symbol  ?getContainer\@CauldronBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @hash   1508394349
     * @symbol  ?getContainerSize\@CauldronBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @hash   -1783362674
     * @symbol  ?getItem\@CauldronBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @hash   -1596228100
     * @symbol  ?getMaxStackSize\@CauldronBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   415510017
     * @symbol  ?getName\@CauldronBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   123707233
     * @symbol  ?load\@CauldronBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -781318638
     * @symbol  ?onChanged\@CauldronBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @hash   364451552
     * @symbol  ?save\@CauldronBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -955648797
     * @symbol  ?serverInitItemStackIds\@CauldronBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @hash   1197819207
     * @symbol  ?setItem\@CauldronBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @hash   -691619734
     * @symbol  ?startOpen\@CauldronBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @hash   1227395210
     * @symbol  ?stopOpen\@CauldronBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @hash   -1915322902
     * @symbol  ?tick\@CauldronBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   505422509
     * @symbol  ??0CauldronBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI CauldronBlockActor(class BlockPos const &);
    /**
     * @hash   -1206556448
     * @symbol  ?getColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @hash   1888725790
     * @symbol  ?getCustomColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getCustomColor() const;
    /**
     * @hash   -2112745352
     * @symbol  ?getMixDyeColor\@CauldronBlockActor\@\@QEAA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getMixDyeColor();
    /**
     * @hash   2008028266
     * @symbol  ?getPotionColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getPotionColor() const;
    /**
     * @hash   2042918244
     * @symbol  ?getPotionType\@CauldronBlockActor\@\@QEBA?AW4PotionType\@Potion\@\@XZ
     */
    MCAPI enum class Potion::PotionType getPotionType() const;
    /**
     * @hash   544931139
     * @symbol  ?mixDyes\@CauldronBlockActor\@\@QEAAXXZ
     */
    MCAPI void mixDyes();
    /**
     * @hash   261146010
     * @symbol  ?setCustomColor\@CauldronBlockActor\@\@QEAAXAEBVColor\@mce\@\@\@Z
     */
    MCAPI void setCustomColor(class mce::Color const &);
    /**
     * @hash   40965236
     * @symbol  ?setPotionType\@CauldronBlockActor\@\@QEAAXW4PotionType\@Potion\@\@\@Z
     */
    MCAPI void setPotionType(enum class Potion::PotionType);
    /**
     * @hash   -740889273
     * @symbol  ?WATER_COLOR\@CauldronBlockActor\@\@2VColor\@mce\@\@A
     */
    MCAPI static class mce::Color WATER_COLOR;

};