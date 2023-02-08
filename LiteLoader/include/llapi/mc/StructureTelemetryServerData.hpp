/**
 * @file  StructureTelemetryServerData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTelemetryServerData.
 *
 */
class StructureTelemetryServerData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETELEMETRYSERVERDATA
public:
    class StructureTelemetryServerData& operator=(class StructureTelemetryServerData const &) = delete;
    StructureTelemetryServerData(class StructureTelemetryServerData const &) = delete;
#endif

public:
    /**
     * @hash   559776623
     * @symbol  ??0StructureTelemetryServerData\@\@QEAA\@XZ
     */
    MCAPI StructureTelemetryServerData();
    /**
     * @hash   -70514204
     * @symbol  ?hasBeenActivatedByRedstone\@StructureTelemetryServerData\@\@QEAA_NXZ
     */
    MCAPI bool hasBeenActivatedByRedstone();
    /**
     * @hash   150344387
     * @symbol  ?setHasBeenActivedByRedstone\@StructureTelemetryServerData\@\@QEAAXXZ
     */
    MCAPI void setHasBeenActivedByRedstone();

};