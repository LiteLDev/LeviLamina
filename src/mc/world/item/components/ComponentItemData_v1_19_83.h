#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_19_83 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk14f68e;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_19_83& operator=(ComponentItemData_v1_19_83 const&);
    ComponentItemData_v1_19_83(ComponentItemData_v1_19_83 const&);
    ComponentItemData_v1_19_83();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ComponentItemData_v1_19_83();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
