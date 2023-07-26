#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ShulkerBoxBlockActor {

public:
    // prevent constructor by default
    ShulkerBoxBlockActor& operator=(ShulkerBoxBlockActor const&) = delete;
    ShulkerBoxBlockActor(ShulkerBoxBlockActor const&)            = delete;
    ShulkerBoxBlockActor()                                       = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SHULKERBOXBLOCKACTOR
    /**
     * @symbol ?_detectEntityObstruction\@ShulkerBoxBlockActor\@\@MEBA_NAEAVBlockSource\@\@\@Z
     */
    MCVAPI bool _detectEntityObstruction(class BlockSource&) const; // NOLINT
    /**
     * @symbol
     * ?_getUpdatePacket\@ShulkerBoxBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@ShulkerBoxBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?canPushInItem\@ShulkerBoxBlockActor\@\@UEBA_NHHAEBVItemStack\@\@\@Z
     */
    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@ShulkerBoxBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@ShulkerBoxBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?getObstructionAABB\@ShulkerBoxBlockActor\@\@MEBA?AVAABB\@\@XZ
     */
    MCVAPI class AABB getObstructionAABB() const; // NOLINT
    /**
     * @symbol ?load\@ShulkerBoxBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onPlace\@ShulkerBoxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onPlace(class BlockSource&); // NOLINT
    /**
     * @symbol ?playCloseSound\@ShulkerBoxBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playCloseSound(class BlockSource&); // NOLINT
    /**
     * @symbol ?playOpenSound\@ShulkerBoxBlockActor\@\@MEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void playOpenSound(class BlockSource&); // NOLINT
    /**
     * @symbol ?save\@ShulkerBoxBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol ?tick\@ShulkerBoxBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
#endif
    /**
     * @symbol
     * ??0ShulkerBoxBlockActor\@\@QEAA\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4BlockActorRendererId\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI
    ShulkerBoxBlockActor(enum class BlockActorType, std::string const&, enum class BlockActorRendererId, class BlockPos const&); // NOLINT
    /**
     * @symbol ?setFacingDir\@ShulkerBoxBlockActor\@\@QEAAXE\@Z
     */
    MCAPI void setFacingDir(unsigned char); // NOLINT
    /**
     * @symbol ?itemAllowedInSlot\@ShulkerBoxBlockActor\@\@SA_NHAEBVItemStackBase\@\@H\@Z
     */
    MCAPI static bool itemAllowedInSlot(int, class ItemStackBase const&, int); // NOLINT

    // private:
    /**
     * @symbol ?_calculateBB\@ShulkerBoxBlockActor\@\@AEAAXXZ
     */
    MCAPI void _calculateBB(); // NOLINT
    /**
     * @symbol
     * ?_calculateMovementWithCollisions\@ShulkerBoxBlockActor\@\@AEBA?AVVec3\@\@AEAVBlockSource\@\@PEAVActor\@\@\@Z
     */
    MCAPI class Vec3 _calculateMovementWithCollisions(class BlockSource&, class Actor*) const; // NOLINT

private:
    /**
     * @symbol ?ITEMS_SIZE\@ShulkerBoxBlockActor\@\@0HB
     */
    MCAPI static int const ITEMS_SIZE; // NOLINT
};
