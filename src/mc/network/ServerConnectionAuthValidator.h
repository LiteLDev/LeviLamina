#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/connection/DisconnectFailReason.h"

// auto generated forward declare list
// clang-format off
class BaseConnectionRequest;
class MinecraftServiceKeyManager;
struct NetworkServerConfig;
struct PlayerAuthenticationInfo;
namespace Social { struct Nonce; }
// clang-format on

class ServerConnectionAuthValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<int64()>>                                    mCurrentTimeFn;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager>> mMinecraftServiceKeys;
    ::ll::TypedStorage<1, 1, bool>                                                         mAllowSelfSigned;
    ::ll::TypedStorage<1, 1, bool>                                                         mRequireLanSecret;
    ::ll::TypedStorage<1, 1, bool>                                                         mAllowExpiredTokens;
    ::ll::TypedStorage<8, 8, int64>                                                        mLastSecretGenerated;
    ::ll::TypedStorage<8, 24, ::std::vector<::Social::Nonce>>                              mSecrets;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerConnectionAuthValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerConnectionAuthValidator(
        ::NetworkServerConfig const&                                networkServerConfig,
        bool                                                        isLan,
        ::std::function<int64()>                                    currentTimeFn,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager> minecraftServiceKeys
    );

    MCAPI ::std::variant<::PlayerAuthenticationInfo, ::Connection::DisconnectFailReason>
    _validateBase(::BaseConnectionRequest const& connectionRequest) const;

    MCAPI ::Social::Nonce getOrRotateLanSecret();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::NetworkServerConfig const&                                networkServerConfig,
        bool                                                        isLan,
        ::std::function<int64()>                                    currentTimeFn,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftServiceKeyManager> minecraftServiceKeys
    );
    // NOLINTEND
};
