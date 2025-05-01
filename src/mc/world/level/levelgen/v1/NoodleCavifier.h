#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NoiseCellInterpolator;
class NoodleCavifierNoises;
class Vec3;
// clang-format on

class NoodleCavifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>    mUnk68118f;
    ::ll::UntypedStorage<2, 2>    mUnka98d85;
    ::ll::UntypedStorage<8, 88>   mUnkd8ce48;
    ::ll::UntypedStorage<8, 88>   mUnk44f08f;
    ::ll::UntypedStorage<8, 88>   mUnk7d652b;
    ::ll::UntypedStorage<8, 88>   mUnk8526bd;
    ::ll::UntypedStorage<4, 4100> mUnk6e1419;
    ::ll::UntypedStorage<4, 4100> mUnk9eda1f;
    ::ll::UntypedStorage<4, 4100> mUnka76d48;
    ::ll::UntypedStorage<4, 4100> mUnk1997c2;
    // NOLINTEND

public:
    // prevent constructor by default
    NoodleCavifier& operator=(NoodleCavifier const&);
    NoodleCavifier(NoodleCavifier const&);
    NoodleCavifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NoodleCavifier(::NoodleCavifierNoises const& noises, short minWorldHeight);

    MCNAPI void fillNoiseAtPos(::Vec3 const& worldPos, int bufferIndex, float noiseValue);

    MCNAPI ::std::array<::NoiseCellInterpolator*, 4> getInterpolators(int blocksPerCellXZ, int blocksPerCellY);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NoodleCavifierNoises const& noises, short minWorldHeight);
    // NOLINTEND
};
