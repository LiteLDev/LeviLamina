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
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onChanged(class BlockSource& region);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void startOpen(class Player&);

    MCVAPI void stopOpen(class Player&);

    MCVAPI void tick(class BlockSource& region);

    MCAPI class mce::Color getColor() const;

    MCAPI class mce::Color getCustomColor() const;

    MCAPI class mce::Color getMixDyeColor();

    MCAPI class mce::Color getPotionColor() const;

    MCAPI ::Potion::PotionType getPotionType() const;

    MCAPI void mixDyes();

    MCAPI void setCustomColor(class mce::Color const& color);

    MCAPI void setPotionType(::Potion::PotionType type);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftableForBlockActor();

    MCAPI static void** vftableForContainer();

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI class Container* getContainer$();

    MCAPI class Container const* getContainer$() const;

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI std::string getName$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void startOpen$(class Player&);

    MCAPI void stopOpen$(class Player&);

    MCAPI void tick$(class BlockSource& region);

    MCAPI static class mce::Color& WATER_COLOR();

    // NOLINTEND
};
