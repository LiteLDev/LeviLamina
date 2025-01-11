#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActorTerrainInterlockData;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class IConstBlockSource;
class Level;
class LevelChunk;
class PistonBlockActor;
class Player;
class SaveContext;
class UIProfanityContext;
class Vec3;
// clang-format on

class BlockActor {
public:
    // BlockActor inner types define
    using MapIdType = ::std::map<::std::string, ::BlockActorType>;

    using MapTypeId = ::std::map<::BlockActorType, ::std::string>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mTickCount;
    ::ll::TypedStorage<8, 8, ::Block const*>               mBlock;
    ::ll::TypedStorage<4, 4, float>                        mDestroyTimer;
    ::ll::TypedStorage<4, 12, ::Vec3>                      mDestroyDirection;
    ::ll::TypedStorage<4, 4, float>                        mDestroyProgress;
    ::ll::TypedStorage<4, 12, ::BlockPos>                  mPosition;
    ::ll::TypedStorage<4, 24, ::AABB>                      mBB;
    ::ll::TypedStorage<4, 4, ::BlockActorType const>       mType;
    ::ll::TypedStorage<4, 4, ::BlockActorRendererId>       mRendererId;
    ::ll::TypedStorage<8, 32, ::std::string>               mCustomName;
    ::ll::TypedStorage<8, 32, ::std::string>               mFilteredCustomName;
    ::ll::TypedStorage<4, 4, int>                          mRepairCost;
    ::ll::TypedStorage<1, 1, bool>                         mClientSideOnly;
    ::ll::TypedStorage<1, 1, bool>                         mIsMovable;
    ::ll::TypedStorage<1, 1, bool>                         mSaveCustomName;
    ::ll::TypedStorage<1, 1, bool>                         mCanRenderCustomName;
    ::ll::TypedStorage<4, 4, float const>                  signShadowRadius;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData> mTerrainInterlockData;
    ::ll::TypedStorage<1, 1, bool>                         mChanged;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockActor();

    // vIndex: 1
    virtual void load(::Level&, ::CompoundTag const& tag, ::DataLoadHelper&);

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const;

    // vIndex: 3
    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    // vIndex: 4
    virtual void saveBlockData(::CompoundTag&, ::BlockSource&) const;

    // vIndex: 5
    virtual void loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    // vIndex: 6
    virtual void onCustomTagLoadDone(::BlockSource&);

    // vIndex: 7
    virtual void tick(::BlockSource& region);

    // vIndex: 8
    virtual void onChanged(::BlockSource&);

    // vIndex: 9
    virtual bool isMovable(::BlockSource&);

    // vIndex: 10
    virtual bool isCustomNameSaved();

    // vIndex: 11
    virtual void onPlace(::BlockSource&);

    // vIndex: 12
    virtual void onMove();

    // vIndex: 13
    virtual void onRemoved(::BlockSource&);

    // vIndex: 14
    virtual bool isPreserved(::BlockSource&) const;

    // vIndex: 15
    virtual bool shouldPreserve(::BlockSource&);

    // vIndex: 16
    virtual void triggerEvent(int, int);

    // vIndex: 17
    virtual void clearCache();

    // vIndex: 18
    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);

    // vIndex: 19
    virtual float getShadowRadius(::BlockSource&) const;

    // vIndex: 20
    virtual bool hasAlphaLayer() const;

    // vIndex: 21
    virtual ::BlockActor* getCrackEntity(::BlockSource&, ::BlockPos const&);

    // vIndex: 22
    virtual ::AABB getCollisionShape(::IConstBlockSource const&) const;

    // vIndex: 23
    virtual void getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos);

    // vIndex: 24
    virtual ::std::string const& getCustomName() const;

    // vIndex: 25
    virtual ::std::string const&
    getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> const& context);

    // vIndex: 26
    virtual ::std::string getName() const;

    // vIndex: 27
    virtual void setCustomName(::std::string const& name);

    // vIndex: 28
    virtual ::std::string getImmersiveReaderText(::BlockSource&);

    // vIndex: 29
    virtual int getRepairCost() const;

    // vIndex: 31
    virtual ::PistonBlockActor* getOwningPiston(::BlockSource&);

    // vIndex: 30
    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource&) const;

    // vIndex: 33
    virtual ::Container* getContainer();

    // vIndex: 32
    virtual ::Container const* getContainer() const;

    // vIndex: 34
    virtual void eraseLootTable();

    // vIndex: 35
    virtual void onChunkLoaded(::LevelChunk&);

    // vIndex: 36
    virtual void onChunkUnloaded(::LevelChunk&);

    // vIndex: 37
    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

    // vIndex: 38
    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const&) const;

    // vIndex: 39
    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const&) const;

    // vIndex: 40
    virtual void setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    // vIndex: 41
    virtual void setFilteredUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    // vIndex: 42
    virtual void fixupOnLoad(::LevelChunk&);

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    // vIndex: 45
    virtual bool _playerCanUpdate(::Player const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockActor(::BlockActorType type, ::BlockPos const& pos, ::std::string const&);

    MCFOLD ::AABB const& getAABB() const;

    MCFOLD ::Block const* getBlock() const;

    MCFOLD ::BlockPos const& getPosition() const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> getServerUpdatePacket(::BlockSource& region);

    MCFOLD ::BlockActorType const& getType() const;

    MCFOLD bool isChanged() const;

    MCFOLD bool isType(::BlockActorType type) const;

    MCAPI void moveTo(::BlockPos const& newPos);

    MCAPI bool onUpdatePacket(::CompoundTag const& data, ::BlockSource& region, ::Player const* fromPlayer);

    MCAPI void setChanged();

    MCFOLD void setCustomNameSaved(bool saveCustomName);

    MCFOLD void setMovable(bool canMove);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::map<::std::string, ::BlockActorType> _createIdClassMap();

    MCFOLD static bool isType(::BlockActor& te, ::BlockActorType type);

    MCAPI static ::std::shared_ptr<::BlockActor>
    loadStatic(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::map<::BlockActorType, ::std::string> const& mClassIdMap();

    MCAPI static ::std::map<::std::string, ::BlockActorType> const& mIdClassMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockActorType type, ::BlockPos const& pos, ::std::string const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::Level&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $saveBlockData(::CompoundTag&, ::BlockSource&) const;

    MCFOLD void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    MCFOLD void $onCustomTagLoadDone(::BlockSource&);

    MCFOLD void $tick(::BlockSource& region);

    MCFOLD void $onChanged(::BlockSource&);

    MCFOLD bool $isMovable(::BlockSource&);

    MCAPI bool $isCustomNameSaved();

    MCFOLD void $onPlace(::BlockSource&);

    MCFOLD void $onMove();

    MCFOLD void $onRemoved(::BlockSource&);

    MCFOLD bool $isPreserved(::BlockSource&) const;

    MCFOLD bool $shouldPreserve(::BlockSource&);

    MCFOLD void $triggerEvent(int, int);

    MCFOLD void $clearCache();

    MCFOLD void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCFOLD float $getShadowRadius(::BlockSource&) const;

    MCFOLD bool $hasAlphaLayer() const;

    MCFOLD ::BlockActor* $getCrackEntity(::BlockSource&, ::BlockPos const&);

    MCAPI ::AABB $getCollisionShape(::IConstBlockSource const&) const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos);

    MCFOLD ::std::string const& $getCustomName() const;

    MCAPI ::std::string const& $getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> const& context
    );

    MCFOLD ::std::string $getName() const;

    MCAPI void $setCustomName(::std::string const& name);

    MCFOLD ::std::string $getImmersiveReaderText(::BlockSource&);

    MCFOLD int $getRepairCost() const;

    MCFOLD ::PistonBlockActor* $getOwningPiston(::BlockSource&);

    MCFOLD ::PistonBlockActor const* $getOwningPiston(::BlockSource&) const;

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $eraseLootTable();

    MCFOLD void $onChunkLoaded(::LevelChunk&);

    MCFOLD void $onChunkUnloaded(::LevelChunk&);

    MCFOLD void $onSubChunkLoaded(::LevelChunk&, short, bool);

    MCFOLD ::std::vector<::std::string> $getUgcStrings(::CompoundTag const&) const;

    MCFOLD ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const&) const;

    MCFOLD void $setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    MCFOLD void $setFilteredUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    MCFOLD void $fixupOnLoad(::LevelChunk&);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCFOLD void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCFOLD bool $_playerCanUpdate(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
