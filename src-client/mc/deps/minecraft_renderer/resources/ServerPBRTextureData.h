#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPBRTextureData {
public:
    // ServerPBRTextureData inner types declare
    // clang-format off
    struct ServerMERSTextureData;
    struct ServerNormalTextureData;
    // clang-format on

    // ServerPBRTextureData inner types define
    struct ServerMERSTextureData {};

    struct ServerNormalTextureData {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfc1c4a;
    ::ll::UntypedStorage<8, 32> mUnk2030c1;
    ::ll::UntypedStorage<8, 32> mUnkcaa17b;
    ::ll::UntypedStorage<8, 24> mUnk947d91;
    ::ll::UntypedStorage<8, 24> mUnk921702;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerPBRTextureData& operator=(ServerPBRTextureData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerPBRTextureData();

    MCNAPI ServerPBRTextureData(::ServerPBRTextureData&&);

    MCNAPI ServerPBRTextureData(::ServerPBRTextureData const&);

    MCNAPI ~ServerPBRTextureData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ServerPBRTextureData&&);

    MCNAPI void* $ctor(::ServerPBRTextureData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
