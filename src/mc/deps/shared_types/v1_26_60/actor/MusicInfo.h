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
    MCAPI MusicInfo(::SharedTypes::v1_26_60::Sound::MusicInfo const&);

    MCFOLD ::SharedTypes::v1_26_60::Sound::MusicInfo& operator=(::SharedTypes::v1_26_60::Sound::MusicInfo const&);

    MCAPI bool operator==(::SharedTypes::v1_26_60::Sound::MusicInfo const&) const;

    MCAPI ~MusicInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::SharedTypes::v1_26_60::Sound::MusicInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60::Sound
