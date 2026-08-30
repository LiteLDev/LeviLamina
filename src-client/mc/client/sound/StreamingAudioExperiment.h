#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/NetworkConnectionType.h"

// auto generated forward declare list
// clang-format off
struct OnlineAudioStreamEnded;
struct StreamingMusicEntry;
namespace Core { class Path; }
// clang-format on

class StreamingAudioExperiment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                                    mIsEnabled;
    ::ll::TypedStorage<8, 64, ::std::function<::NetworkConnectionType()>>                 mGetNetworkConnectionType;
    ::ll::TypedStorage<8, 64, ::std::function<void(::OnlineAudioStreamEnded)>>            mOnSessionEnded;
    ::ll::TypedStorage<8, 64, ::std::function<bool(::Core::Path const&)>>                 mIsResourceFromBasePack;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::StreamingMusicEntry>> mStreamingMusicTable;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                        mAllowedEventNames;
    ::ll::TypedStorage<4, 4, uint>                                                        mBufferSizeBytes;
    ::ll::TypedStorage<4, 4, uint>                                                        mFetchSizeBytes;
    ::ll::TypedStorage<4, 4, float>                                                       mPrefetchMultiplier;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StreamingAudioExperiment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
