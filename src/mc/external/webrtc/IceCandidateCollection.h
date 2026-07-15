#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidate; }
// clang-format on

namespace webrtc {

class IceCandidateCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfa1937;
    // NOLINTEND

public:
    // prevent constructor by default
    IceCandidateCollection& operator=(IceCandidateCollection const&);
    IceCandidateCollection(IceCandidateCollection const&);
    IceCandidateCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::IceCandidateCollection Clone() const;

    MCNAPI bool HasCandidate(::webrtc::IceCandidate const* candidate) const;

    MCNAPI void add(::std::unique_ptr<::webrtc::IceCandidate> candidate);

    MCNAPI ::webrtc::IceCandidate const* at(uint64 index) const;

    MCNAPI uint64 remove(::webrtc::IceCandidate const* candidate);

    MCNAPI ~IceCandidateCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
