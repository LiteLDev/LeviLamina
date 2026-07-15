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
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mLevelEventDataPublisher;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mLevelEventCompoundTagPublisher;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LevelEventManager() /*override*/ = default;

    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    getLevelEventDataConnector() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::CompoundTag const&                   tag,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );

    MCAPI void broadcastLevelEvent(
        ::SharedTypes::Legacy::LevelEvent      type,
        ::Vec3 const&                          pos,
        int                                    data,
        ::UserEntityIdentifierComponent const* userIdentifierToExclude
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
