#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/platform/brstd/flat_map.h"

// auto generated forward declare list
// clang-format off
class TimeMarker;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class WorldClock {
public:
    // WorldClock inner types define
    enum class DirtyFlags : uchar {
        SyncState        = 0,
        AddTimeMarker    = 1,
        RemoveTimeMarker = 2,
        Count            = 3,
    };

    using OnPauseSignature = void(::std::string const&);

    using OnRestartSignature = void(::std::string const&, int&);

    using OnResumeSignature = void(::std::string const&);

    using OnTimeMarkerSignature = void(::std::string const&, ::Bedrock::NonOwnerPointer<::TimeMarker const> const);

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mName;
    ::ll::TypedStorage<4, 4, int>             mTime;
    ::ll::TypedStorage<1, 1, bool>            mIsPaused;
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            uint64,
            ::Bedrock::UniqueOwnerPointer<::TimeMarker>,
            ::std::less<uint64>,
            ::std::vector<uint64>,
            ::std::vector<::Bedrock::UniqueOwnerPointer<::TimeMarker>>>>
                                                                              mTimeMarkers;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                          mTimeMarkersToAdd;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                          mTimeMarkersToRemove;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::WorldClock::DirtyFlags, 3>> mDirtyFlags;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnPause;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnResume;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::
            Publisher<void(::std::string const&, int&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnRestart;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::string const&, ::Bedrock::NonOwnerPointer<::TimeMarker const>),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnTimeMarker;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldClock();

    MCAPI WorldClock(::WorldClock const& rhs);

    MCAPI ::WorldClock& operator=(::WorldClock const& rhs);

    MCAPI void setTime(int time);

    MCAPI ~WorldClock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::WorldClock const& rhs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
