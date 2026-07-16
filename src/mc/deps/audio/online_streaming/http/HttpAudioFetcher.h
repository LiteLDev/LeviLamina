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
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct HttpRangeResponse; }
namespace Audio { struct OnlineStreamConfig; }
// clang-format on

namespace Audio {

class HttpAudioFetcher : public ::Audio::IOnlineAudioFetcher {
public:
    // HttpAudioFetcher inner types declare
    // clang-format off
    struct ActiveRequest;
    // clang-format on

    // HttpAudioFetcher inner types define
    struct ActiveRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk170164;
        ::ll::UntypedStorage<8, 16> mUnk6aa44d;
        // NOLINTEND

    public:
        // prevent constructor by default
        ActiveRequest& operator=(ActiveRequest const&);
        ActiveRequest(ActiveRequest const&);
        ActiveRequest();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk22aec7;
    ::ll::UntypedStorage<8, 16> mUnkff3770;
    ::ll::UntypedStorage<8, 16> mUnkaac834;
    ::ll::UntypedStorage<8, 64> mUnk783628;
    ::ll::UntypedStorage<8, 32> mUnk6a7344;
    ::ll::UntypedStorage<8, 8>  mUnk1c6fb9;
    ::ll::UntypedStorage<8, 8>  mUnkdf9387;
    ::ll::UntypedStorage<8, 8>  mUnk38d5d7;
    ::ll::UntypedStorage<4, 4>  mUnk4c2218;
    ::ll::UntypedStorage<4, 4>  mUnk2c29ed;
    ::ll::UntypedStorage<1, 1>  mUnkc18b69;
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

    virtual void update(float) /*override*/;

    virtual void notifyReadPosition(uint64) /*override*/;

    virtual void seekTo(uint64) /*override*/;

    virtual void stop() /*override*/;

    virtual bool isFetching() const /*override*/;

    virtual uint64 getNextFetchOffset() const /*override*/;

    virtual uint64 getTotalBytesRequested() const /*override*/;

    virtual uint getTotalRetries() const /*override*/;
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

    // NOLINTEND
};

} // namespace Audio
