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
    CauldronBlockActor& operator=(CauldronBlockActor const&);
    CauldronBlockActor(CauldronBlockActor const&);
    CauldronBlockActor();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_getUpdatePacket@CauldronBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    // symbol: ?_onUpdatePacket@CauldronBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    // symbol: ?getContainer@CauldronBlockActor@@UEAAPEAVContainer@@XZ
    MCVAPI class Container* getContainer();

    // symbol: ?getContainer@CauldronBlockActor@@UEBAPEBVContainer@@XZ
    MCVAPI class Container const* getContainer() const;

    // symbol: ?getContainerSize@CauldronBlockActor@@UEBAHXZ
    MCVAPI int getContainerSize() const;

    // symbol: ?getItem@CauldronBlockActor@@UEBAAEBVItemStack@@H@Z
    MCVAPI class ItemStack const& getItem(int slot) const;

    // symbol: ?getMaxStackSize@CauldronBlockActor@@UEBAHXZ
    MCVAPI int getMaxStackSize() const;

    // symbol: ?getName@CauldronBlockActor@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCVAPI std::string getName() const;

    // symbol: ?load@CauldronBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    // symbol: ?onChanged@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void onChanged(class BlockSource& region);

    // symbol: ?save@CauldronBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    MCVAPI bool save(class CompoundTag& tag) const;

    // symbol: ?serverInitItemStackIds@CauldronBlockActor@@UEAAXHHV?$function@$$A6AXHAEBVItemStack@@@Z@std@@@Z
    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    // symbol: ?setItem@CauldronBlockActor@@UEAAXHAEBVItemStack@@@Z
    MCVAPI void setItem(int slot, class ItemStack const& item);

    // symbol: ?startOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void startOpen(class Player&);

    // symbol: ?stopOpen@CauldronBlockActor@@UEAAXAEAVPlayer@@@Z
    MCVAPI void stopOpen(class Player&);

    // symbol: ?tick@CauldronBlockActor@@UEAAXAEAVBlockSource@@@Z
    MCVAPI void tick(class BlockSource& region);

    // symbol: ?getColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
    MCAPI class mce::Color getColor() const;

    // symbol: ?getCustomColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
    MCAPI class mce::Color getCustomColor() const;

    // symbol: ?getMixDyeColor@CauldronBlockActor@@QEAA?AVColor@mce@@XZ
    MCAPI class mce::Color getMixDyeColor();

    // symbol: ?getPotionColor@CauldronBlockActor@@QEBA?AVColor@mce@@XZ
    MCAPI class mce::Color getPotionColor() const;

    // symbol: ?getPotionType@CauldronBlockActor@@QEBA?AW4PotionType@Potion@@XZ
    MCAPI ::Potion::PotionType getPotionType() const;

    // symbol: ?mixDyes@CauldronBlockActor@@QEAAXXZ
    MCAPI void mixDyes();

    // symbol: ?setCustomColor@CauldronBlockActor@@QEAAXAEBVColor@mce@@@Z
    MCAPI void setCustomColor(class mce::Color const& color);

    // symbol: ?setPotionType@CauldronBlockActor@@QEAAXW4PotionType@Potion@@@Z
    MCAPI void setPotionType(::Potion::PotionType type);

    // symbol: ?WATER_COLOR@CauldronBlockActor@@2VColor@mce@@A
    MCAPI static class mce::Color WATER_COLOR;

    // NOLINTEND
};
