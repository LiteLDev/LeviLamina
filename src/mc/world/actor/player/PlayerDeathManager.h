#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/actor/player/IPlayerDeathManagerConnector.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class IPlayerDeathManagerProxy;
class PacketSender;
class Player;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class PlayerDeathManager : public ::IPlayerDeathManagerConnector {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::Player&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
                                                                                             mOnPlayerDeathPublisher;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IPlayerDeathManagerProxy>>> mPlayerDeathManagerProxy;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>>                    mPacketSender;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PlayerDeathManager() /*override*/;

    virtual ::Bedrock::PubSub::Connector<void(::Player&)>& getOnPlayerDeathConnector() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void playerDied(::Player& player, ::ActorDamageSource const& source);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Bedrock::PubSub::Connector<void(::Player&)>& $getOnPlayerDeathConnector();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
