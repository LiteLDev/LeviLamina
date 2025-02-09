#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/level/ILevelEventManagerCoordinator.h"
#include "mc/world/level/block/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class IDimension;
class LevelEventCoordinator;
class PacketSender;
class UserEntityIdentifierComponent;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class LevelEventManager : public ::ILevelEventManagerCoordinator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const>                                                    mIsClientSide;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> const> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                   mPacketSender;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::LevelEvent, ::Vec3 const&, int), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mLevelEventDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::LevelEvent, ::CompoundTag const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mLevelEventCompoundTagPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelEventManager() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::LevelEvent, ::Vec3 const&, int)>&
    getLevelEventDataConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    LevelEventManager(bool isClientSide, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator);

    MCAPI void broadcastLevelEvent(
        ::LevelEvent                           type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );

    MCAPI void broadcastLevelEvent(
        ::LevelEvent                           type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );

    MCAPI void broadcastLocalEvent(::IDimension& dimension, ::LevelEvent type, ::Vec3 const& pos, int data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool isClientSide, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelEvent, ::Vec3 const&, int)>& $getLevelEventDataConnector();

    MCFOLD ::Bedrock::PubSub::Connector<void(::LevelEvent, ::CompoundTag const&)>& $getLevelEventCompoundTagConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
