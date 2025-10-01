#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemDescriptionData_v1_20_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaa7f11;
    ::ll::UntypedStorage<8, 64> mUnk8d8747;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_20_20& operator=(ComponentItemDescriptionData_v1_20_20 const&);
    ComponentItemDescriptionData_v1_20_20(ComponentItemDescriptionData_v1_20_20 const&);
    ComponentItemDescriptionData_v1_20_20();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ComponentItemDescriptionData_v1_20_20& operator=(::ComponentItemDescriptionData_v1_20_20&&);

    MCAPI ~ComponentItemDescriptionData_v1_20_20();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
