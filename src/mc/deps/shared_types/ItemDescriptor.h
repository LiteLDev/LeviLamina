#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::Legacy {

struct ItemDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7bb4fa;
    ::ll::UntypedStorage<2, 2>  mUnk2c5311;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemDescriptor(::SharedTypes::Legacy::ItemDescriptor const&);

    MCAPI ::SharedTypes::Legacy::ItemDescriptor& operator=(::SharedTypes::Legacy::ItemDescriptor const&);

    MCAPI ~ItemDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::Legacy::ItemDescriptor const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
