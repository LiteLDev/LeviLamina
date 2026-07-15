#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
// clang-format on

namespace webrtc {

class CandidatePairInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CandidatePairInterface();

    virtual ::webrtc::Candidate const& local_candidate() const = 0;

    virtual ::webrtc::Candidate const& remote_candidate() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
