#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/beta/sound/DurationInfo.h"
#include "mc/deps/shared_types/beta/sound/MusicInfo.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Beta::Sound { struct TagValueList; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Beta::Sound {

struct ServerSoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                             mSoundEventName;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::Beta::Sound::DurationInfo>> mDurationInfo;
    ::ll::TypedStorage<8, 152, ::std::optional<::SharedTypes::Beta::Sound::MusicInfo>>   mMusicInfo;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<::std::unordered_map<::std::string, ::SharedTypes::Beta::Sound::TagValueList>>>
        mTags;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundDefinition& operator=(ServerSoundDefinition const&);
    ServerSoundDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerSoundDefinition(::SharedTypes::Beta::Sound::ServerSoundDefinition&&);

    MCAPI ServerSoundDefinition(::SharedTypes::Beta::Sound::ServerSoundDefinition const&);

    MCAPI bool operator==(::SharedTypes::Beta::Sound::ServerSoundDefinition const&) const;

    MCAPI ~ServerSoundDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Beta::Sound::ServerSoundDefinition&&);

    MCAPI void* $ctor(::SharedTypes::Beta::Sound::ServerSoundDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::Sound
