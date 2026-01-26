#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Accessor {
public:
    // Accessor inner types define
    enum class Type : int {
        Scalar = 0,
        Vec2   = 1,
        Vec3   = 2,
        Vec4   = 3,
        Mat2   = 4,
        Mat3   = 5,
        Mat4   = 6,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk14b49d;
    ::ll::UntypedStorage<4, 4>  mUnkd83c28;
    ::ll::UntypedStorage<4, 8>  mUnkdda367;
    ::ll::UntypedStorage<4, 4>  mUnkb58a01;
    ::ll::UntypedStorage<4, 4>  mUnka528a2;
    ::ll::UntypedStorage<4, 4>  mUnk372894;
    ::ll::UntypedStorage<8, 24> mUnk5902b9;
    ::ll::UntypedStorage<8, 24> mUnk1004cc;
    ::ll::UntypedStorage<8, 32> mUnk13f19d;
    ::ll::UntypedStorage<4, 4>  mUnkafde70;
    // NOLINTEND

public:
    // prevent constructor by default
    Accessor& operator=(Accessor const&);
    Accessor(Accessor const&);
    Accessor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::Json::Value serialize() const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace glTF
