#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk3f7dc1;
    ::ll::UntypedStorage<8, 16> mUnk576cbb;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_20_20& operator=(ComponentItemData_v1_20_20 const&);
    ComponentItemData_v1_20_20(ComponentItemData_v1_20_20 const&);
    ComponentItemData_v1_20_20();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ComponentItemData_v1_20_20();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_20, ::ComponentItemData_v1_20_20, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
