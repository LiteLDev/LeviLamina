#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_26_60::Sound {

struct MusicInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mGenres;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>> mMoods;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mArtist;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mTitle;
    // NOLINTEND

public:
    // prevent constructor by default
    MusicInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MusicInfo(::SharedTypes::v1_26_60::Sound::MusicInfo const&);

    MCNAPI ::SharedTypes::v1_26_60::Sound::MusicInfo& operator=(::SharedTypes::v1_26_60::Sound::MusicInfo const&);

    MCNAPI bool operator==(::SharedTypes::v1_26_60::Sound::MusicInfo const&) const;

    MCNAPI ~MusicInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_26_60::Sound::MusicInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::Sound
