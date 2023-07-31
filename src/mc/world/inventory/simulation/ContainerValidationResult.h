#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ContainerValidationResult {

public:
    // prevent constructor by default
    ContainerValidationResult& operator=(ContainerValidationResult const&) = delete;
    ContainerValidationResult()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ContainerValidationResult\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ContainerValidationResult(struct ContainerValidationResult const&);
    /**
     * @symbol ??0ContainerValidationResult\@\@QEAA\@W4ContainerValidationOutcome\@\@\@Z
     */
    MCAPI ContainerValidationResult(enum class ContainerValidationOutcome);
    /**
     * @symbol ?isSuccess\@ContainerValidationResult\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const;
    /**
     * @symbol
     * ?tryGetOperation\@ContainerValidationResult\@\@QEBAPEBUContainerValidationOperation\@\@W4ContainerValidationOperationType\@\@\@Z
     */
    MCAPI struct ContainerValidationOperation const* tryGetOperation(enum class ContainerValidationOperationType) const;
    /**
     * @symbol ??1ContainerValidationResult\@\@QEAA\@XZ
     */
    MCAPI ~ContainerValidationResult();
    // NOLINTEND
};
