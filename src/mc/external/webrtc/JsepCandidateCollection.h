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
    MCAPI ::webrtc::JsepCandidateCollection Clone() const;

    MCAPI JsepCandidateCollection();

    MCAPI JsepCandidateCollection(::webrtc::JsepCandidateCollection&&);

    MCAPI uint64 remove(::cricket::Candidate const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::JsepCandidateCollection&&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
