#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class MessPublicKeyManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // MessPublicKeyManager inner types define
    enum class PublicKeysEndpoint : ushort {
        Login      = 0,
        Signing    = 1,
        Encryption = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb387b8;
    ::ll::UntypedStorage<8, 80> mUnka85b2c;
    ::ll::UntypedStorage<8, 24> mUnk58ff65;
    ::ll::UntypedStorage<8, 80> mUnk2108de;
    ::ll::UntypedStorage<8, 24> mUnk9fcbc7;
    ::ll::UntypedStorage<8, 80> mUnka19355;
    ::ll::UntypedStorage<8, 24> mUnkc389dd;
    // NOLINTEND

public:
    // prevent constructor by default
    MessPublicKeyManager& operator=(MessPublicKeyManager const&);
    MessPublicKeyManager(MessPublicKeyManager const&);
    MessPublicKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MessPublicKeyManager() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::vector<::std::string> getMessLoginPublicKeys();

    MCNAPI_C void
    requestPublicKeys(::MessPublicKeyManager::PublicKeysEndpoint endpoint, ::std::function<void(bool)> callback);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
