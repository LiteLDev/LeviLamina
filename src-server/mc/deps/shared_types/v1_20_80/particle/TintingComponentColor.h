#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct TintingComponentColor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk5fc71e;
    ::ll::UntypedStorage<8, 56> mUnk264d73;
    ::ll::UntypedStorage<8, 200> mUnk1a193d;
    // NOLINTEND

public:
    // prevent constructor by default
    TintingComponentColor(TintingComponentColor const&);
    TintingComponentColor();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SharedTypes::v1_20_80::TintingComponentColor& operator=(::SharedTypes::v1_20_80::TintingComponentColor const&);

    MCNAPI ::SharedTypes::v1_20_80::TintingComponentColor& operator=(::SharedTypes::v1_20_80::TintingComponentColor&&);

    MCNAPI ~TintingComponentColor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
