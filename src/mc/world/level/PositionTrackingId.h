#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PositionTrackingId {

public:
    // prevent constructor by default
    PositionTrackingId() = delete;

public:
    /**
     * @symbol ??0PositionTrackingId\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI PositionTrackingId(class PositionTrackingId&&); // NOLINT
    /**
     * @symbol ??0PositionTrackingId\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI PositionTrackingId(class PositionTrackingId const&); // NOLINT
    /**
     * @symbol ?fromTag\@PositionTrackingId\@\@QEAAXPEBVTag\@\@\@Z
     */
    MCAPI void fromTag(class Tag const*); // NOLINT
    /**
     * @symbol
     * ?getTag\@PositionTrackingId\@\@QEBA?AV?$unique_ptr\@VTag\@\@U?$default_delete\@VTag\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::unique_ptr<class Tag> getTag() const; // NOLINT
    /**
     * @symbol ??4PositionTrackingId\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class PositionTrackingId& operator=(class PositionTrackingId&&); // NOLINT
    /**
     * @symbol ??4PositionTrackingId\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class PositionTrackingId& operator=(class PositionTrackingId const&); // NOLINT
    /**
     * @symbol
     * ?toString\@PositionTrackingId\@\@QEBA?BV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const toString() const; // NOLINT
    /**
     * @symbol ?INVALID_ID\@PositionTrackingId\@\@2V1\@B
     */
    MCAPI static class PositionTrackingId const INVALID_ID; // NOLINT

    // protected:

protected:
    /**
     * @symbol ?sNextId\@PositionTrackingId\@\@1IA
     */
    MCAPI static unsigned int sNextId; // NOLINT
};
