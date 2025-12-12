#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkBlockPosition.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct PlaySoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          mName;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mPos;
    ::ll::TypedStorage<4, 4, float>                   mVolume;
    ::ll::TypedStorage<4, 4, float>                   mPitch;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaySoundPacketPayload& operator=(PlaySoundPacketPayload const&);
    PlaySoundPacketPayload(PlaySoundPacketPayload const&);
    PlaySoundPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlaySoundPacketPayload(::std::string name, ::Vec3 const& pos, float volume, float pitch);

    MCAPI ::PlaySoundPacketPayload& operator=(::PlaySoundPacketPayload&&);

    MCAPI ~PlaySoundPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string name, ::Vec3 const& pos, float volume, float pitch);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
