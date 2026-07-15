#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ServerSoundInstanceManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ServerSoundInstanceManager inner types declare
    // clang-format off
    struct PendingStop;
    // clang-format on

    // ServerSoundInstanceManager inner types define
    struct PendingStop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>   mUnk8ae9c0;
        ::ll::UntypedStorage<8, 192> mUnka1c058;
        // NOLINTEND

    public:
        // prevent constructor by default
        PendingStop& operator=(PendingStop const&);
        PendingStop(PendingStop const&);
        PendingStop();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkb93fd6;
    ::ll::UntypedStorage<8, 24> mUnkf22f78;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundInstanceManager& operator=(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager();
};
