#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct ScatterParamsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnkf00ebd;
    ::ll::UntypedStorage<8, 72>  mUnk5514db;
    ::ll::UntypedStorage<4, 4>   mUnkf0f0dd;
    ::ll::UntypedStorage<8, 176> mUnk9d0ec6;
    ::ll::UntypedStorage<8, 176> mUnkf59f65;
    ::ll::UntypedStorage<8, 176> mUnk38631a;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScatterParamsData();

    MCNAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCNAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCNAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCNAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCNAPI ~ScatterParamsData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
