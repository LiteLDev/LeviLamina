/**
 * @file  StructureTelemetryServerData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ??0StructureTelemetryServerData\@\@QEAA\@XZ
     */
    MCAPI StructureTelemetryServerData();
    /**
     * @symbol  ?hasBeenActivatedByRedstone\@StructureTelemetryServerData\@\@QEAA_NXZ
     */
    MCAPI bool hasBeenActivatedByRedstone();
    /**
     * @symbol  ?setHasBeenActivedByRedstone\@StructureTelemetryServerData\@\@QEAAXXZ
     */
    MCAPI void setHasBeenActivedByRedstone();

};