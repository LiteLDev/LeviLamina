#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/ExpressionNode.h"
#include "mc/deps/shared_types/v1_20_80/particle/FlipBook.h"

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

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    UV& operator=(UV const&);
    UV();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI UV(::SharedTypes::v1_20_80::UV&&);

    MCAPI UV(::SharedTypes::v1_20_80::UV const&);

    MCAPI bool operator==(::SharedTypes::v1_20_80::UV const&) const;

    MCAPI ~UV();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::SharedTypes::v1_20_80::UV&&);

    MCAPI void* $ctor(::SharedTypes::v1_20_80::UV const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
