#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/ServerSoundHandle.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct PlaySoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                        mName;
    ::ll::TypedStorage<4, 12, ::BlockPos>                           mPos;
    ::ll::TypedStorage<4, 4, float>                                 mVolume;
    ::ll::TypedStorage<4, 4, float>                                 mPitch;
    ::ll::TypedStorage<8, 16, ::std::optional<::ServerSoundHandle>> mServerSoundHandle;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaySoundPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlaySoundPacketPayload(
        ::std::string                        name,
        ::Vec3 const&                        pos,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string                        name,
        ::Vec3 const&                        pos,
        float                                volume,
        float                                pitch,
        ::std::optional<::ServerSoundHandle> serverSoundHandle
    );
    // NOLINTEND
};
