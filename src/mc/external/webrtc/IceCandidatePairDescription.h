#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/IceCandidateType.h"

namespace webrtc {

class IceCandidatePairDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk1bdd30;
    ::ll::UntypedStorage<4, 4> mUnk1c6a01;
    ::ll::UntypedStorage<4, 4> mUnk9f82a0;
    ::ll::UntypedStorage<4, 4> mUnkfd25d4;
    ::ll::UntypedStorage<4, 4> mUnkbd8281;
    ::ll::UntypedStorage<4, 4> mUnk6bc63f;
    ::ll::UntypedStorage<4, 4> mUnk740b1e;
    // NOLINTEND

public:
    // prevent constructor by default
    IceCandidatePairDescription& operator=(IceCandidatePairDescription const&);
    IceCandidatePairDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI IceCandidatePairDescription(::webrtc::IceCandidatePairDescription const&);

    MCNAPI IceCandidatePairDescription(::webrtc::IceCandidateType, ::webrtc::IceCandidateType);

    MCNAPI ~IceCandidatePairDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::IceCandidatePairDescription const&);

    MCNAPI void* $ctor(::webrtc::IceCandidateType, ::webrtc::IceCandidateType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
