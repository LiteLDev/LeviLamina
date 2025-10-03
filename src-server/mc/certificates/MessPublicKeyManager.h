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
    ::ll::UntypedStorage<8, 24> mUnkac4760;
    ::ll::UntypedStorage<8, 80> mUnk2108de;
    ::ll::UntypedStorage<8, 24> mUnk2f5de8;
    ::ll::UntypedStorage<8, 80> mUnka19355;
    ::ll::UntypedStorage<8, 24> mUnke31331;
    // NOLINTEND

public:
    // prevent constructor by default
    MessPublicKeyManager& operator=(MessPublicKeyManager const&);
    MessPublicKeyManager(MessPublicKeyManager const&);
    MessPublicKeyManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MessPublicKeyManager() /*override*/ = default;
    // NOLINTEND
};
