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
    ::ll::UntypedStorage<8, 32> mUnk14f448;
    ::ll::UntypedStorage<8, 64> mUnk610961;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockSpecifier& operator=(BlockSpecifier const&);
    BlockSpecifier(BlockSpecifier const&);
    BlockSpecifier();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockSpecifier(::SharedTypes::v1_20_60::BlockSpecifier&&);

    MCNAPI ::SharedTypes::v1_20_60::BlockSpecifier& operator=(::SharedTypes::v1_20_60::BlockSpecifier&&);

    MCNAPI ~BlockSpecifier();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_60::BlockSpecifier&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_60
