#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/audio/online_streaming/IOnlineAudioFetcherUpdateHandle.h"

// auto generated forward declare list
// clang-format off
namespace Audio { struct OnlineAudioFetcherUpdateInput; }
namespace Audio { struct OnlineAudioFetcherUpdateOutput; }
// clang-format on

namespace Audio {

class HttpAudioFetchCoordinator : public ::Audio::IOnlineAudioFetcherUpdateHandle,
                                  public ::std::enable_shared_from_this<::Audio::HttpAudioFetchCoordinator> {
public:
    // HttpAudioFetchCoordinator inner types declare
    // clang-format off
    struct ActiveRequest;
    // clang-format on

    // HttpAudioFetchCoordinator inner types define
    enum class FetchPhase : int {
        Audio              = 0,
        InitializationData = 1,
    };

    struct ActiveRequest {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk12bc49;
        ::ll::UntypedStorage<8, 16> mUnk9c04b8;
        ::ll::UntypedStorage<8, 8>  mUnkd941e0;
        ::ll::UntypedStorage<8, 16> mUnk48ec85;
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
    ::ll::UntypedStorage<8, 80> mUnk166c4f;
    ::ll::UntypedStorage<8, 32> mUnkf4b722;
    ::ll::UntypedStorage<8, 16> mUnke1307a;
    ::ll::UntypedStorage<8, 48> mUnkb38071;
    ::ll::UntypedStorage<8, 72> mUnkf979cb;
    ::ll::UntypedStorage<8, 64> mUnk810bbe;
    ::ll::UntypedStorage<8, 56> mUnk295bc8;
    ::ll::UntypedStorage<8, 8>  mUnke96014;
    ::ll::UntypedStorage<8, 8>  mUnkadd5b9;
    ::ll::UntypedStorage<8, 8>  mUnkc4fe7e;
    ::ll::UntypedStorage<8, 8>  mUnk1ee94e;
    ::ll::UntypedStorage<8, 8>  mUnk29d8f6;
    ::ll::UntypedStorage<4, 4>  mUnk568060;
    ::ll::UntypedStorage<4, 4>  mUnkbd5f81;
    ::ll::UntypedStorage<8, 8>  mUnka5864b;
    ::ll::UntypedStorage<8, 8>  mUnkc32337;
    ::ll::UntypedStorage<8, 8>  mUnkb79a57;
    ::ll::UntypedStorage<8, 96> mUnkcdf182;
    ::ll::UntypedStorage<8, 96> mUnkaf16ae;
    ::ll::UntypedStorage<8, 16> mUnk543fea;
    ::ll::UntypedStorage<8, 96> mUnkf1eca4;
    ::ll::UntypedStorage<8, 96> mUnk19bc10;
    ::ll::UntypedStorage<1, 1>  mUnk715812;
    ::ll::UntypedStorage<1, 1>  mUnkf11a62;
    ::ll::UntypedStorage<4, 4>  mUnkddb38e;
    ::ll::UntypedStorage<1, 1>  mUnkdd6df1;
    ::ll::UntypedStorage<8, 40> mUnk25ea9c;
    ::ll::UntypedStorage<8, 16> mUnke24f3a;
    // NOLINTEND

public:
    // prevent constructor by default
    HttpAudioFetchCoordinator& operator=(HttpAudioFetchCoordinator const&);
    HttpAudioFetchCoordinator(HttpAudioFetchCoordinator const&);
    HttpAudioFetchCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HttpAudioFetchCoordinator() /*override*/ = default;

    virtual ::Audio::OnlineAudioFetcherUpdateOutput update(
        ::std::chrono::steady_clock::time_point       currentTime,
        ::Audio::OnlineAudioFetcherUpdateInput const& input
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool _isSeekTargetReady(::std::lock_guard<::std::mutex> const&) const;

    MCNAPI void _processCompletedResponse(
        ::std::lock_guard<::std::mutex> const&,
        ::std::chrono::steady_clock::time_point currentTime
    );

    MCNAPI void _tryIssueRequest();

    MCNAPI void stop();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Audio::OnlineAudioFetcherUpdateOutput
    $update(::std::chrono::steady_clock::time_point currentTime, ::Audio::OnlineAudioFetcherUpdateInput const& input);
#endif


    // NOLINTEND
};

} // namespace Audio
