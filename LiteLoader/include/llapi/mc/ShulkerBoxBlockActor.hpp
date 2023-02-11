/**
 * @file  ShulkerBoxBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ShulkerBoxBlockActor.
 *
 */
class ShulkerBoxBlockActor {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SHULKERBOXBLOCKACTOR
public:
    class ShulkerBoxBlockActor& operator=(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor(class ShulkerBoxBlockActor const &) = delete;
    ShulkerBoxBlockActor() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXBLOCKACTOR
    /**
     * @hash   -1503414115
     * @symbol  ?_detectEntityObstruction\@ShulkerBoxBlockActor\@\@MEBA_NAEAVBlockSource\@\@\@Z
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    /**
     * @hash   861004032
     * @symbol  ?_getUpdatePacket\@ShulkerBoxBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -664683342
     * @symbol  ?_onUpdatePacket\@ShulkerBoxBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1876665791
     * @symbol  ?canPushInItem\@ShulkerBoxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const &) const;
    /**
     * @hash   -1621542241
     * @symbol  ?getMaxStackSize\@ShulkerBoxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   -1515135228
     * @symbol  ?getName\@ShulkerBoxBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   -1688050885
     * @symbol  ?getObstructionAABB\@ShulkerBoxBlockActor\@\@MEBA?AVAABB\@\@XZ
     */
    MCVAPI class AABB getObstructionAABB() const;
    /**
     * @hash   -275294194
     * @symbol  ?load\@ShulkerBoxBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1750467708
     * @symbol  ?onPlace\@ShulkerBoxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onPlace(class BlockSource &);
    /**
     * @hash   843165232
     * @symbol  ?playCloseSound\@ShulkerBoxBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @hash   265938490
     * @symbol  ?playOpenSound\@ShulkerBoxBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playOpenSound(class BlockSource &);
    /**
     * @hash   -1006186291
     * @symbol  ?save\@ShulkerBoxBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -1042623641
     * @symbol  ?tick\@ShulkerBoxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   1445766273
     * @symbol  ??0ShulkerBoxBlockActor\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorRendererId\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ShulkerBoxBlockActor(enum class BlockActorType, std::string const &, enum class BlockActorRendererId, class BlockPos const &);
    /**
     * @hash   777748807
     * @symbol  ?setFacingDir\@ShulkerBoxBlockActor\@\@QEAAXE\@Z
     */
    MCAPI void setFacingDir(unsigned char);
    /**
     * @hash   208382743
     * @symbol  ?itemAllowed\@ShulkerBoxBlockActor\@\@SA_NAEBVItemStackBase\@\@\@Z
     */
    MCAPI static bool itemAllowed(class ItemStackBase const &);
    /**
     * @hash   460027685
     * @symbol  ?itemAllowedInSlot\@ShulkerBoxBlockActor\@\@SA_NHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const &, int);

//private:
    /**
     * @hash   944299932
     * @symbol  ?_calculateBB\@ShulkerBoxBlockActor\@\@AEAAXXZ
     */
    MCAPI void _calculateBB();
    /**
     * @hash   707449690
     * @symbol  ?_calculateMovementWithCollisions\@ShulkerBoxBlockActor\@\@AEBA?AVVec3\@\@AEAVBlockSource\@\@PEAVActor\@\@\@Z
     */
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource &, class Actor *) const;
    /**
     * @hash   1240014871
     * @symbol  ?_moveCollidedEntities\@ShulkerBoxBlockActor\@\@AEBAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void _moveCollidedEntities(class BlockSource &) const;

private:
    /**
     * @hash   -1107474239
     * @symbol  ?ITEMS_SIZE\@ShulkerBoxBlockActor\@\@0HB
     */
    MCAPI static int const ITEMS_SIZE;

};