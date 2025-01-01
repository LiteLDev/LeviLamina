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

    MCAPI ::AABB const& getAABB() const;

    MCAPI ::Block const* getBlock() const;

    MCAPI ::BlockPos const& getPosition() const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> getServerUpdatePacket(::BlockSource& region);

    MCAPI ::BlockActorType const& getType() const;

    MCAPI bool isChanged() const;

    MCAPI bool isType(::BlockActorType type) const;

    MCAPI void moveTo(::BlockPos const& newPos);

    MCAPI bool onUpdatePacket(::CompoundTag const& data, ::BlockSource& region, ::Player const* fromPlayer);

    MCAPI void setChanged();

    MCAPI void setCustomNameSaved(bool saveCustomName);

    MCAPI void setMovable(bool canMove);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::map<::std::string, ::BlockActorType> _createIdClassMap();

    MCAPI static bool isType(::BlockActor& te, ::BlockActorType type);

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

    MCAPI void $saveBlockData(::CompoundTag&, ::BlockSource&) const;

    MCAPI void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    MCAPI void $onCustomTagLoadDone(::BlockSource&);

    MCAPI void $tick(::BlockSource& region);

    MCAPI void $onChanged(::BlockSource&);

    MCAPI bool $isMovable(::BlockSource&);

    MCAPI bool $isCustomNameSaved();

    MCAPI void $onPlace(::BlockSource&);

    MCAPI void $onMove();

    MCAPI void $onRemoved(::BlockSource&);

    MCAPI bool $isPreserved(::BlockSource&) const;

    MCAPI bool $shouldPreserve(::BlockSource&);

    MCAPI void $triggerEvent(int, int);

    MCAPI void $clearCache();

    MCAPI void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCAPI float $getShadowRadius(::BlockSource&) const;

    MCAPI bool $hasAlphaLayer() const;

    MCAPI ::BlockActor* $getCrackEntity(::BlockSource&, ::BlockPos const&);

    MCAPI ::AABB $getCollisionShape(::IConstBlockSource const&) const;

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo, ::BlockPos const& debugPos);

    MCAPI ::std::string const& $getCustomName() const;

    MCAPI ::std::string const& $getFilteredCustomName(::Bedrock::NotNullNonOwnerPtr<::UIProfanityContext> const& context
    );

    MCAPI ::std::string $getName() const;

    MCAPI void $setCustomName(::std::string const& name);

    MCAPI ::std::string $getImmersiveReaderText(::BlockSource&);

    MCAPI int $getRepairCost() const;

    MCAPI ::PistonBlockActor* $getOwningPiston(::BlockSource&);

    MCAPI ::PistonBlockActor const* $getOwningPiston(::BlockSource&) const;

    MCAPI ::Container* $getContainer();

    MCAPI ::Container const* $getContainer() const;

    MCAPI void $eraseLootTable();

    MCAPI void $onChunkLoaded(::LevelChunk&);

    MCAPI void $onChunkUnloaded(::LevelChunk&);

    MCAPI void $onSubChunkLoaded(::LevelChunk&, short, bool);

    MCAPI ::std::vector<::std::string> $getUgcStrings(::CompoundTag const&) const;

    MCAPI ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const&) const;

    MCAPI void $setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    MCAPI void $setFilteredUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    MCAPI void $fixupOnLoad(::LevelChunk&);

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    MCAPI bool $_playerCanUpdate(::Player const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
