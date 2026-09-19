#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IOnlineAudioFetcher.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Audio { class IOnlineAudioFetcherUpdateHandle; }
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct HttpRangeResponse; }
namespace Audio { struct OnlineAudioFetcherSnapshot; }
namespace Audio { struct OnlineStreamConfig; }
// clang-format on

namespace Audio {

class HttpAudioFetcher : public ::Audio::IOnlineAudioFetcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbc1fc7;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpAudioFetcher& operator=(HttpAudioFetcher const&);
    HttpAudioFetcher(HttpAudioFetcher const&);
    HttpAudioFetcher();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpAudioFetcher() /*override*/ = default;

    virtual void start() /*override*/;

    virtual void seekTo(uint64 offset) /*override*/;

    virtual void stop() /*override*/;

    virtual void notifyPlaybackStarted() /*override*/;

    virtual ::Audio::OnlineAudioFetcherSnapshot getSnapshot() const /*override*/;

    virtual ::std::shared_ptr<::Audio::IOnlineAudioFetcherUpdateHandle> getUpdateHandle() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::brstd::move_only_function<::std::unique_ptr<::Audio::IOnlineAudioFetcher>(
        ::std::string const&,
        ::std::shared_ptr<::Audio::OnlineStreamedAudioBuffer>,
        ::Audio::OnlineStreamConfig const&
    )> createFetcherFactory(::Bedrock::NotNullNonOwnerPtr<::TaskGroup> const& taskGroup);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $start();

    MCNAPI void $seekTo(uint64 offset);

    MCNAPI void $stop();

    MCNAPI void $notifyPlaybackStarted();

    MCNAPI ::Audio::OnlineAudioFetcherSnapshot $getSnapshot() const;

    MCNAPI ::std::shared_ptr<::Audio::IOnlineAudioFetcherUpdateHandle> $getUpdateHandle();
#endif


    // NOLINTEND
};

} // namespace Audio
