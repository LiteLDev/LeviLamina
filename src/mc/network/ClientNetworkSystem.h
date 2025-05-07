#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/network/IGameConnectionInfoProvider.h"
#include "mc/network/NetworkSystem.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
namespace Social { class GameConnectionInfo; }
// clang-format on

class ClientNetworkSystem : public ::Social::IGameConnectionInfoProvider,
                            public ::Bedrock::EnableNonOwnerReferences,
                            public ::NetworkSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 336, ::TaskGroup>                    mTaskGroup;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUserLoggingSub;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mUserConnectionQualitySub;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientNetworkSystem() /*override*/ = default;

    // vIndex: 1
    virtual ::Social::GameConnectionInfo const& getConnectionInfo() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::NetworkIdentifier> tryGetLocalNetworkId() const;

    MCNAPI ::std::optional<::NetworkIdentifier> tryGetServerId() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
