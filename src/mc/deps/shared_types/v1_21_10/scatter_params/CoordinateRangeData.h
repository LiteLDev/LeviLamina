#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace SharedTypes::Legacy { struct ExpressionNode; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_10 {

struct CoordinateRangeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkf04142;
    ::ll::UntypedStorage<8, 56> mUnka51572;
    ::ll::UntypedStorage<4, 8>  mUnk287e9b;
    ::ll::UntypedStorage<4, 8>  mUnkc4ffa8;
    ::ll::UntypedStorage<8, 96> mUnk369b8d;
    // NOLINTEND

public:
    // prevent constructor by default
    CoordinateRangeData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CoordinateRangeData(::SharedTypes::v1_21_10::CoordinateRangeData&&);

    MCNAPI CoordinateRangeData(::SharedTypes::v1_21_10::CoordinateRangeData const&);

    MCNAPI ::SharedTypes::v1_21_10::CoordinateRangeData& operator=(::SharedTypes::v1_21_10::CoordinateRangeData&&);

    MCNAPI ::SharedTypes::v1_21_10::CoordinateRangeData& operator=(::SharedTypes::v1_21_10::CoordinateRangeData const&);

    MCNAPI ~CoordinateRangeData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void fromExpression(
        ::SharedTypes::v1_21_10::CoordinateRangeData& instance,
        ::SharedTypes::Legacy::ExpressionNode const&  expression
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_21_10::CoordinateRangeData&&);

    MCNAPI void* $ctor(::SharedTypes::v1_21_10::CoordinateRangeData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_10
