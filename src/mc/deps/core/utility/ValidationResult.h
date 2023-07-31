#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

struct ValidationResult {

public:
    // prevent constructor by default
    ValidationResult& operator=(ValidationResult const&) = delete;
    ValidationResult(ValidationResult const&)            = delete;
    ValidationResult()                                   = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?isSuccess\@ValidationResult\@ResourceUri\@Util\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const;
    /**
     * @symbol ??1ValidationResult\@ResourceUri\@Util\@\@QEAA\@XZ
     */
    MCAPI ~ValidationResult();
    // NOLINTEND
};

}; // namespace Util::ResourceUri
