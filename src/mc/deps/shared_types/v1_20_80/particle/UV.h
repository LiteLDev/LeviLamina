#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/FlipBook.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct UV {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                     mWidth;
    ::ll::TypedStorage<4, 4, int>                                                     mHeight;
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mUVExpr;
    ::ll::TypedStorage<8, 96, ::std::array<::SharedTypes::Legacy::ExpressionNode, 2>> mUVSizeExpr;
    ::ll::TypedStorage<8, 184, ::std::optional<::SharedTypes::v1_20_80::FlipBook>>    mFlipBook;
    // NOLINTEND

public:
    // prevent constructor by default
    UV();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UV(::SharedTypes::v1_20_80::UV&&);

    MCAPI UV(::SharedTypes::v1_20_80::UV const&);

    MCAPI ::SharedTypes::v1_20_80::UV& operator=(::SharedTypes::v1_20_80::UV&&);

    MCAPI ::SharedTypes::v1_20_80::UV& operator=(::SharedTypes::v1_20_80::UV const&);

    MCAPI ~UV();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::UV&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::UV const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
