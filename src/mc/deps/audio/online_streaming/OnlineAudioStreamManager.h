#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/UniqueOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Audio { class IOnlineAudioFetcher; }
namespace Audio { class OnlineAudioStream; }
namespace Audio { class OnlineStreamedAudioBuffer; }
namespace Audio { struct OnlineStreamConfig; }
namespace Audio { struct OnlineStreamParams; }
// clang-format on

namespace Audio {

class OnlineAudioStreamManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf4a6b4;
    ::ll::UntypedStorage<8, 32> mUnk4bfd16;
    ::ll::UntypedStorage<4, 4>  mUnk99f1af;
    ::ll::UntypedStorage<8, 16> mUnk8cf63d;
    ::ll::UntypedStorage<8, 16> mUnkdd4389;
    ::ll::UntypedStorage<8, 16> mUnk3eae52;
    ::ll::UntypedStorage<8, 64> mUnkeab388;
    ::ll::UntypedStorage<8, 64> mUnk42e32e;
    ::ll::UntypedStorage<8, 24> mUnkf0432d;
    // NOLINTEND

public:
    // prevent constructor by default
    OnlineAudioStreamManager& operator=(OnlineAudioStreamManager const&);
    OnlineAudioStreamManager(OnlineAudioStreamManager const&);
    OnlineAudioStreamManager();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI OnlineAudioStreamManager(
        ::Audio::OnlineStreamConfig                config,
        ::brstd::move_only_function<::std::unique_ptr<::Audio::IOnlineAudioFetcher>(
            ::std::string const&,
            ::std::shared_ptr<::Audio::OnlineStreamedAudioBuffer>,
            ::Audio::OnlineStreamConfig const&
        )>                                         fetcherFactory,
        ::Bedrock::UniqueOwnerPointer<::TaskGroup> taskGroup,
        int                                        maxConcurrentStreams
    );

    MCNAPI void _cleanupStoppedStreams();

    MCNAPI ::WeakRef<::Audio::OnlineAudioStream>
    createStream(::std::string const& url, ::Audio::OnlineStreamParams params);

    MCNAPI void update();

    MCNAPI ~OnlineAudioStreamManager();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(
        ::Audio::OnlineStreamConfig                config,
        ::brstd::move_only_function<::std::unique_ptr<::Audio::IOnlineAudioFetcher>(
            ::std::string const&,
            ::std::shared_ptr<::Audio::OnlineStreamedAudioBuffer>,
            ::Audio::OnlineStreamConfig const&
        )>                                         fetcherFactory,
        ::Bedrock::UniqueOwnerPointer<::TaskGroup> taskGroup,
        int                                        maxConcurrentStreams
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

} // namespace Audio
