#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

struct ValidationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkc85a4a;
    ::ll::UntypedStorage<4, 4>  mUnkbfca40;
    // NOLINTEND

public:
    // prevent constructor by default
    ValidationResult& operator=(ValidationResult const&);
    ValidationResult(ValidationResult const&);
    ValidationResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool isSuccess() const;

#ifdef LL_PLAT_C
    MCNAPI explicit operator bool() const;
#endif

    MCNAPI ~ValidationResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Util::ResourceUri
