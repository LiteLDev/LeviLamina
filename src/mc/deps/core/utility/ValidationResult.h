#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

struct ValidationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk225015;
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
    MCNAPI ~ValidationResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Util::ResourceUri
