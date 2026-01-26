#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class ConnectionRequest;
class MinecraftServiceKeyManager;
struct NetworkServerConfig;
struct PlayerAuthenticationInfo;
// clang-format on

class ServerConnectionAuthValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<int64()>>                                    mCurrentTimeFn;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>> mMinecraftServiceKeys;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mLegacyMultiplayerTokenTrustedKeys;
    ::ll::TypedStorage<1, 1, bool>                          mAllowSelfSigned;
    ::ll::TypedStorage<1, 1, bool>                          mAllowExpiredTokens;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConnectionAuthValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerConnectionAuthValidator(
        ::NetworkServerConfig const&                                networkServerConfig,
        ::std::function<int64()>                                    currentTimeFn,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager> minecraftServiceKeys,
        ::std::vector<::std::string> const&                         legacyMultiplayerTokenTrustedKeys
    );

    MCAPI ::std::variant<::PlayerAuthenticationInfo, ::Connection::DisconnectFailReason>
    validate(::ConnectionRequest const& connectionRequest) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::NetworkServerConfig const&                                networkServerConfig,
        ::std::function<int64()>                                    currentTimeFn,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager> minecraftServiceKeys,
        ::std::vector<::std::string> const&                         legacyMultiplayerTokenTrustedKeys
    );
    // NOLINTEND
};
