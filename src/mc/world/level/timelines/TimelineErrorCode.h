#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TimelineErrorCode : int {
    NoKeyframes                      = 0,
    DuplicateKeyframeTicks           = 1,
    InvalidKeyframeTick              = 2,
    NoAttributeTracks                = 3,
    DuplicateAttributeTrackNames     = 4,
    NoAttributeLayerTrackName        = 5,
    InvalidNoiseName                 = 6,
    PhasesWithInvalidPeriod          = 7,
    InvalidPhaseStartTick            = 8,
    DuplicatePhaseStartTick          = 9,
    DuplicatePhaseName               = 10,
    AttributeLayerTrackAlreadyExists = 11,
    TimeMarkerNotAdded               = 12,
    WorldClockNotFound               = 13,
};
