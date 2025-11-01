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
    MCNAPI void Add(::cricket::FeedbackParam const& param);

    MCNAPI FeedbackParams();

    MCNAPI FeedbackParams(::cricket::FeedbackParams const&);

    MCNAPI bool Has(::cricket::FeedbackParam const& param) const;

    MCNAPI bool HasDuplicateEntries() const;

    MCNAPI void Intersect(::cricket::FeedbackParams const& from);

    MCNAPI ~FeedbackParams();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cricket::FeedbackParams const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
