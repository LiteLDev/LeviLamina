#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorFactory;
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class ILevel;
class ItemStackBase;
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
        ::ll::UntypedStorage<8, 176> mUnk6e28f9;
        ::ll::UntypedStorage<8, 24>  mUnk4d5cb5;
        // NOLINTEND

    public:
        // prevent constructor by default
        SerializedActor& operator=(SerializedActor const&);
        SerializedActor(SerializedActor const&);
        SerializedActor();
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
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void onChanged(::BlockSource& region) /*override*/;

    virtual void executeEvent(
        ::BlockSource&,
        ::BlockPos const& pos,
        ::Block const&,
        ::std::string const& eventName,
        ::Actor&             actor
    ) /*override*/;

    virtual void getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const /*override*/;

    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    virtual void _onUpdatePacket(::CompoundTag const& data, ::BlockSource& region) /*override*/;

    virtual ~SerializedActorBlockActor() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Actor* _loadSerializedActor(
        ::BlockSource&  region,
        ::ActorFactory& actorFactory,
        ::Vec3 const&   pos,
        ::Vec2 const&   rotation
    ) const;

    MCNAPI void loadUserData(::CompoundTag const& tag);

    MCNAPI void saveUserData(::CompoundTag& tag) const;

    MCNAPI ::Actor* spawnActor(::BlockSource& region, ::Direction::Type direction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void savePoseToItemForInventoryRendering(::ItemStackBase& item, int pose);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& ACTOR_IDENTIFIER_TAG_NAME();

    MCNAPI static ::std::string_view const& ACTOR_TAG_NAME();

    MCNAPI static ::std::string_view const& POSE_TAG_NAME();

    MCNAPI static ::std::string_view const& SAVE_DATA_TAG_NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $onChanged(::BlockSource& region);

    MCNAPI void $executeEvent(
        ::BlockSource&,
        ::BlockPos const& pos,
        ::Block const&,
        ::std::string const& eventName,
        ::Actor&             actor
    );

    MCNAPI void $getDebugText(
        ::std::vector<::std::string>& outputInfo,
        ::BlockPos const&             debugPos,
        ::BlockSource const*          region
    ) const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& data, ::BlockSource& region);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
