/**
 * @file  ContainerValidationSlotData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ContainerValidationSlotData.
 *
 */
struct ContainerValidationSlotData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CONTAINERVALIDATIONSLOTDATA
public:
    struct ContainerValidationSlotData& operator=(struct ContainerValidationSlotData const &) = delete;
    ContainerValidationSlotData(struct ContainerValidationSlotData const &) = delete;
#endif

public:
    /**
     * @symbol  ??0ContainerValidationSlotData\@\@QEAA\@XZ
     */
    MCAPI ContainerValidationSlotData();
    /**
     * @symbol  ??0ContainerValidationSlotData\@\@QEAA\@W4ContainerEnumName\@\@H\@Z
     */
    MCAPI ContainerValidationSlotData(enum class ContainerEnumName, int);
    /**
     * @symbol  ?matches\@ContainerValidationSlotData\@\@QEBA_NAEBU1\@\@Z
     */
    MCAPI bool matches(struct ContainerValidationSlotData const &) const;
    /**
     * @symbol  ?AUTOPLACE\@ContainerValidationSlotData\@\@2U1\@B
     */
    MCAPI static struct ContainerValidationSlotData const AUTOPLACE;

};