#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/RandomizableBlockActorFillingContainer.h"
#include "mc/world/level/block/utils/BlockActorRendererId.h"
#include "mc/world/level/block/utils/BlockActorType.h"

class ChestBlockActor : public ::RandomizableBlockActorFillingContainer {
public:
    // prevent constructor by default
    ChestBlockActor& operator=(ChestBlockActor const&);
    ChestBlockActor(ChestBlockActor const&);
    ChestBlockActor();

public:
    // NOLINTBEGIN
    MCVAPI bool _canOpenThis(class BlockSource& region) const;

    MCVAPI bool _detectEntityObstruction(class BlockSource& region) const;

    MCVAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource& region);

    MCVAPI void _onUpdatePacket(class CompoundTag const& data, class BlockSource& region);

    MCVAPI void addContentChangeListener(class ContainerContentChangeListener* listener);

    MCVAPI bool canPullOutItem(int, int, class ItemStack const&) const;

    MCVAPI bool canPushInItem(int, int, class ItemStack const&) const;

    MCVAPI void clearCache();

    MCVAPI int clearInventory(int resizeTo);

    MCVAPI class Container* getContainer();

    MCVAPI class Container const* getContainer() const;

    MCVAPI int getContainerSize() const;

    MCVAPI class BlockActor* getCrackEntity(class BlockSource& region, class BlockPos const& pos);

    MCVAPI void getDebugText(std::vector<std::string>& outputInfo, class BlockPos const& debugPos);

    MCVAPI class ItemStack const& getItem(int slot) const;

    MCVAPI int getMaxStackSize() const;

    MCVAPI std::string getName() const;

    MCVAPI class AABB getObstructionAABB() const;

    MCVAPI void initializeContainerContents(class BlockSource& region);

    MCVAPI void load(class Level& level, class CompoundTag const& base, class DataLoadHelper& dataLoadHelper);

    MCVAPI void loadItems(class CompoundTag const& base, class Level& level);

    MCVAPI void onChanged(class BlockSource& region);

    MCVAPI void onMove();

    MCVAPI void onNeighborChanged(class BlockSource& region, class BlockPos const& position);

    MCVAPI void onPlace(class BlockSource& region);

    MCVAPI void onRemoved(class BlockSource&);

    MCVAPI void openBy(class Player& p);

    MCVAPI void playCloseSound(class BlockSource& region);

    MCVAPI void playOpenSound(class BlockSource& region);

    MCVAPI void removeContentChangeListener(class ContainerContentChangeListener* listener);

    MCVAPI bool save(class CompoundTag& tag) const;

    MCVAPI bool saveItemInstanceData(class CompoundTag& base) const;

    MCVAPI bool saveItems(class CompoundTag& base) const;

    MCVAPI void serverInitItemStackIds(
        int                                              containerSlot,
        int                                              count,
        std::function<void(int, class ItemStack const&)> onNetIdChanged
    );

    MCVAPI void setContainerChanged(int slot);

    MCVAPI void setItem(int slot, class ItemStack const& item);

    MCVAPI void setItemWithForceBalance(int slot, class ItemStack const& item, bool forceBalanced);

    MCVAPI void startOpen(class Player& player);

    MCVAPI void stopOpen(class Player& player);

    MCVAPI void tick(class BlockSource& region);

    MCVAPI void triggerEvent(int b0, int b1);

    MCVAPI ~ChestBlockActor();

    MCAPI ChestBlockActor(
        ::BlockActorType       type,
        std::string const&     id,
        ::BlockActorRendererId renderId,
        class BlockPos const&  pos,
        bool                   isTrapped
    );

    MCAPI bool canOpen(class BlockSource& region) const;

    MCAPI bool canPairWith(class BlockActor* entity, class BlockSource& region);

    MCAPI void forceCloseChest(class BlockSource& region);

    MCAPI int getOpenCount() const;

    MCAPI float getOpenness() const;

    MCAPI class BlockPos const& getPairedChestPosition();

    MCAPI bool isFindable() const;

    MCAPI bool isLargeChest() const;

    MCAPI void onMove(class BlockSource& region, class BlockPos const& from, class BlockPos const& to);

    MCAPI void pairWith(class ChestBlockActor* chest, bool lead);

    MCAPI void setFindable(bool isFindable);

    MCAPI void unpair(class BlockSource& region);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _getCenter(float& outx, float& outy, float& outz);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _closeChest(class BlockSource& region, class Player* player);

    MCAPI bool _saveClientSideState(class CompoundTag& tag) const;

    MCAPI void _tryToPairWith(class BlockSource& region, class BlockPos const& position);

    MCAPI void _unpair();

    // NOLINTEND
};
