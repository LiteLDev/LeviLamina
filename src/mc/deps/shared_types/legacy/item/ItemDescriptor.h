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
    ItemDescriptor& operator=(ItemDescriptor const&);
    ItemDescriptor(ItemDescriptor const&);
    ItemDescriptor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ItemDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy
