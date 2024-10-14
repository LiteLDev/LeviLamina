#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActorType.h"

class BlockActor {
public:
    // prevent constructor by default
    BlockActor& operator=(BlockActor const&);
    BlockActor(BlockActor const&);
    BlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockActor();

    // vIndex: 1
    virtual void load(class Level&, class CompoundTag const& tag, class DataLoadHelper&);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 3
    virtual bool saveItemInstanceData(class CompoundTag& tag) const;

    // vIndex: 4
    virtual void saveBlockData(class CompoundTag&, class BlockSource&) const;

    // vIndex: 5
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);

    // vIndex: 6
    virtual void onCustomTagLoadDone(class BlockSource&);

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 8
    virtual void onChanged(class BlockSource&);

    // vIndex: 9
    virtual bool isMovable(class BlockSource&);

    // vIndex: 10
    virtual bool isCustomNameSaved();

    // vIndex: 11
    virtual void onPlace(class BlockSource&);

    // vIndex: 12
    virtual void onMove();

    // vIndex: 13
    virtual void onRemoved(class BlockSource&);

    // vIndex: 14
    virtual bool isPreserved(class BlockSource&) const;

    // vIndex: 15
    virtual bool shouldPreserve(class BlockSource&);

    // vIndex: 16
    virtual void triggerEvent(int, int);

    // vIndex: 17
    virtual void clearCache();

    // vIndex: 18
    virtual void onNeighborChanged(class BlockSource&, class BlockPos const&);

    // vIndex: 19
    virtual float getShadowRadius(class BlockSource&) const;

    // vIndex: 20
    virtual bool hasAlphaLayer() const;

    // vIndex: 21
    virtual class BlockActor* getCrackEntity(class BlockSource&, class BlockPos const&);

    // vIndex: 22
    virtual class AABB getCollisionShape(class IConstBlockSource const&) const;

    // vIndex: 23
    virtual void getDebugText(std::vector<std::string>& outputInfo, class BlockPos const& debugPos);

    // vIndex: 24
    virtual std::string const& getCustomName() const;

    // vIndex: 25
    virtual std::string const&
    getFilteredCustomName(Bedrock::NotNullNonOwnerPtr<class UIProfanityContext> const& context);

    // vIndex: 26
    virtual std::string getName() const;

    // vIndex: 27
    virtual void setCustomName(std::string const& name);

    // vIndex: 28
    virtual std::string getImmersiveReaderText(class BlockSource&);

    // vIndex: 29
    virtual int getRepairCost() const;

    // vIndex: 30
    virtual class PistonBlockActor const* getOwningPiston(class BlockSource&) const;

    // vIndex: 31
    virtual class PistonBlockActor* getOwningPiston(class BlockSource&);

    // vIndex: 32
    virtual class Container const* getContainer() const;

    // vIndex: 33
    virtual class Container* getContainer();

    // vIndex: 34
    virtual void eraseLootTable();

    // vIndex: 35
    virtual void onChunkLoaded(class LevelChunk&);

    // vIndex: 36
    virtual void onChunkUnloaded(class LevelChunk&);

    // vIndex: 37
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;

    // vIndex: 38
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const;

    // vIndex: 39
    virtual void fixupOnLoad(class LevelChunk&);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // vIndex: 42
    virtual bool _playerCanUpdate(class Player const&) const;

    MCAPI BlockActor(::BlockActorType type, class BlockPos const& pos, std::string const&);

    MCAPI class AABB const& getAABB() const;

    MCAPI class BlockPos const& getPosition() const;

    MCAPI std::unique_ptr<class BlockActorDataPacket> getServerUpdatePacket(class BlockSource& region);

    MCAPI ::BlockActorType const& getType() const;

    MCAPI bool isChanged() const;

    MCAPI bool isType(::BlockActorType type) const;

    MCAPI void moveTo(class BlockPos const& newPos);

    MCAPI bool onUpdatePacket(class CompoundTag const& data, class BlockSource& region, class Player const* fromPlayer);

    MCAPI void setChanged();

    MCAPI void setCustomNameSaved(bool saveCustomName);

    MCAPI void setMovable(bool canMove);

    MCAPI static bool isType(class BlockActor& te, ::BlockActorType type);

    MCAPI static std::shared_ptr<class BlockActor>
    loadStatic(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _resetAABB();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::map<std::string, ::BlockActorType> _createIdClassMap();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket$(class BlockSource&);

    MCAPI void _onUpdatePacket$(class CompoundTag const&, class BlockSource&);

    MCAPI bool _playerCanUpdate$(class Player const&) const;

    MCAPI void clearCache$();

    MCAPI void eraseLootTable$();

    MCAPI void fixupOnLoad$(class LevelChunk&);

    MCAPI class AABB getCollisionShape$(class IConstBlockSource const&) const;

    MCAPI class Container const* getContainer$() const;

    MCAPI class Container* getContainer$();

    MCAPI class BlockActor* getCrackEntity$(class BlockSource&, class BlockPos const&);

    MCAPI std::string const& getCustomName$() const;

    MCAPI void getDebugText$(std::vector<std::string>& outputInfo, class BlockPos const& debugPos);

    MCAPI std::string const& getFilteredCustomName$(Bedrock::NotNullNonOwnerPtr<class UIProfanityContext> const& context
    );

    MCAPI std::string getImmersiveReaderText$(class BlockSource&);

    MCAPI std::string getName$() const;

    MCAPI class PistonBlockActor const* getOwningPiston$(class BlockSource&) const;

    MCAPI class PistonBlockActor* getOwningPiston$(class BlockSource&);

    MCAPI int getRepairCost$() const;

    MCAPI float getShadowRadius$(class BlockSource&) const;

    MCAPI std::vector<std::string> getUgcStrings$(class CompoundTag const&) const;

    MCAPI bool hasAlphaLayer$() const;

    MCAPI bool isCustomNameSaved$();

    MCAPI bool isMovable$(class BlockSource&);

    MCAPI bool isPreserved$(class BlockSource&) const;

    MCAPI void load$(class Level&, class CompoundTag const& tag, class DataLoadHelper&);

    MCAPI void loadBlockData$(class CompoundTag const&, class BlockSource&, class DataLoadHelper&);

    MCAPI void onChanged$(class BlockSource&);

    MCAPI void onChunkLoaded$(class LevelChunk&);

    MCAPI void onChunkUnloaded$(class LevelChunk&);

    MCAPI void onCustomTagLoadDone$(class BlockSource&);

    MCAPI void onMove$();

    MCAPI void onNeighborChanged$(class BlockSource&, class BlockPos const&);

    MCAPI void onPlace$(class BlockSource&);

    MCAPI void onRemoved$(class BlockSource&);

    MCAPI bool save$(class CompoundTag& tag) const;

    MCAPI void saveBlockData$(class CompoundTag&, class BlockSource&) const;

    MCAPI bool saveItemInstanceData$(class CompoundTag& tag) const;

    MCAPI void setCustomName$(std::string const& name);

    MCAPI void setUgcStrings$(class CompoundTag&, std::vector<std::string> const&) const;

    MCAPI bool shouldPreserve$(class BlockSource&);

    MCAPI void tick$(class BlockSource& region);

    MCAPI void triggerEvent$(int, int);

    MCAPI static std::map<::BlockActorType, std::string> const& mClassIdMap();

    MCAPI static std::map<std::string, ::BlockActorType> const& mIdClassMap();

    // NOLINTEND
};
