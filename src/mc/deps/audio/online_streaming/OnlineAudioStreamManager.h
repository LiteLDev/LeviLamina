#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Audio { class OnlineAudioStream; }
namespace Audio { struct OnlinePlayRequest; }
namespace Audio { struct OnlineStreamParams; }
namespace Audio { class IOnlineSoundPlayer; }
// clang-format on

namespace Audio {

class OnlineAudioStreamManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf4a6b4;
    ::ll::UntypedStorage<4, 4>  mUnk99f1af;
    ::ll::UntypedStorage<8, 16> mUnkfe84a5;
    ::ll::UntypedStorage<8, 64> mUnkeab388;
    ::ll::UntypedStorage<8, 24> mUnk43f934;
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
    MCNAPI ::WeakRef<::Audio::OnlineAudioStream>
    createStream(::std::string const& url, ::Audio::OnlineStreamParams params, ::Audio::OnlinePlayRequest playRequest);

    MCNAPI void setSoundPlayer(::Bedrock::NotNullNonOwnerPtr<::Audio::IOnlineSoundPlayer> soundPlayer);

    MCNAPI void stopAll();

    MCNAPI void update(float deltaTimeSeconds);

    MCNAPI ~OnlineAudioStreamManager();
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
