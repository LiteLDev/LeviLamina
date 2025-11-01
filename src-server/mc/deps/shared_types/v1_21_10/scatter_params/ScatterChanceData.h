#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct ScatterChanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5a15ad;
    ::ll::UntypedStorage<4, 4> mUnk55abf5;
    ::ll::UntypedStorage<8, 56> mUnk111f8c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScatterChanceData& operator=(ScatterChanceData const&);
    ScatterChanceData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScatterChanceData(::SharedTypes::v1_21_10::ScatterChanceData const&);

    MCNAPI ScatterChanceData(::SharedTypes::v1_21_10::ScatterChanceData&&);

    MCNAPI ::SharedTypes::v1_21_10::ScatterChanceData& operator=(::SharedTypes::v1_21_10::ScatterChanceData&&);

    MCNAPI ~ScatterChanceData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterChanceData const&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::ScatterChanceData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
