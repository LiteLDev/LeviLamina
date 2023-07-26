#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationResult {

public:
    // prevent constructor by default
    ContainerValidationResult& operator=(ContainerValidationResult const&) = delete;
    ContainerValidationResult()                                            = delete;

public:
    /**
     * @symbol ??0ContainerValidationResult\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ContainerValidationResult(struct ContainerValidationResult const&); // NOLINT
    /**
     * @symbol ??0ContainerValidationResult\@\@QEAA\@W4ContainerValidationOutcome\@\@\@Z
     */
    MCAPI ContainerValidationResult(enum class ContainerValidationOutcome); // NOLINT
    /**
     * @symbol ?isSuccess\@ContainerValidationResult\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const; // NOLINT
    /**
     * @symbol
     * ?tryGetOperation\@ContainerValidationResult\@\@QEBAPEBUContainerValidationOperation\@\@W4ContainerValidationOperationType\@\@\@Z
     */
    MCAPI struct ContainerValidationOperation const* tryGetOperation(enum class ContainerValidationOperationType
    ) const; // NOLINT
    /**
     * @symbol ??1ContainerValidationResult\@\@QEAA\@XZ
     */
    MCAPI ~ContainerValidationResult(); // NOLINT
};
