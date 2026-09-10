#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Beta::Sound {

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
    MCAPI MusicInfo(::SharedTypes::Beta::Sound::MusicInfo const&);

    MCFOLD ::SharedTypes::Beta::Sound::MusicInfo& operator=(::SharedTypes::Beta::Sound::MusicInfo const&);

    MCAPI bool operator==(::SharedTypes::Beta::Sound::MusicInfo const&) const;

    MCAPI ~MusicInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::Beta::Sound::MusicInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Beta::Sound
