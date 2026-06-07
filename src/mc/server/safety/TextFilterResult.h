#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

struct TextFilterResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2e782b;
    ::ll::UntypedStorage<8, 24> mUnk5bb2fe;
    ::ll::UntypedStorage<8, 24> mUnk44ec71;
    // NOLINTEND

public:
    // prevent constructor by default
    TextFilterResult& operator=(TextFilterResult const&);
    TextFilterResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TextFilterResult(::Safety::TextFilterResult const&);

    MCNAPI ~TextFilterResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Safety::TextFilterResult const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Safety
