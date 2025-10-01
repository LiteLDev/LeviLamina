#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersionConstant;
struct ComponentItemData_v1_20_50;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemData_v1_20_60 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96>  mUnk67765e;
    ::ll::UntypedStorage<8, 824> mUnkc88794;
    ::ll::UntypedStorage<8, 768> mUnkc81525;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemData_v1_20_60& operator=(ComponentItemData_v1_20_60 const&);
    ComponentItemData_v1_20_60(ComponentItemData_v1_20_60 const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentItemData_v1_20_60();

    MCAPI ~ComponentItemData_v1_20_60();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void moveDeprecatedData(::ComponentItemData_v1_20_50& oldData, ::ComponentItemData_v1_20_60& newData);

    MCAPI static void
    upgrade(::Puv::CerealUpgrader<::ComponentItemData_v1_20_50, ::ComponentItemData_v1_20_60, nullptr_t>& upgrader);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SemVersionConstant const& VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
