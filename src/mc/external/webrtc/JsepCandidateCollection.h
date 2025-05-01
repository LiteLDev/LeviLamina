#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
// clang-format on

namespace webrtc {

class JsepCandidateCollection {
public:
    // prevent constructor by default
    JsepCandidateCollection& operator=(JsepCandidateCollection const&);
    JsepCandidateCollection(JsepCandidateCollection const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::JsepCandidateCollection Clone() const;

    MCNAPI JsepCandidateCollection();

    MCNAPI JsepCandidateCollection(::webrtc::JsepCandidateCollection&&);

    MCNAPI uint64 remove(::cricket::Candidate const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::JsepCandidateCollection&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
