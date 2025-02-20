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
    MCAPI ScatterParamsData();

    MCAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCAPI ScatterParamsData(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCAPI ::SharedTypes::v1_21_10::ScatterParamsData& operator=(::SharedTypes::v1_21_10::ScatterParamsData&&);

    MCAPI ~ScatterParamsData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData const&);

    MCAPI void* $ctor(::SharedTypes::v1_21_10::ScatterParamsData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
