#pragma once

#include <memory>
#include <string>
#include <vector>

#include "../Math/Vec3.h"
#include "../dll.h"
#include "BlockActorType.h"

#include <modutils.h>

class BlockActor {
    char unknown[200];

private:
    MCAPI static std::map<std::string, BlockActorType, std::less<std::string>> const mIdClassMap;

public:
    BUILD_ACCESS_MUT(class Block, Block, 16);
    BUILD_ACCESS_MUT(unsigned int, RepairCost_, 40);
    BUILD_ACCESS_MUT(Vec3, BlockPos, 21);
    BUILD_ACCESS_MUT(class AABB, AABB, 56);
    BUILD_ACCESS_MUT(enum class BlockActorType, Type, 84);
    BUILD_ACCESS_MUT(std::string, CustomName_, 96);
    BUILD_ACCESS_MUT(bool, Movable, 165);

    MCAPI BlockActor(enum BlockActorType, class BlockPos const&, std::string const&);

    virtual ~BlockActor();
    virtual void                    load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    virtual bool                    save(class CompoundTag&) const;
    virtual bool                    saveItemInstanceData(class CompoundTag&);
    virtual void                    saveBlockData(class CompoundTag&, class BlockSource&) const;
    virtual void                    loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);
    virtual void                    onCustomTagLoadDone(class BlockSource&);
    virtual void                    tick(class BlockSource&);
    virtual void                    onChanged(class BlockSource&);
    virtual bool                    isMovable(class BlockSource&);
    virtual bool                    isCustomNameSaved();
    virtual void                    onPlace(class BlockSource&);
    virtual void                    onMove();
    virtual void                    onRemoved(class BlockSource&);
    virtual void                    triggerEvent(int, int);
    virtual void                    clearCache();
    virtual void                    onNeighborChanged(class BlockSource&, class BlockPos const&);
    virtual float                   getShadowRadius(class BlockSource&) const;
    virtual bool                    hasAlphaLayer() const;
    virtual class BlockActor*       getCrackEntity(class BlockSource&, class BlockPos const&);
    virtual void                    getDebugText(std::vector<std::string>&, class BlockPos const&);
    virtual std::string const&      getCustomName() const;
    virtual std::string const&      getFilteredCustomName(class UIProfanityContext const&);
    virtual std::string             getName() const;
    virtual void                    setCustomName(std::string const&);
    virtual std::string             getImmersiveReaderText(class BlockSource&);
    virtual int                     getRepairCost() const;
    virtual class PistonBlockActor* getOwningPiston(class BlockSource&);
    virtual class Container*        getContainer();
    virtual class Container const*  getContainer() const;
    virtual float                   getDeletionDelayTimeSeconds() const;
    virtual void                    onChunkLoaded(class LevelChunk&);
    virtual void                    onChunkUnloaded(class LevelChunk&);
    virtual void                    fixupOnLoad(class LevelChunk&);

    static std::map<std::string, BlockActorType, std::less<std::string>> getIdMap() {
        return mIdClassMap;
    }

protected:
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    virtual void                                        _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    virtual bool                                        _playerCanUpdate(class Player const&) const;
};

static_assert(sizeof(BlockActor) == 208);