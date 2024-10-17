#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

struct ValidationResult {
public:
    // prevent constructor by default
    ValidationResult& operator=(ValidationResult const&);
    ValidationResult(ValidationResult const&);
    ValidationResult();

public:
    // NOLINTBEGIN
    MCAPI bool isSuccess() const;

    MCAPI ~ValidationResult();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Util::ResourceUri
