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
class LevelEventCoordinator;
class PacketSender;
class TimeMarker;
struct TimeMarkerError;
struct WorldClockData;
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

    using AddTimeMarkerResult = ::nonstd::expected<::Bedrock::NotNullNonOwnerPtr<::TimeMarker>, ::TimeMarkerError>;

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
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::LevelEventCoordinator>> mLevelEventCoordinator;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                               mTimeMarkersToAdd;
    ::ll::TypedStorage<8, 24, ::std::vector<uint64>>                               mTimeMarkersToRemove;
    ::ll::TypedStorage<1, 1, ::Bedrock::EnumSet<::WorldClock::DirtyFlags, 3>>      mDirtyFlags;
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
    ::ll::TypedStorage<1, 1, bool> mTimeMarkerEventsRanThisTick;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WorldClock();

#ifdef LL_PLAT_C
    MCNAPI explicit WorldClock(::WorldClockData const& data);
#endif

    MCNAPI WorldClock(::WorldClock const& rhs);

    MCNAPI void _fireTimeMarkerEvents();

    MCNAPI void _sendAddTimeMarker(::PacketSender& packetSender) const;

    MCNAPI void _sendRemoveTimeMarker(::PacketSender& packetSender) const;

    MCNAPI void _sendSyncWorldClockState(::PacketSender& packetSender) const;

    MCNAPI void addTime(int time);

    MCNAPI ::nonstd::expected<::Bedrock::NotNullNonOwnerPtr<::TimeMarker>, ::TimeMarkerError>
    addTimeMarker(::TimeMarker const& timeMarker, bool isVanilla);

#ifdef LL_PLAT_C
    MCNAPI void
    initializeLevelEventCoordinator(::Bedrock::NonOwnerPointer<::LevelEventCoordinator> const eventCoordinator);
#endif

    MCNAPI ::WorldClock& operator=(::WorldClock const& rhs);

    MCNAPI ::std::optional<::TimeMarkerError>
    serverReloadCreatorTimeMarkers(::std::vector<::TimeMarker> const& timeMarkers);

    MCNAPI void setIsPaused(bool isPaused);

#ifdef LL_PLAT_C
    MCNAPI void tick();
#endif

    MCNAPI ::Bedrock::NonOwnerPointer<::TimeMarker const> const tryGetTimeMarker(uint64 timeMarkerId) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::TimeMarker> const tryGetTimeMarker(uint64 timeMarkerId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::WorldClockData const& data);
#endif

    MCNAPI void* $ctor(::WorldClock const& rhs);
    // NOLINTEND
};
