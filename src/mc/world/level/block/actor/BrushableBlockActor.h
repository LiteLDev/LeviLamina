#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorContainer.h"

class BrushableBlockActor : public ::RandomizableBlockActorContainer {
public:
    // BrushableBlockActor inner types define
    enum class BrushingState {};

    enum class Placement {};

public:
    // prevent constructor by default
    BrushableBlockActor& operator=(BrushableBlockActor const&);
    BrushableBlockActor(BrushableBlockActor const&);
    BrushableBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI int getContainerSize() const;

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCVAPI void onChanged(class BlockSource& region);

    MCVAPI void onRemoved(class BlockSource& region);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void stopOpen(class Player&);

    MCAPI BrushableBlockActor(
        class HashedString const&        name,
        class BlockPos const&            pos,
        ::BrushableBlockActor::Placement placement
    );

    MCAPI ::BrushableBlockActor::BrushingState brush(class BlockSource& region, class BlockPos const& pos, uchar face);

    MCAPI void update(class BlockSource& region, class BlockPos const& pos);

    MCAPI static std::string getLootTableFromVariant(::BrushableBlockActor::Placement state);

    MCAPI static class BrushableBlockActor* tryGet(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _brushingCompleted(class BlockSource& region);

    MCAPI void _removeDisplayEntity(class BlockSource& region);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftableForContainer();

    MCAPI static void** $vftableForRandomizableBlockActorContainerBase();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const& data, class BlockSource& region);

    MCAPI int getContainerSize$() const;

    MCAPI class ItemStack const& getItem$(int slot) const;

    MCAPI int getMaxStackSize$() const;

    MCAPI void load$(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    MCAPI void onChanged$(class BlockSource& region);

    MCAPI void onRemoved$(class BlockSource& region);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void serverInitItemStackIds$(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCAPI void setItem$(int slot, class ItemStack const& item);

    MCAPI void stopOpen$(class Player&);

    // NOLINTEND
};
