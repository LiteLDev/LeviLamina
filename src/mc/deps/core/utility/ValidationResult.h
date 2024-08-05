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
};

}; // namespace Util::ResourceUri
