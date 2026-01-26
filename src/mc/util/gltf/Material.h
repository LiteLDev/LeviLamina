#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace glTF {

struct Material {
public:
    // Material inner types define
    enum class AlphaMode : int {
        OpaqueMode = 0,
        Mask       = 1,
        Blend      = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk405b9b;
    ::ll::UntypedStorage<8, 16> mUnk9b9260;
    ::ll::UntypedStorage<8, 16> mUnk8e0bb7;
    ::ll::UntypedStorage<8, 16> mUnk460894;
    ::ll::UntypedStorage<4, 4>  mUnk5afaba;
    ::ll::UntypedStorage<8, 32> mUnked1f91;
    ::ll::UntypedStorage<4, 4>  mUnkc1f094;
    // NOLINTEND

public:
    // prevent constructor by default
    Material& operator=(Material const&);
    Material(Material const&);
    Material();

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
