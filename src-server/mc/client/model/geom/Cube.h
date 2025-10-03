#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Cube {
public:
    // Cube inner types declare
    // clang-format off
    struct FaceUVData;
    // clang-format on

    // Cube inner types define
    struct FaceUVData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk68de3d;
        ::ll::UntypedStorage<4, 8> mUnkb10f0f;
        ::ll::UntypedStorage<4, 4> mUnkc78cde;
        ::ll::UntypedStorage<1, 1> mUnkee67c0;
        ::ll::UntypedStorage<1, 1> mUnka56b04;
        // NOLINTEND

    public:
        // prevent constructor by default
        FaceUVData& operator=(FaceUVData const&);
        FaceUVData(FaceUVData const&);
        FaceUVData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnk62edb8;
    ::ll::UntypedStorage<4, 12>  mUnkd54296;
    ::ll::UntypedStorage<4, 12>  mUnka0dde3;
    ::ll::UntypedStorage<4, 12>  mUnk599c79;
    ::ll::UntypedStorage<8, 24>  mUnkab05b5;
    ::ll::UntypedStorage<4, 16>  mUnkec2385;
    ::ll::UntypedStorage<1, 1>   mUnk39bc74;
    ::ll::UntypedStorage<4, 144> mUnk1d9bae;
    // NOLINTEND

public:
    // prevent constructor by default
    Cube& operator=(Cube const&);
    Cube(Cube const&);
    Cube();
};
