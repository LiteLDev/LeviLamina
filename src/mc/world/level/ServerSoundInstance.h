#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ServerSoundHandle;
class ServerSoundInstanceManager;
struct NetworkIdentifierWithSubId;
namespace ServerSoundRuntime { struct Definition; }
// clang-format on

class ServerSoundInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk9cc9d1;
    ::ll::UntypedStorage<8, 32>  mUnk1ca53f;
    ::ll::UntypedStorage<8, 192> mUnk596b51;
    ::ll::UntypedStorage<8, 24>  mUnk337e6c;
    ::ll::UntypedStorage<4, 4>   mUnkabe83e;
    ::ll::UntypedStorage<8, 24>  mUnk133689;
    ::ll::UntypedStorage<1, 1>   mUnk2dc8a9;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerSoundInstance& operator=(ServerSoundInstance const&);
    ServerSoundInstance(ServerSoundInstance const&);
    ServerSoundInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerSoundInstance(
        ::ServerSoundHandle                                                handle,
        ::ServerSoundInstanceManager&                                      manager,
        ::std::string                                                      soundEventId,
        ::Bedrock::NonOwnerPointer<::ServerSoundRuntime::Definition const> definition,
        int                                                                loopCount,
        ::std::optional<::NetworkIdentifierWithSubId>                      recipient
    );

    MCNAPI float getPlaybackPosition(::std::chrono::steady_clock::time_point now) const;

    MCNAPI void pause();

    MCNAPI void resume();

    MCNAPI void seekTo(float seconds);

    MCNAPI void stop();

    MCNAPI ~ServerSoundInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ServerSoundHandle                                                handle,
        ::ServerSoundInstanceManager&                                      manager,
        ::std::string                                                      soundEventId,
        ::Bedrock::NonOwnerPointer<::ServerSoundRuntime::Definition const> definition,
        int                                                                loopCount,
        ::std::optional<::NetworkIdentifierWithSubId>                      recipient
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
