#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/deps/core/math/Vec3.h"

struct PlaySoundOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        mName;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPosition;
    ::ll::TypedStorage<4, 4, float>                                 mVolume;
    ::ll::TypedStorage<4, 4, float>                                 mPitch;
    ::ll::TypedStorage<4, 4, int>                                   mLoopCount;
    ::ll::TypedStorage<8, 16, ::std::optional<::ServerSoundHandle>> mServerSoundHandle;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PlaySoundOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
