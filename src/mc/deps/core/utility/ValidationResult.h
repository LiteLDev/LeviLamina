#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util::ResourceUri {

struct ValidationResult {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UTIL_RESOURCEURI_VALIDATIONRESULT
public:
    ValidationResult& operator=(ValidationResult const&) = delete;
    ValidationResult(ValidationResult const&)            = delete;
    ValidationResult()                                   = delete;
#endif

public:
    /**
     * @symbol ?isSuccess\@ValidationResult\@ResourceUri\@Util\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const;
    /**
     * @symbol ??1ValidationResult\@ResourceUri\@Util\@\@QEAA\@XZ
     */
    MCAPI ~ValidationResult();
};

}; // namespace Util::ResourceUri
