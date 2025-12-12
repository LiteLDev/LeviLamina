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
    virtual ~IceCandidateCollection() = default;

    virtual uint64 count() const = 0;

    virtual bool HasCandidate(::webrtc::IceCandidateInterface const*) const = 0;

    virtual ::webrtc::IceCandidateInterface const* at(uint64) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
