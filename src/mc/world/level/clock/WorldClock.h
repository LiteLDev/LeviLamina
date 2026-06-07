#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/platform/brstd/flat_map.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class TimeMarker;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
namespace cereal { struct ReflectionCtx; }
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

    using OnTimeModifiedSignature = void(::std::string const&, int);

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
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<void(::std::string const&, int), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>>
        mOnTimeModified;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldClock();

    MCAPI WorldClock(::WorldClock const& rhs);

    MCAPI WorldClock(::HashedString const& name, ::std::initializer_list<::TimeMarker> timeMarkers);

    MCAPI bool _validateTimeMarker(::TimeMarker const& timeMarker);

#ifdef LL_PLAT_C
    MCAPI void forEachTimeMarker(::brstd::function_ref<void(::TimeMarker const&)> callback) const;
#endif

    MCAPI ::WorldClock& operator=(::WorldClock const& rhs);

    MCAPI void tick();

    MCAPI ::Bedrock::NonOwnerPointer<::TimeMarker> const tryGetTimeMarker(uint64 timeMarkerId);

    MCAPI ~WorldClock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint const& MAX_NAME_LENGTH();

    MCAPI static uint const& MAX_TIMEMARKERS_CAPACITY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::WorldClock const& rhs);

    MCAPI void* $ctor(::HashedString const& name, ::std::initializer_list<::TimeMarker> timeMarkers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
