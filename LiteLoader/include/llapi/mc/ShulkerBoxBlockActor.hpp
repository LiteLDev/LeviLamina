/**
 * @file  ShulkerBoxBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1604034659
     * @symbol ?_detectEntityObstruction@ShulkerBoxBlockActor@@MEBA_NAEAVBlockSource@@@Z
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    /**
     * @hash   657364288
     * @symbol ?_getUpdatePacket@ShulkerBoxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   -1535072574
     * @symbol ?_onUpdatePacket@ShulkerBoxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1925557144
     * @symbol ?canPushInItem@ShulkerBoxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @hash   -1727482881
     * @symbol ?getMaxStackSize@ShulkerBoxBlockActor@@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @hash   2077748532
     * @symbol ?getName@ShulkerBoxBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string getName() const;
    /**
     * @hash   1904832875
     * @symbol ?getObstructionAABB@ShulkerBoxBlockActor@@MEBA?AVAABB@@XZ
     */
    MCVAPI class AABB getObstructionAABB() const;
    /**
     * @hash   -977377730
     * @symbol ?load@ShulkerBoxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   1658580732
     * @symbol ?onPlace@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void onPlace(class BlockSource &);
    /**
     * @hash   141081696
     * @symbol ?playCloseSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @hash   -436145046
     * @symbol ?playOpenSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void playOpenSound(class BlockSource &);
    /**
     * @hash   -1708269827
     * @symbol ?save@ShulkerBoxBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @hash   -1744691801
     * @symbol ?tick@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @hash   743728865
     * @symbol ??0ShulkerBoxBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@@Z
     */
    MCAPI ShulkerBoxBlockActor(enum BlockActorType, std::string const &, enum BlockActorRendererId, class BlockPos const &);
    /**
     * @hash   75680647
     * @symbol ?setFacingDir@ShulkerBoxBlockActor@@QEAAXE@Z
     */
    MCAPI void setFacingDir(unsigned char);
    /**
     * @hash   -493700793
     * @symbol ?itemAllowed@ShulkerBoxBlockActor@@SA_NAEBVItemStackBase@@@Z
     */
    MCAPI static bool itemAllowed(class ItemStackBase const &);
    /**
     * @hash   -242055851
     * @symbol ?itemAllowedInSlot@ShulkerBoxBlockActor@@SA_NHAEBVItemStackBase@@H@Z
     */
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const &, int);

//private:
    /**
     * @hash   242262524
     * @symbol ?_calculateBB@ShulkerBoxBlockActor@@AEAAXXZ
     */
    MCAPI void _calculateBB();
    /**
     * @hash   5412282
     * @symbol ?_calculateMovementWithCollisions@ShulkerBoxBlockActor@@AEBA?AVVec3@@AEAVBlockSource@@PEAVActor@@@Z
     */
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource &, class Actor *) const;
    /**
     * @hash   537962087
     * @symbol ?_moveCollidedEntities@ShulkerBoxBlockActor@@AEBAXAEAVBlockSource@@@Z
     */
    MCAPI void _moveCollidedEntities(class BlockSource &) const;

private:
    /**
     * @hash   2139764729
     * @symbol ?ITEMS_SIZE@ShulkerBoxBlockActor@@0HB
     */
    MCAPI static int const ITEMS_SIZE;

};