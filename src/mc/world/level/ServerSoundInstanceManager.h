#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ServerSoundInstanceManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb93fd6;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundInstanceManager& operator=(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager(ServerSoundInstanceManager const&);
    ServerSoundInstanceManager();

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
