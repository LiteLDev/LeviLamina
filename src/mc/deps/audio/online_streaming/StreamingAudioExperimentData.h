#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct StreamingMusicEntry;
// clang-format on

class StreamingAudioExperimentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcdda26;
    ::ll::UntypedStorage<8, 64> mUnk243257;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamingAudioExperimentData& operator=(StreamingAudioExperimentData const&);
    StreamingAudioExperimentData(StreamingAudioExperimentData const&);
    StreamingAudioExperimentData();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI StreamingAudioExperimentData(
        ::std::unordered_map<::std::string, ::StreamingMusicEntry> streamingMusicTable,
        ::std::unordered_set<::std::string>                        allowedEventNames
    );

    MCNAPI ::StreamingMusicEntry const* findBySoundPath(::std::string const& soundPath) const;

    MCNAPI bool isEventAllowed(::std::string const& eventName) const;

    MCNAPI ~StreamingAudioExperimentData();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::StreamingAudioExperimentData const& getMainMenuMusicData();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::std::unordered_map<::std::string, ::StreamingMusicEntry> streamingMusicTable,
        ::std::unordered_set<::std::string>                        allowedEventNames
    );
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
