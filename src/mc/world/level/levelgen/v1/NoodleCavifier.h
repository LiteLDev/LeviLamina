#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/MultidimensionalArray.h"
#include "mc/world/level/levelgen/v1/NoiseCellInterpolator.h"

// auto generated forward declare list
// clang-format off
class NoodleCavifierNoises;
class Vec3;
// clang-format on

class NoodleCavifier {
public:
    // NoodleCavifier inner types define
    using InterpolatorArray = ::std::array<::NoiseCellInterpolator*, 4>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::NoodleCavifierNoises const&>                     mNoises;
    ::ll::TypedStorage<2, 2, short const>                                       mNoodlesMinHeight;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mToggleInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mThicknessInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mRidgeAInterpolator;
    ::ll::TypedStorage<8, 88, ::NoiseCellInterpolator>                          mRidgeBInterpolator;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mToggleNoiseBuffer;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mThicknessNoiseBuffer;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mRidgeANoiseBuffer;
    ::ll::TypedStorage<4, 4100, ::Util::MultidimensionalArray<float, 5, 5, 41>> mRidgeBNoiseBuffer;
    // NOLINTEND

public:
    // prevent constructor by default
    NoodleCavifier& operator=(NoodleCavifier const&);
    NoodleCavifier(NoodleCavifier const&);
    NoodleCavifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void fillNoiseAtPos(::Vec3 const& worldPos, int bufferIndex, float noiseValue);
    // NOLINTEND
};
