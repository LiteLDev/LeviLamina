#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemDescriptionData_v1_21_110 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke4d61a;
    ::ll::UntypedStorage<8, 56> mUnkdcebc4;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_21_110& operator=(ComponentItemDescriptionData_v1_21_110 const&);
    ComponentItemDescriptionData_v1_21_110(ComponentItemDescriptionData_v1_21_110 const&);
    ComponentItemDescriptionData_v1_21_110();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ComponentItemDescriptionData_v1_21_110& operator=(::ComponentItemDescriptionData_v1_21_110&&);

    MCNAPI ~ComponentItemDescriptionData_v1_21_110();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
