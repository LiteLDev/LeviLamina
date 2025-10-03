#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TargetPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4133f2;
    ::ll::UntypedStorage<8, 8>  mUnkdf9425;
    ::ll::UntypedStorage<8, 8>  mUnka8e7ea;
    ::ll::UntypedStorage<8, 8>  mUnk645c03;
    ::ll::UntypedStorage<8, 8>  mUnkd6aafb;
    ::ll::UntypedStorage<8, 8>  mUnkc74c6a;
    ::ll::UntypedStorage<8, 56> mUnk2c85b3;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetPoint& operator=(TargetPoint const&);
    TargetPoint(TargetPoint const&);
    TargetPoint();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    TargetPoint(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(float temperature, float humidity, float continentalness, float erosion, float depth, float weirdness);
    // NOLINTEND
};
