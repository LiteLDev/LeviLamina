#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_60 {

struct BlockSpecifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke18c0f;
    ::ll::UntypedStorage<8, 64> mUnkbc3a4b;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSpecifier();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockSpecifier(::SharedTypes::v1_20_60::BlockSpecifier const&);

    MCAPI BlockSpecifier(::SharedTypes::v1_20_60::BlockSpecifier&&);

    MCAPI ::SharedTypes::v1_20_60::BlockSpecifier& operator=(::SharedTypes::v1_20_60::BlockSpecifier const&);

    MCAPI ::SharedTypes::v1_20_60::BlockSpecifier& operator=(::SharedTypes::v1_20_60::BlockSpecifier&&);

    MCAPI ~BlockSpecifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_60::BlockSpecifier const&);

    MCAPI void* $ctor(::SharedTypes::v1_20_60::BlockSpecifier&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
