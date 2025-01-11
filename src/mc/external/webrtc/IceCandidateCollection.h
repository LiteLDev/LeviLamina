#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class IceCandidateInterface; }
// clang-format on

namespace webrtc {

class IceCandidateCollection {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IceCandidateCollection() = default;

    // vIndex: 1
    virtual uint64 count() const = 0;

    // vIndex: 2
    virtual bool HasCandidate(::webrtc::IceCandidateInterface const*) const = 0;

    // vIndex: 3
    virtual ::webrtc::IceCandidateInterface const* at(uint64) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
