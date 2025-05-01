#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SenderOptions {
public:
    // prevent constructor by default
    SenderOptions& operator=(SenderOptions const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SenderOptions(::cricket::SenderOptions const&);

    MCNAPI SenderOptions(::cricket::SenderOptions&&);

    MCNAPI ::cricket::SenderOptions& operator=(::cricket::SenderOptions&&);

    MCNAPI ~SenderOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cricket::SenderOptions const&);

    MCNAPI void* $ctor(::cricket::SenderOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
