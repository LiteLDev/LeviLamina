#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/ILevelEventManagerCoordinator.h"

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
        ::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mLevelEventDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded>>
        mLevelEventCompoundTagPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelEventManager() /*override*/;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    getLevelEventDataConnector() /*override*/;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    LevelEventManager(bool isClientSide, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator);

    MCNAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );

    MCNAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );

    MCNAPI void
    broadcastLocalEvent(::IDimension& dimension, ::SharedTypes::Legacy::LevelEvent type, ::Vec3 const& pos, int data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool isClientSide, ::Bedrock::NotNullNonOwnerPtr<::LevelEventCoordinator> levelEventCoordinator);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    $getLevelEventDataConnector();

    MCNAPI ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    $getLevelEventCompoundTagConnector();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
