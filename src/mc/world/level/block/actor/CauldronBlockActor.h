#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/alchemy/Potion.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CauldronBlockActor {

public:
    // prevent constructor by default
    CauldronBlockActor& operator=(CauldronBlockActor const&) = delete;
    CauldronBlockActor(CauldronBlockActor const&)            = delete;
    CauldronBlockActor()                                     = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CAULDRONBLOCKACTOR
    /**
     * @symbol
     * ?_getUpdatePacket\@CauldronBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @symbol ?_onUpdatePacket\@CauldronBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    MCVAPI void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ?getContainer\@CauldronBlockActor\@\@UEAAPEAVContainer\@\@XZ
     */
    MCVAPI class Container* getContainer(); // NOLINT
    /**
     * @symbol ?getContainer\@CauldronBlockActor\@\@UEBAPEBVContainer\@\@XZ
     */
    MCVAPI class Container const* getContainer() const; // NOLINT
    /**
     * @symbol ?getContainerSize\@CauldronBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getContainerSize() const; // NOLINT
    /**
     * @symbol ?getItem\@CauldronBlockActor\@\@UEBAAEBVItemStack\@\@H\@Z
     */
    MCVAPI class ItemStack const& getItem(int) const; // NOLINT
    /**
     * @symbol ?getMaxStackSize\@CauldronBlockActor\@\@UEBAHXZ
     */
    MCVAPI int getMaxStackSize() const; // NOLINT
    /**
     * @symbol
     * ?getName\@CauldronBlockActor\@\@UEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCVAPI std::string getName() const; // NOLINT
    /**
     * @symbol ?load\@CauldronBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    MCVAPI void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @symbol ?onChanged\@CauldronBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void onChanged(class BlockSource&); // NOLINT
    /**
     * @symbol ?save\@CauldronBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    MCVAPI bool save(class CompoundTag&) const; // NOLINT
    /**
     * @symbol
     * ?serverInitItemStackIds\@CauldronBlockActor\@\@UEAAXHHV?$function\@$$A6AXHAEBVItemStack\@\@\@Z\@std\@\@\@Z
     */
    MCVAPI void serverInitItemStackIds(int, int, class std::function<void(int, class ItemStack const&)>); // NOLINT
    /**
     * @symbol ?setItem\@CauldronBlockActor\@\@UEAAXHAEBVItemStack\@\@\@Z
     */
    MCVAPI void setItem(int, class ItemStack const&); // NOLINT
    /**
     * @symbol ?startOpen\@CauldronBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void startOpen(class Player&); // NOLINT
    /**
     * @symbol ?stopOpen\@CauldronBlockActor\@\@UEAAXAEAVPlayer\@\@\@Z
     */
    MCVAPI void stopOpen(class Player&); // NOLINT
    /**
     * @symbol ?tick\@CauldronBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    MCVAPI void tick(class BlockSource&); // NOLINT
#endif
    /**
     * @symbol ?getColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getColor() const; // NOLINT
    /**
     * @symbol ?getCustomColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getCustomColor() const; // NOLINT
    /**
     * @symbol ?getMixDyeColor\@CauldronBlockActor\@\@QEAA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getMixDyeColor(); // NOLINT
    /**
     * @symbol ?getPotionColor\@CauldronBlockActor\@\@QEBA?AVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color getPotionColor() const; // NOLINT
    /**
     * @symbol ?getPotionType\@CauldronBlockActor\@\@QEBA?AW4PotionType\@Potion\@\@XZ
     */
    MCAPI enum class Potion::PotionType getPotionType() const; // NOLINT
    /**
     * @symbol ?mixDyes\@CauldronBlockActor\@\@QEAAXXZ
     */
    MCAPI void mixDyes(); // NOLINT
    /**
     * @symbol ?setCustomColor\@CauldronBlockActor\@\@QEAAXAEBVColor\@mce\@\@\@Z
     */
    MCAPI void setCustomColor(class mce::Color const&); // NOLINT
    /**
     * @symbol ?setPotionType\@CauldronBlockActor\@\@QEAAXW4PotionType\@Potion\@\@\@Z
     */
    MCAPI void setPotionType(enum class Potion::PotionType); // NOLINT
    /**
     * @symbol ?WATER_COLOR\@CauldronBlockActor\@\@2VColor\@mce\@\@A
     */
    MCAPI static class mce::Color WATER_COLOR; // NOLINT
};
