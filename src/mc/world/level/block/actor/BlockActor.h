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
    LLAPI void refresh(optional_ref<class BlockSource> blockSource = std::nullopt);

    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt);

    LLNDAPI static std::shared_ptr<BlockActor> create(class CompoundTag const& nbt, class BlockPos const& pos);

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
    ::ll::TypedStorage<8, 32, ::std::string>                                mFilteredCustomName;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>                  mTerrainInterlockData;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BlockActor();

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    virtual bool saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    virtual void saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;

    virtual void loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);

    virtual void onCustomTagLoadDone(::BlockSource& region);

    virtual bool isPermanentlyRendered() const;

    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    virtual void tick(::BlockSource& region);

    virtual void onChanged(::BlockSource& region);

    virtual void onPlace(::BlockSource& region);

    virtual void onMove();

    virtual void onRemoved(::BlockSource& region);

    virtual bool isPreserved(::BlockSource& region) const;

    virtual bool shouldPreserve(::BlockSource& region);

    virtual void triggerEvent(int b0, int b1);

    virtual void onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    virtual float getShadowRadius(::BlockSource& region) const;

    virtual bool hasAlphaLayer() const;

    virtual ::BlockActor* getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    virtual ::AABB getCollisionShape(::IConstBlockSource const& region) const;

    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const;

    virtual ::std::string getName() const;

    virtual void setFilteredNameTag(::std::string const& filteredName);

    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name);

    virtual ::std::string getImmersiveReaderText(::BlockSource& region);

    virtual ::PistonBlockActor* getOwningPiston(::BlockSource& region);

    virtual ::PistonBlockActor const* getOwningPiston(::BlockSource& region) const;

    virtual ::Container* getContainer();

    virtual ::Container const* getContainer() const;

    virtual void eraseLootTable();

    virtual void onChunkLoaded(::LevelChunk& lc);

    virtual void onChunkUnloaded(::LevelChunk& lc);

    virtual void onSubChunkLoaded(::LevelChunk&, short, bool);

    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const;

    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const;

    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    virtual bool validateData(::CompoundTag const& tag) const;

    virtual void fixupOnLoad(::LevelChunk& lc);

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource& region);

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    virtual bool _playerCanUpdate(::Player const& player) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockActor(::BlockActorType type, ::BlockPos const& pos, ::BlockActorRendererId rendererId);

    MCAPI void _loadCustomNameFromUpdatePacket(::CompoundTag const& data);

#ifdef LL_PLAT_C
    MCAPI ::Bedrock::Safety::RedactableString getDisplayName() const;
#endif

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
    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI bool $saveItemInstanceData(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCFOLD void $saveBlockData(::CompoundTag& tag, ::BlockSource& region) const;

    MCFOLD void $loadBlockData(::CompoundTag const& tag, ::BlockSource& region, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void $onCustomTagLoadDone(::BlockSource& region);

    MCFOLD bool $isPermanentlyRendered() const;

    MCAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    MCFOLD void $tick(::BlockSource& region);

    MCFOLD void $onChanged(::BlockSource& region);

    MCFOLD void $onPlace(::BlockSource& region);

    MCFOLD void $onMove();

    MCFOLD void $onRemoved(::BlockSource& region);

    MCFOLD bool $isPreserved(::BlockSource& region) const;

    MCFOLD bool $shouldPreserve(::BlockSource& region);

    MCFOLD void $triggerEvent(int b0, int b1);

    MCFOLD void $onNeighborChanged(::BlockSource& region, ::BlockPos const& position);

    MCFOLD float $getShadowRadius(::BlockSource& region) const;

    MCFOLD bool $hasAlphaLayer() const;

    MCFOLD ::BlockActor* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCAPI ::AABB $getCollisionShape(::IConstBlockSource const& region) const;

    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    MCFOLD ::Bedrock::Safety::RedactableString const& $getCustomName() const;

    MCFOLD ::std::string $getName() const;

    MCAPI void $setFilteredNameTag(::std::string const& filteredName);

    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);

    MCFOLD ::std::string $getImmersiveReaderText(::BlockSource& region);

    MCFOLD ::PistonBlockActor* $getOwningPiston(::BlockSource& region);

    MCFOLD ::PistonBlockActor const* $getOwningPiston(::BlockSource& region) const;

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $eraseLootTable();

    MCFOLD void $onChunkLoaded(::LevelChunk& lc);

    MCFOLD void $onChunkUnloaded(::LevelChunk& lc);

    MCFOLD void $onSubChunkLoaded(::LevelChunk&, short, bool);

    MCFOLD ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;

    MCFOLD ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const& tag) const;

    MCFOLD void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCFOLD void $setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCFOLD bool $validateData(::CompoundTag const& tag) const;

    MCFOLD void $fixupOnLoad(::LevelChunk& lc);

    MCFOLD ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource& region);

    MCFOLD void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);

    MCFOLD bool $_playerCanUpdate(::Player const& player) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
