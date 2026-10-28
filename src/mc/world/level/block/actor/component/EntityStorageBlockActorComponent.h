#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/block/actor/BlockActorVersion.h"
#include "mc/world/level/block/actor/component/IBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockActor;
class BlockSource;
class BlockType;
class CompoundTag;
class ILevel;
class SaveContext;
// clang-format on

class EntityStorageBlockActorComponent : public ::IBlockActorComponent {
public:
    // EntityStorageBlockActorComponent inner types declare
    // clang-format off
    struct Context;
    struct EntityStorageInfo;
    // clang-format on

    // EntityStorageBlockActorComponent inner types define
    enum class EntityStorageResult : uchar {
        Success             = 0,
        ClientSide          = 1,
        StorageFull         = 2,
        InvalidEntityId     = 3,
        EntityAlreadyStored = 4,
        ActorSaveFailed     = 5,
        EntityNotFound      = 6,
        ActorLoadFailed     = 7,
        ActorSpawnFailed    = 8,
        SameBucket          = 9,
        NoStorageFound      = 10,
        EntityNotAllowed    = 11,
        EntityMounted       = 12,
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BlockActor&>  mBlockActor;
        ::ll::TypedStorage<8, 8, ::BlockSource&> mRegion;
        // NOLINTEND

    public:
        // prevent constructor by default
        Context& operator=(Context const&);
        Context(Context const&);
        Context();
    };

    struct EntityStorageInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ActorUniqueID> mUniqueId;
        ::ll::TypedStorage<8, 32, ::std::string>  mDefinitionId;
        // NOLINTEND
    };

    using EntityBucket = ::std::vector<::CompoundTag>;

    using EntityBuckets = ::std::unordered_map<::std::string, ::std::vector<::CompoundTag>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::vector<::CompoundTag>>> mEntities;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::CompoundTag& parentTag, ::SaveContext const&) const /*override*/;

    virtual void load(::CompoundTag const& parentTag, ::ILevel& level, ::BlockActorVersion version) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::vector<::EntityStorageBlockActorComponent::EntityStorageInfo>
    getEntities(::std::string const& bucket) const;

    MCAPI ::EntityStorageBlockActorComponent::EntityStorageResult release(
        ::std::string const&                               bucket,
        ::ActorUniqueID                                    entityId,
        ::Actor*&                                          outActor,
        ::EntityStorageBlockActorComponent::Context const& context
    );

    MCAPI int size(::std::string const& bucket) const;

    MCAPI ::EntityStorageBlockActorComponent::EntityStorageResult store(
        ::std::string const&                               bucket,
        ::Actor&                                           actor,
        ::ActorUniqueID&                                   outEntityId,
        ::EntityStorageBlockActorComponent::Context const& context
    );

    MCAPI ::EntityStorageBlockActorComponent::EntityStorageResult transfer(
        ::std::string const&                               bucket,
        ::ActorUniqueID                                    entityId,
        ::BlockActor&                                      targetBlockActor,
        ::EntityStorageBlockActorComponent::Context const& context
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI static ::std::unique_ptr<::EntityStorageBlockActorComponent> tryCreateFor(::BlockType const& blockType);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $save(::CompoundTag& parentTag, ::SaveContext const&) const;

    MCAPI void $load(::CompoundTag const& parentTag, ::ILevel& level, ::BlockActorVersion version);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
