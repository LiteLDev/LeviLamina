#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerSoundHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc5f833;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundHandle& operator=(ServerSoundHandle const&);
    ServerSoundHandle(ServerSoundHandle const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerSoundHandle();

    MCNAPI explicit ServerSoundHandle(uint64 value);

    MCNAPI bool operator==(::ServerSoundHandle const&) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(uint64 value);
    // NOLINTEND
};
