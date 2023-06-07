/**
 * @file  ContainerValidationResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure ContainerValidationResult.
 *
 */
struct ContainerValidationResult {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONRESULT
public:
    struct ContainerValidationResult& operator=(struct ContainerValidationResult const &) = delete;
    ContainerValidationResult() = delete;
#endif

public:
    /**
     * @symbol ??0ContainerValidationResult\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ContainerValidationResult(struct ContainerValidationResult const &);
    /**
     * @symbol ??0ContainerValidationResult\@\@QEAA\@W4ContainerValidationOutcome\@\@\@Z
     */
    MCAPI ContainerValidationResult(enum class ContainerValidationOutcome);
    /**
     * @symbol ?isSuccess\@ContainerValidationResult\@\@QEBA_NXZ
     */
    MCAPI bool isSuccess() const;
    /**
     * @symbol ?tryGetOperation\@ContainerValidationResult\@\@QEBAPEBUContainerValidationOperation\@\@W4ContainerValidationOperationType\@\@\@Z
     */
    MCAPI struct ContainerValidationOperation const * tryGetOperation(enum class ContainerValidationOperationType) const;
    /**
     * @symbol ??1ContainerValidationResult\@\@QEAA\@XZ
     */
    MCAPI ~ContainerValidationResult();

};