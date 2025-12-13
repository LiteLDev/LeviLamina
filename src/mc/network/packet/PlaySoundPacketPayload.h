#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
// clang-format on

struct PlaySoundPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkafec0d;
    ::ll::UntypedStorage<4, 12> mUnk903060;
    ::ll::UntypedStorage<4, 4>  mUnk1e9c80;
    ::ll::UntypedStorage<4, 4>  mUnk465107;
    // NOLINTEND

public:
    // prevent constructor by default
    PlaySoundPacketPayload& operator=(PlaySoundPacketPayload const&);
    PlaySoundPacketPayload(PlaySoundPacketPayload const&);
    PlaySoundPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PlaySoundPacketPayload(::std::string name, ::Vec3 const& pos, float volume, float pitch);

    MCNAPI ::PlaySoundPacketPayload& operator=(::PlaySoundPacketPayload&&);

    MCNAPI ~PlaySoundPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string name, ::Vec3 const& pos, float volume, float pitch);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
