#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct float4x4 {
public:
    // float4x4 inner types declare
    // clang-format off
    struct Matrix2DDecomposition;
    struct Matrix3DDecomposition;
    // clang-format on

    // float4x4 inner types define
    enum class MatKeys : int {
        // bitfield representation
        Sxx  = 0,
        Rz00 = 0,
        Ry00 = 0,
        Sx   = 0,
        Skx  = 1 << 0,
        Rz01 = 1 << 0,
        Syx  = 1 << 0,
        Ry02 = 1 << 1,
        Szx  = 1 << 1,
        Sky  = 1 << 2,
        Rz10 = 1 << 2,
        Sxy  = 1 << 2,
        Ry20 = 1 << 3,
        Sxz  = 1 << 3,
        Tx   = Syx | Szx,
        Syy  = Syx | Sxy,
        Rz11 = Syx | Sxy,
        Rx11 = Syx | Sxy,
        Sy   = Syx | Sxy,
        Szy  = Szx | Sxy,
        Rx12 = Szx | Sxy,
        Ty   = Syx | Szx | Sxy,
        Syz  = Syx | Sxz,
        Rx21 = Syx | Sxz,
        Szz  = Szx | Sxz,
        Ry22 = Szx | Sxz,
        Rx22 = Szx | Sxz,
        Sz   = Szx | Sxz,
        Tz   = Syx | Szx | Sxz,
    };

    struct Matrix2DDecomposition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnk863e52;
        ::ll::UntypedStorage<4, 8> mUnke887f2;
        ::ll::UntypedStorage<4, 4> mUnk2b44d2;
        ::ll::UntypedStorage<4, 4> mUnkef3837;
        ::ll::UntypedStorage<4, 4> mUnk4742ee;
        ::ll::UntypedStorage<4, 4> mUnk209f9a;
        ::ll::UntypedStorage<4, 4> mUnk2f2e67;
        // NOLINTEND

    public:
        // prevent constructor by default
        Matrix2DDecomposition& operator=(Matrix2DDecomposition const&);
        Matrix2DDecomposition(Matrix2DDecomposition const&);
        Matrix2DDecomposition();
    };

    struct Matrix3DDecomposition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk40be6a;
        ::ll::UntypedStorage<4, 4>  mUnk3de6bb;
        ::ll::UntypedStorage<4, 4>  mUnkd6d020;
        ::ll::UntypedStorage<4, 4>  mUnk713c56;
        ::ll::UntypedStorage<4, 16> mUnk5bfd74;
        ::ll::UntypedStorage<4, 12> mUnk4f05cf;
        ::ll::UntypedStorage<4, 16> mUnk4275b0;
        // NOLINTEND

    public:
        // prevent constructor by default
        Matrix3DDecomposition& operator=(Matrix3DDecomposition const&);
        Matrix3DDecomposition(Matrix3DDecomposition const&);
        Matrix3DDecomposition();
    };

public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::UntypedStorage<4, 4> mUnkb543fd;
            ::ll::UntypedStorage<4, 4> mUnk15ef97;
            ::ll::UntypedStorage<4, 4> mUnk25b5e7;
            ::ll::UntypedStorage<4, 4> mUnkb29c57;
            ::ll::UntypedStorage<4, 4> mUnk447a96;
            ::ll::UntypedStorage<4, 4> mUnk8c03e3;
            ::ll::UntypedStorage<4, 4> mUnk6e11d0;
            ::ll::UntypedStorage<4, 4> mUnk3cb748;
            ::ll::UntypedStorage<4, 4> mUnk491e3c;
            ::ll::UntypedStorage<4, 4> mUnk8dfb5f;
            ::ll::UntypedStorage<4, 4> mUnk8b3dcd;
            ::ll::UntypedStorage<4, 4> mUnk7f9c04;
            ::ll::UntypedStorage<4, 4> mUnkfb3b0f;
            ::ll::UntypedStorage<4, 4> mUnk99ef5f;
            ::ll::UntypedStorage<4, 4> mUnk99ff95;
            ::ll::UntypedStorage<4, 4> mUnka10934;
        };
        ::ll::UntypedStorage<4, 64> mUnk70f4a4;
        ::ll::UntypedStorage<4, 64> mUnk732da8;
    };
    // NOLINTEND

public:
    // prevent constructor by default
    float4x4& operator=(float4x4 const&);
    float4x4(float4x4 const&);
    float4x4();
};

} // namespace renoir
