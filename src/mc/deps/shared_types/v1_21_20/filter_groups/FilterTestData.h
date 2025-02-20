#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct FilterTestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke8c975;
    ::ll::UntypedStorage<8, 48> mUnk666480;
    ::ll::UntypedStorage<8, 48> mUnk4003b3;
    ::ll::UntypedStorage<8, 48> mUnkc46ca6;
    ::ll::UntypedStorage<8, 48> mUnk6a2f0a;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterTestData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData const&);

    MCAPI ::SharedTypes::v1_21_20::FilterTestData& operator=(::SharedTypes::v1_21_20::FilterTestData&&);

    MCAPI ::SharedTypes::v1_21_20::FilterTestData& operator=(::SharedTypes::v1_21_20::FilterTestData const&);

    MCAPI ~FilterTestData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
