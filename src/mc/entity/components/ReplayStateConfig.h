#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ReplayStateMode.h"

struct ReplayStateConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk8ae014;
    ::ll::UntypedStorage<1, 1>  mUnke71cf2;
    ::ll::UntypedStorage<4, 4>  mUnkb7508c;
    ::ll::UntypedStorage<4, 4>  mUnk2b7499;
    // NOLINTEND

public:
    // prevent constructor by default
    ReplayStateConfig& operator=(ReplayStateConfig const&);
    ReplayStateConfig(ReplayStateConfig const&);
    ReplayStateConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ReplayStateConfig(::ReplayStateMode mode);

    MCAPI uint64 getSanitizedHistorySize() const;

    MCAPI void setReplayStateConfigThresholds(float baseThreshold);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ReplayStateMode mode);
    // NOLINTEND
};
