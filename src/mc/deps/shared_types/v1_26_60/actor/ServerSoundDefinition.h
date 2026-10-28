#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_60/actor/DurationInfo.h"
#include "mc/deps/shared_types/v1_26_60/actor/MusicInfo.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::v1_26_60::Sound { struct TagValueList; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_60::Sound {

struct ServerSoundDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                 mSoundEventName;
    ::ll::TypedStorage<4, 12, ::std::optional<::SharedTypes::v1_26_60::Sound::DurationInfo>> mDurationInfo;
    ::ll::TypedStorage<8, 152, ::std::optional<::SharedTypes::v1_26_60::Sound::MusicInfo>>   mMusicInfo;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<::std::unordered_map<::std::string, ::SharedTypes::v1_26_60::Sound::TagValueList>>>
                                                     mTags;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mBroadcastRange;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundDefinition& operator=(ServerSoundDefinition const&);
    ServerSoundDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerSoundDefinition(::SharedTypes::v1_26_60::Sound::ServerSoundDefinition&&);

    MCAPI ServerSoundDefinition(::SharedTypes::v1_26_60::Sound::ServerSoundDefinition const&);

    MCAPI bool operator==(::SharedTypes::v1_26_60::Sound::ServerSoundDefinition const&) const;

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
    MCAPI void* $ctor(::SharedTypes::v1_26_60::Sound::ServerSoundDefinition&&);

    MCAPI void* $ctor(::SharedTypes::v1_26_60::Sound::ServerSoundDefinition const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::Sound
