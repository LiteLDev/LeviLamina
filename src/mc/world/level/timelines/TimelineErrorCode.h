#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class TimelineErrorCode : int {
    NoKeyframes                      = 0,
    DuplicateKeyframeTicks           = 1,
    NoAttributeTracks                = 2,
    DuplicateAttributeTrackNames     = 3,
    NoAttributeLayerTrackName        = 4,
    PhasesWithInvalidPeriod          = 5,
    InvalidPhaseStartTick            = 6,
    DuplicatePhaseStartTick          = 7,
    DuplicatePhaseName               = 8,
    MissingDrivenPhaseForLayer       = 9,
    AttributeLayerTrackAlreadyExists = 10,
    TimeMarkerNotAdded               = 11,
    WorldClockNotFound               = 12,
};
