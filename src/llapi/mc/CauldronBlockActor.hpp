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
     * @symbol  ?_getUpdatePacket\@CauldronBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol  ?_onUpdatePacket\@CauldronBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol  ?getContainer\@CauldronBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container * getContainer();
    /**
     * @symbol  ?getContainer\@CauldronBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const * getContainer() const;
    /**
     * @symbol  ?getContainerSize\@CauldronBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const;
    /**
     * @symbol  ?getItem\@CauldronBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const & getItem(int) const;
    /**
     * @symbol  ?getMaxStackSize\@CauldronBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol  ?getName\@CauldronBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol  ?load\@CauldronBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol  ?onChanged\@CauldronBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource &);
    /**
     * @symbol  ?save\@CauldronBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol  ?serverInitItemStackIds\@CauldronBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void (int, class ItemStack const &)>);
    /**
     * @symbol  ?setItem\@CauldronBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const &);
    /**
     * @symbol  ?startOpen\@CauldronBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player &);
    /**
     * @symbol  ?stopOpen\@CauldronBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player &);
    /**
     * @symbol  ?tick\@CauldronBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol  ??0CauldronBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI CauldronBlockActor(class BlockPos const &);
    /**
     * @symbol  ?getColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getColor() const;
    /**
     * @symbol  ?getCustomColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getCustomColor() const;
    /**
     * @symbol  ?getMixDyeColor\@CauldronBlockActor\@\@QEAA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getMixDyeColor();
    /**
     * @symbol  ?getPotionColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getPotionColor() const;
    /**
     * @symbol  ?getPotionType\@CauldronBlockActor\@\@QEBA?AW4PotionType\@Potion\@\@XZ
     */
    MCAPI enum class Potion::PotionType getPotionType() const;
    /**
     * @symbol  ?mixDyes\@CauldronBlockActor\@\@QEAAXXZ
     */
    MCAPI void mixDyes();
    /**
     * @symbol  ?setCustomColor\@CauldronBlockActor\@\@QEAAXAEBVColor\@mce\@\@\@Z
     */
    MCAPI void setCustomColor(class mce::Color const &);
    /**
     * @symbol  ?setPotionType\@CauldronBlockActor\@\@QEAAXW4PotionType\@Potion\@\@\@Z
     */
    MCAPI void setPotionType(enum class Potion::PotionType);
    /**
     * @symbol  ?WATER_COLOR\@CauldronBlockActor\@\@2VColor\@mce\@\@A
     */
    MCAPI static class mce::Color WATER_COLOR;

};