#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerSoundInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk9cc9d1;
    ::ll::UntypedStorage<8, 192> mUnk596b51;
    ::ll::UntypedStorage<8, 24>  mUnk337e6c;
    ::ll::UntypedStorage<1, 1>   mUnk2dc8a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundInstance& operator=(ServerSoundInstance const&);
    ServerSoundInstance(ServerSoundInstance const&);
    ServerSoundInstance();
};
