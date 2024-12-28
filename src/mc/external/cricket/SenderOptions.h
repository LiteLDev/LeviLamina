#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cricket {

struct SenderOptions {
public:
    // prevent constructor by default
    SenderOptions& operator=(SenderOptions const&);
    SenderOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SenderOptions(::cricket::SenderOptions const&);

    MCAPI SenderOptions(::cricket::SenderOptions&&);

    MCAPI ::cricket::SenderOptions& operator=(::cricket::SenderOptions&&);

    MCAPI ~SenderOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cricket::SenderOptions const&);

    MCAPI void* $ctor(::cricket::SenderOptions&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cricket
