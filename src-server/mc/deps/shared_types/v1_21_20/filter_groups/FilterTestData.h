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
    FilterTestData& operator=(FilterTestData const&);
    FilterTestData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FilterTestData(::SharedTypes::v1_21_20::FilterTestData const&);

    MCNAPI ::SharedTypes::v1_21_20::FilterTestData& operator=(::SharedTypes::v1_21_20::FilterTestData&&);

    MCNAPI ~FilterTestData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_20::FilterTestData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
