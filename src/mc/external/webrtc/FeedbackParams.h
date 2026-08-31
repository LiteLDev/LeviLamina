#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FeedbackParam; }
// clang-format on

namespace webrtc {

class FeedbackParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbc703d;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedbackParams& operator=(FeedbackParams const&);
    FeedbackParams();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeedbackParams(::webrtc::FeedbackParams const&);

    MCNAPI bool Has(::webrtc::FeedbackParam const& param) const;

    MCNAPI bool Remove(::webrtc::FeedbackParam const& param);

    MCNAPI bool operator==(::webrtc::FeedbackParams const& other) const;

    MCNAPI ~FeedbackParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FeedbackParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
