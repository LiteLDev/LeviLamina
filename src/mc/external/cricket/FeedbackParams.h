#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class FeedbackParam; }
// clang-format on

namespace cricket {

class FeedbackParams {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk897465;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedbackParams& operator=(FeedbackParams const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Add(::cricket::FeedbackParam const&);

    MCAPI FeedbackParams();

    MCAPI FeedbackParams(::cricket::FeedbackParams const&);

    MCAPI bool Has(::cricket::FeedbackParam const&) const;

    MCAPI bool HasDuplicateEntries() const;

    MCAPI void Intersect(::cricket::FeedbackParams const&);

    MCAPI ~FeedbackParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cricket::FeedbackParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
