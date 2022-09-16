/**
 * @file  ShulkerBoxBlockActor.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @symbol ?_detectEntityObstruction@ShulkerBoxBlockActor@@MEBA_NAEAVBlockSource@@@Z
     * @hash   -1604034659
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource &) const;
    /**
     * @symbol ?_getUpdatePacket@ShulkerBoxBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     * @hash   657364288
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @symbol ?_onUpdatePacket@ShulkerBoxBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     * @hash   -1535072574
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @symbol ?canPushInItem@ShulkerBoxBlockActor@@UEBA_NAEAVBlockSource@@HHAEBVItemInstance@@@Z
     * @hash   -1925557144
     */
    MCVAPI bool canPushInItem(class BlockSource &, int, int, class ItemInstance const &) const;
    /**
     * @symbol ?getMaxStackSize@ShulkerBoxBlockActor@@UEBAHXZ
     * @hash   -1727482881
     */
    MCVAPI int getMaxStackSize() const;
    /**
     * @symbol ?getName@ShulkerBoxBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   2077748532
     */
    MCVAPI std::string getName() const;
    /**
     * @symbol ?getObstructionAABB@ShulkerBoxBlockActor@@MEBA?AVAABB@@XZ
     * @hash   1904832875
     */
    MCVAPI class AABB getObstructionAABB() const;
    /**
     * @symbol ?load@ShulkerBoxBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     * @hash   -977377730
     */
    MCVAPI void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @symbol ?onPlace@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   1658580732
     */
    MCVAPI void onPlace(class BlockSource &);
    /**
     * @symbol ?playCloseSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
     * @hash   141081696
     */
    MCVAPI void playCloseSound(class BlockSource &);
    /**
     * @symbol ?playOpenSound@ShulkerBoxBlockActor@@MEAAXAEAVBlockSource@@@Z
     * @hash   -436145046
     */
    MCVAPI void playOpenSound(class BlockSource &);
    /**
     * @symbol ?save@ShulkerBoxBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     * @hash   -1708269827
     */
    MCVAPI bool save(class CompoundTag &) const;
    /**
     * @symbol ?tick@ShulkerBoxBlockActor@@UEAAXAEAVBlockSource@@@Z
     * @hash   -1744691801
     */
    MCVAPI void tick(class BlockSource &);
#endif
    /**
     * @symbol ??0ShulkerBoxBlockActor@@QEAA@W4BlockActorType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4BlockActorRendererId@@AEBVBlockPos@@@Z
     * @hash   743728865
     */
    MCAPI ShulkerBoxBlockActor(enum BlockActorType, std::string const &, enum BlockActorRendererId, class BlockPos const &);
    /**
     * @symbol ?setFacingDir@ShulkerBoxBlockActor@@QEAAXE@Z
     * @hash   75680647
     */
    MCAPI void setFacingDir(unsigned char);
    /**
     * @symbol ?itemAllowed@ShulkerBoxBlockActor@@SA_NAEBVItemStackBase@@@Z
     * @hash   -493700793
     */
    MCAPI static bool itemAllowed(class ItemStackBase const &);
    /**
     * @symbol ?itemAllowedInSlot@ShulkerBoxBlockActor@@SA_NHAEBVItemStackBase@@H@Z
     * @hash   -242055851
     */
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const &, int);

//private:
    /**
     * @symbol ?_calculateBB@ShulkerBoxBlockActor@@AEAAXXZ
     * @hash   242262524
     */
    MCAPI void _calculateBB();
    /**
     * @symbol ?_calculateMovementWithCollisions@ShulkerBoxBlockActor@@AEBA?AVVec3@@AEAVBlockSource@@PEAVActor@@@Z
     * @hash   5412282
     */
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource &, class Actor *) const;
    /**
     * @symbol ?_moveCollidedEntities@ShulkerBoxBlockActor@@AEBAXAEAVBlockSource@@@Z
     * @hash   537962087
     */
    MCAPI void _moveCollidedEntities(class BlockSource &) const;

private:
    /**
     * @symbol ?ITEMS_SIZE@ShulkerBoxBlockActor@@0HB
     * @hash   2139764729
     */
    MCAPI static int const ITEMS_SIZE;

};