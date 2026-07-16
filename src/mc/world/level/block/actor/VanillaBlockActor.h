#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/actor/BlockActorRendererId.h"
#include "mc/world/level/block/actor/BlockActorType.h"
#include "mc/world/level/block/actor/component/IVanillaMainBlockActorComponent.h"
#include "mc/world/level/block/actor/component/IVanillaRenderBlockActorComponent.h"
#include "mc/world/level/block/actor/component/IVanillaTickBlockActorComponent.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class CompoundTag;
class Container;
class DataLoadHelper;
class ILevel;
class LevelChunk;
class SaveContext;
class Vec3;
// clang-format on

class VanillaBlockActor : public ::BlockActor,
                          public ::IVanillaMainBlockActorComponent,
                          public ::IVanillaRenderBlockActorComponent,
                          public ::IVanillaTickBlockActorComponent {
public:
    // VanillaBlockActor inner types define
    enum class Property : uchar {
        Changed             = 0,
        Movable             = 1,
        ClientSideOnly      = 2,
        SaveCustomName      = 3,
        CanRenderCustomName = 4,
        Count               = 5,
    };

    using Properties = ::Bedrock::EnumSet<::VanillaBlockActor::Property, 5>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                  mTickCount;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::VanillaBlockActor::Property, 5>> mProperties;
    ::ll::TypedStorage<4, 24, ::AABB>                                              mBB;
    ::ll::TypedStorage<1, 1, ::BlockActorRendererId>                               mRendererId;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>                         mTerrainInterlockData;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString>                 mCustomName;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mFilteredCustomName;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void loadStatic() /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper) /*override*/;

    virtual bool save(::CompoundTag& tag, ::SaveContext const& context) const /*override*/;

    virtual ::BlockActor& getBlockActor() /*override*/;

    virtual ::BlockActor const& getBlockActor() const /*override*/;

    virtual ::BlockPos const& getBlockActorPosition() const /*override*/;

    virtual ::BlockActorType getBlockActorType() const /*override*/;

    virtual ::BlockActorRendererId getRendererId() const /*override*/;

    virtual bool isPermanentlyRendered() const /*override*/;

    virtual bool isWithinRenderDistance(::Vec3 const& cameraPosition) const /*override*/;

    virtual bool hasAlphaLayer() const /*override*/;

    virtual float getShadowRadius(::BlockSource& region) const /*override*/;

    virtual bool isInWorld() const /*override*/;

    virtual ::IVanillaRenderBlockActorComponent*
    getCrackEntity(::BlockSource& region, ::BlockPos const& pos) /*override*/;

    virtual ::AABB const& getAABB() const /*override*/;

    virtual void setAABB(::AABB const& value) /*override*/;

    virtual ::ActorTerrainInterlockData& getEntityTerrainInterlockData() /*override*/;

    virtual ::ActorTerrainInterlockData const& getEntityTerrainInterlockDataConst() const /*override*/;

    virtual void tick(::BlockSource& region) /*override*/;

    virtual int getTickCount() const /*override*/;

    virtual ::Container* getContainer() /*override*/;

    virtual ::Container const* getContainer() const /*override*/;

    virtual void eraseLootTable() /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual ::std::string getImmersiveReaderText(::BlockSource& region) /*override*/;

    virtual bool canRenderCustomName() const /*override*/;

    virtual bool hasCustomName() const /*override*/;

    virtual ::Bedrock::Safety::RedactableString const& getCustomName() const /*override*/;

    virtual void setCustomName(::Bedrock::Safety::RedactableString const& name) /*override*/;

    virtual bool isCustomNameSaved() const /*override*/;

    virtual ::Bedrock::Safety::RedactableString getDisplayName() const /*override*/;

    virtual bool hasFilteredNameTag() const /*override*/;

    virtual ::std::string getFilteredNameTag() const /*override*/;

    virtual void setFilteredNameTag(::std::string const& filteredName) /*override*/;

    virtual ::std::vector<::std::string> getUgcStrings(::CompoundTag const& tag) const /*override*/;

    virtual ::std::vector<::std::string> getFilteredUgcStrings(::CompoundTag const& tag) const /*override*/;

    virtual void setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    virtual void setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const /*override*/;

    virtual bool validateData(::CompoundTag const& tag) const /*override*/;

    virtual void fixupOnLoad(::LevelChunk& lc) /*override*/;

    virtual void setChanged() /*override*/;

    virtual bool isChanged() const /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void _resetAABB() /*override*/;

    virtual void _setCanRenderCustomName(bool value) /*override*/;

    virtual void _setCustomNameSaved(bool saveCustomName) /*override*/;

    virtual ::IVanillaRenderBlockActorComponent const* _getRenderComponent() const /*override*/;

    virtual ::IVanillaRenderBlockActorComponent* _getRenderComponent() /*override*/;

    virtual ::IVanillaTickBlockActorComponent const* _getTickComponent() const /*override*/;

    virtual ::IVanillaTickBlockActorComponent* _getTickComponent() /*override*/;

    virtual ::IVanillaMainBlockActorComponent const* _getMainComponent() const /*override*/;

    virtual ::IVanillaMainBlockActorComponent* _getMainComponent() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VanillaBlockActor(::BlockActorType type, ::BlockPos const& pos, ::BlockActorRendererId rendererId);

    MCAPI void _loadCustomNameFromUpdatePacket(::CompoundTag const& data);

    MCAPI void _saveCustomNameToUpdatePacket(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockActorType type, ::BlockPos const& pos, ::BlockActorRendererId rendererId);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $loadStatic();

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& helper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& context) const;

    MCFOLD ::BlockActor& $getBlockActor();

    MCFOLD ::BlockActor const& $getBlockActor() const;

    MCAPI ::BlockPos const& $getBlockActorPosition() const;

    MCAPI ::BlockActorType $getBlockActorType() const;

    MCAPI ::BlockActorRendererId $getRendererId() const;

    MCFOLD bool $isPermanentlyRendered() const;

    MCAPI bool $isWithinRenderDistance(::Vec3 const& cameraPosition) const;

    MCFOLD bool $hasAlphaLayer() const;

    MCFOLD float $getShadowRadius(::BlockSource& region) const;

    MCAPI bool $isInWorld() const;

    MCFOLD ::IVanillaRenderBlockActorComponent* $getCrackEntity(::BlockSource& region, ::BlockPos const& pos);

    MCFOLD ::AABB const& $getAABB() const;

    MCAPI void $setAABB(::AABB const& value);

    MCFOLD ::ActorTerrainInterlockData& $getEntityTerrainInterlockData();

    MCFOLD ::ActorTerrainInterlockData const& $getEntityTerrainInterlockDataConst() const;

    MCFOLD void $tick(::BlockSource& region);

    MCFOLD int $getTickCount() const;

    MCFOLD ::Container* $getContainer();

    MCFOLD ::Container const* $getContainer() const;

    MCFOLD void $eraseLootTable();

    MCFOLD ::std::string $getName() const;

    MCFOLD ::std::string $getImmersiveReaderText(::BlockSource& region);

    MCAPI bool $canRenderCustomName() const;

    MCAPI bool $hasCustomName() const;

    MCFOLD ::Bedrock::Safety::RedactableString const& $getCustomName() const;

    MCAPI void $setCustomName(::Bedrock::Safety::RedactableString const& name);

    MCAPI bool $isCustomNameSaved() const;

    MCAPI ::Bedrock::Safety::RedactableString $getDisplayName() const;

    MCAPI bool $hasFilteredNameTag() const;

    MCAPI ::std::string $getFilteredNameTag() const;

    MCAPI void $setFilteredNameTag(::std::string const& filteredName);

    MCFOLD ::std::vector<::std::string> $getUgcStrings(::CompoundTag const& tag) const;

    MCFOLD ::std::vector<::std::string> $getFilteredUgcStrings(::CompoundTag const& tag) const;

    MCFOLD void $setUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCFOLD void $setFilteredUgcStrings(::CompoundTag& tag, ::std::vector<::std::string> const& list) const;

    MCFOLD bool $validateData(::CompoundTag const& tag) const;

    MCFOLD void $fixupOnLoad(::LevelChunk& lc);

    MCAPI void $setChanged();

    MCAPI bool $isChanged() const;

    MCFOLD void $onChanged(::BlockSource& region);

    MCAPI void $_resetAABB();

    MCAPI void $_setCanRenderCustomName(bool value);

    MCAPI void $_setCustomNameSaved(bool saveCustomName);

    MCFOLD ::IVanillaRenderBlockActorComponent const* $_getRenderComponent() const;

    MCFOLD ::IVanillaRenderBlockActorComponent* $_getRenderComponent();

    MCFOLD ::IVanillaTickBlockActorComponent const* $_getTickComponent() const;

    MCFOLD ::IVanillaTickBlockActorComponent* $_getTickComponent();

    MCFOLD ::IVanillaMainBlockActorComponent const* $_getMainComponent() const;

    MCFOLD ::IVanillaMainBlockActorComponent* $_getMainComponent();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIVanillaRenderBlockActorComponent();

    MCNAPI static void** $vftableForIVanillaMainBlockActorComponent();

    MCNAPI static void** $vftableForBlockActor();

    MCNAPI static void** $vftableForIVanillaTickBlockActorComponent();
    // NOLINTEND
};
