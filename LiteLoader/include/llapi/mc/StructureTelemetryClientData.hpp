/**
 * @file  StructureTelemetryClientData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureTelemetryClientData.
 *
 */
class StructureTelemetryClientData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTURETELEMETRYCLIENTDATA
public:
    class StructureTelemetryClientData& operator=(class StructureTelemetryClientData const &) = delete;
    StructureTelemetryClientData(class StructureTelemetryClientData const &) = delete;
    StructureTelemetryClientData() = delete;
#endif

public:
    /**
     * @symbol  ?getMirrorEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getMirrorEditCount() const;
    /**
     * @symbol  ?getOffsetEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getOffsetEditCount() const;
    /**
     * @symbol  ?getRotationEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getRotationEditCount() const;
    /**
     * @symbol  ?getSizeEditCount\@StructureTelemetryClientData\@\@QEBAIXZ
     */
    MCAPI unsigned int getSizeEditCount() const;

};