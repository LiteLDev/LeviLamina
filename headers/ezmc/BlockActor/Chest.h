#pragma once

#include "../Container/RandomizableBlockActorFillingContainer.h"

class ChestBlockActor : public RandomizableBlockActorFillingContainer {
    char pad[144];

public:
    using BlockActor::setCustomName;

    MCAPI ChestBlockActor(enum BlockActorType, std::string const&, enum BlockActorRendererId, class BlockPos const&, bool);

    virtual ~ChestBlockActor();
    virtual void              load(Level&, CompoundTag const&, DataLoadHelper&) override;
    virtual bool              save(CompoundTag&) const override;
    virtual bool              saveItemInstanceData(CompoundTag&) override;
    virtual void              tick(BlockSource&) override;
    virtual void              onChanged(BlockSource&) override;
    virtual void              onPlace(BlockSource&) override;
    virtual void              onMove(void) override;
    virtual void              onRemoved(BlockSource&) override;
    virtual void              triggerEvent(int, int) override;
    virtual void              clearCache(void) override;
    virtual void              onNeighborChanged(BlockSource&, class BlockPos const&) override;
    virtual class BlockActor* getCrackEntity(BlockSource&, class BlockPos const&) override;
    virtual void              getDebugText(std::vector<std::string>&, class BlockPos const&) override;
    virtual std::string       getName(void) const override;
    virtual Container*        getContainer(void) override;
    virtual Container const*  getContainer(void) const override;

    virtual void                   setContainerChanged(int) override;
    virtual void                   startOpen(Player&) override;
    virtual void                   initializeContainerContents(BlockSource&) override;
    virtual int                    getContainerSize(void) const override;
    virtual int                    getMaxStackSize(void) const override;
    virtual class ItemStack const& getItem(int) const override;
    virtual void                   setItem(int, ItemStack const&) override;
    virtual void                   serverInitItemStackIds(int, int, std::function<void(int, ItemStack const&)>) override;

    virtual void loadItems(CompoundTag const&, Level&);
    virtual bool saveItems(CompoundTag&) const;
    virtual void stopOpen(Player&) override;
    virtual int  clearInventory(int) override;
    virtual bool canPushInItem(BlockSource&, int, int, ItemInstance const&) const override;
    virtual bool canPullOutItem(BlockSource&, int, int, ItemInstance const&) const override;
    virtual void addContentChangeListener(ContainerContentChangeListener*) override;
    virtual void removeContentChangeListener(ContainerContentChangeListener*) override;

protected:
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(BlockSource&) override;
    virtual void                                        _onUpdatePacket(CompoundTag const&, BlockSource&) override;
    virtual void                                        playOpenSound(class BlockSource&);
    virtual void                                        playCloseSound(class BlockSource&);
    bool                                                _canOpenThis(class BlockSource&) const;
    virtual class AABB                                  getObstructionAABB(void) const;
    bool                                                _detectEntityObstruction(class BlockSource&) const;
};

static_assert(sizeof(ChestBlockActor) == 648);