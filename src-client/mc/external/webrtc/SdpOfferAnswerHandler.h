#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct SdpOfferAnswerHandler {
public:
    // SdpOfferAnswerHandler inner types declare
    // clang-format off
    struct ImplicitCreateSessionDescriptionObserver;
    struct LocalIceCredentialsToReplace;
    struct RemoteDescriptionOperation;
    struct SetSessionDescriptionObserverAdapter;
    // clang-format on

    // SdpOfferAnswerHandler inner types define
    enum class SessionError : uint {};

    struct ImplicitCreateSessionDescriptionObserver {};

    struct LocalIceCredentialsToReplace {};

    struct RemoteDescriptionOperation {};

    struct SetSessionDescriptionObserverAdapter {};
};

} // namespace webrtc
