#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class NoiseCellInterpolator;
class OreVeinifierNoises;
class Vec3;
// clang-format on

class OreVeinifier {
public:
    // OreVeinifier inner types declare
    // clang-format off
    struct OreVein;
    // clang-format on

    // OreVeinifier inner types define
    struct OreVein {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkbe2c2e;
        ::ll::UntypedStorage<8, 8> mUnkcd69ba;
        ::ll::UntypedStorage<8, 8> mUnka3ea75;
        ::ll::UntypedStorage<4, 4> mUnk9d7896;
        ::ll::UntypedStorage<4, 4> mUnk995f17;
        // NOLINTEND

    public:
        // prevent constructor by default
        OreVein& operator=(OreVein const&);
        OreVein(OreVein const&);
        OreVein();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4100> mUnk6cd52e;
    ::ll::UntypedStorage<4, 4100> mUnk52114e;
    ::ll::UntypedStorage<4, 4100> mUnkb968ab;
    ::ll::UntypedStorage<8, 88>   mUnk93940d;
    ::ll::UntypedStorage<8, 88>   mUnkdf0cc2;
    ::ll::UntypedStorage<8, 88>   mUnkc22e16;
    ::ll::UntypedStorage<8, 8>    mUnk72e0a5;
    ::ll::UntypedStorage<8, 32>   mUnkd6dd49;
    ::ll::UntypedStorage<8, 32>   mUnke60d39;
    // NOLINTEND

public:
    // prevent constructor by default
    OreVeinifier& operator=(OreVeinifier const&);
    OreVeinifier(OreVeinifier const&);
    OreVeinifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OreVeinifier(::OreVeinifierNoises const& noiseSource);

    MCNAPI void fillNoiseAtPos(::Vec3 const& worldPos, int bufferIndex, float noiseValue);

    MCNAPI ::Block const* getVeinBlockOrFallback(::Vec3 worldPos, ::Block const* defaultBlock) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::OreVeinifierNoises const& noiseSource);
    // NOLINTEND
};
