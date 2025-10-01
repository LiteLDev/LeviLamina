#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/nbt/CompoundTag.h"
#include "mc/world/Direction.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class DataLoadHelper;
class ILevel;
class SaveContext;
class Vec2;
class Vec3;
// clang-format on

class SerializedActorBlockActor : public ::BlockActor {
public:
    // SerializedActorBlockActor inner types declare
    // clang-format off
    struct SerializedActor;
    // clang-format on

    // SerializedActorBlockActor inner types define
    struct SerializedActor {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mActorIdentifier;
        ::ll::TypedStorage<8, 24, ::CompoundTag>                mSaveData;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::SerializedActorBlockActor::SerializedActor> mSerializedActor;
    ::ll::TypedStorage<4, 4, int>                                            mPose;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 10
    virtual void onChanged(::BlockSource& region) /*override*/;

    // vIndex: 17
    virtual void executeEvent(
        ::BlockSource&,
        ::BlockPos const& pos,
        ::Block const&,
        ::std::string const& eventName,
        ::Actor&             actor
    ) /*override*/;

    // vIndex: 23
    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const /*override*/;

    // vIndex: 41
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 42
    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    // vIndex: 0
    virtual ~SerializedActorBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Actor* _loadSerializedActor(
        ::BlockSource&  region,
        ::ActorFactory& actorFactory,
        ::Vec3 const&   pos,
        ::Vec2 const&   rotation
    ) const;

    MCAPI void loadUserData(::CompoundTag const& tag);

    MCAPI void saveUserData(::CompoundTag& tag) const;

    MCAPI ::Actor* spawnActor(::BlockSource& region, ::Direction::Type direction);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ACTOR_IDENTIFIER_TAG_NAME();

    MCAPI static ::std::string_view const& ACTOR_TAG_NAME();

    MCAPI static ::std::string_view const& POSE_TAG_NAME();

    MCAPI static ::std::string_view const& SAVE_DATA_TAG_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $onChanged(::BlockSource& region);

    MCAPI void $executeEvent(
        ::BlockSource&,
        ::BlockPos const& pos,
        ::Block const&,
        ::std::string const& eventName,
        ::Actor&             actor
    );

    MCAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
