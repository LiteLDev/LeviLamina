#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActorDataPacket;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class IConstBlockSource;
class ILevel;
class LevelChunk;
class PistonBlockActor;
class Player;
class SaveContext;
class Vec3;
// clang-format on

class BlockActor {
public:
    // BlockActor inner types define
    enum class Property : uchar {
        Changed             = 0,
        Movable             = 1,
        ClientSideOnly      = 2,
        SaveCustomName      = 3,
        CanRenderCustomName = 4,
        Count               = 5,
    };

    using MapIdType = ::std::unordered_map<::std::string, ::BlockActorType>;

    using MapTypeId = ::std::unordered_map<::BlockActorType, ::std::string>;

    using Properties = ::Bedrock::EnumSet<::BlockActor::Property, 5>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                           mTickCount;
    ::ll::TypedStorage<4, 4, int>                                           mRepairCost;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                   mPosition;
    ::ll::TypedStorage<4, 24, ::AABB>                                       mBB;
    ::ll::TypedStorage<1, 1, ::BlockActorRendererId>                        mRendererId;
    ::ll::TypedStorage<1, 1, ::BlockActorType const>                        mType;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::BlockActor::Property, 5>> mProperties;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>          mCustomName;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>                  mTerrainInterlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockActor();

    virtual void load(::ILevel&, ::CompoundTag const& tag, ::DataLoadHelper&);

    virtual bool save(::CompoundTag& tag, ::SaveContext const&) const;

    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    virtual void saveBlockData(::CompoundTag&, ::BlockSource&) const;

    virtual void loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    virtual void onCustomTagLoadDone(::BlockSource&);

    virtual bool isPermanentlyRendered() const;

    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    virtual void tick(::BlockSource& region);

    virtual void onChanged(::BlockSource&);

    virtual void onPlace(::BlockSource&);

    virtual void onMove();

    virtual void onRemoved(::BlockSource&);

    virtual bool isPreserved(::BlockSource&) const;

    virtual bool shouldPreserve(::BlockSource&);

    virtual void triggerEvent(int, int);

    virtual void executeEvent(::BlockSource&, ::BlockPos const&, ::Block const&, ::std::string const&, ::Actor&);

    virtual void onNeighborChanged(::BlockSource&, ::BlockPos const&);

    virtual float getShadowRadius(::BlockSource&) const;

    virtual bool hasAlphaLayer() const;

    virtual ::BlockActor* getCrackEntity(::BlockSource&, ::BlockPos const&);

    virtual ::AABB getCollisionShape(::IConstBlockSource const&) const;

    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const;

    virtual ::std::string getName() const;

    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name);

    virtual ::std::string getImmersiveReaderText(::BlockSource&);

    virtual ::PistonBlockActor* getOwningPiston(::BlockSource&);

    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource&) const;

    virtual ::Container* getContainer();

    virtual ::Container const* getContainer() const;

    virtual void eraseLootTable();

    virtual void onChunkLoaded(::LevelChunk&);

    virtual void onChunkUnloaded(::LevelChunk&);

    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const&) const;

    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const&) const;

    virtual void setUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    virtual void setFilteredUgcStrings(::CompoundTag&, ::std::vector<::std::string> const&) const;

    virtual bool validateData(::CompoundTag const&) const;

    virtual void fixupOnLoad(::LevelChunk&);

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&);

    virtual void _onUpdatePacket(::CompoundTag const&, ::BlockSource&);

    virtual bool _playerCanUpdate(::Player const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockActor(::BlockActorType type, ::BlockPos const& pos, ::BlockActorRendererId rendererId);

    MCAPI_C ::Bedrock::Safety::RedactableString getDisplayName() const;

    MCAPI bool onUpdatePacket(::CompoundTag const& data, ::BlockSource& region, ::Player const* fromPlayer);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::BlockActorType, ::std::string> const& _getClassIdMap();

    MCAPI static ::std::shared_ptr<::BlockActor>
    loadStatic(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockActorType type, ::BlockPos const& pos, ::BlockActorRendererId rendererId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load(::ILevel&, ::CompoundTag const& tag, ::DataLoadHelper&);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const&) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $saveBlockData(::CompoundTag&, ::BlockSource&) const;

    MCFOLD void $loadBlockData(::CompoundTag const&, ::BlockSource&, ::DataLoadHelper&);

    MCFOLD void $onCustomTagLoadDone(::BlockSource&);

    MCFOLD bool $isPermanentlyRendered() const;

    MCAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    MCFOLD void $tick(::BlockSource& region);

    MCFOLD void $onChanged(::BlockSource&);

    MCFOLD void $onPlace(::BlockSource&);

    MCFOLD void $onMove();

    MCFOLD void $onRemoved(::BlockSource&);

    MCFOLD bool $isPreserved(::BlockSource&) const;

    MCFOLD bool $shouldPreserve(::BlockSource&);

    MCFOLD void $triggerEvent(int, int);

    MCFOLD void $executeEvent(::BlockSource&, ::BlockPos const&, ::Block const&, ::std::string const&, ::Actor&);

    MCFOLD void $onNeighborChanged(::BlockSource&, ::BlockPos const&);

    MCFOLD float $getShadowRadius(::BlockSource&) const;

    MCFOLD bool $hasAlphaLayer() const;

    MCFOLD ::BlockActor* $getCrackEntity(::BlockSource&, ::BlockPos const&);

    MCAPI ::AABB $getCollisionShape(::IConstBlockSource const&) const;

    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    MCFOLD ::Bedrock::Safety::RedactableString const& $getCustomName() const;

    MCFOLD ::std::string $getName() const;

    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);

    MCFOLD ::std::string $getImmersiveReaderText(::BlockSource&);

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

    MCFOLD bool $validateData(::CompoundTag const&) const;

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
