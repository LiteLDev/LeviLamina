#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentItemMenuCategoryData_v1_21_60;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemMenuCategoryData_v1_21_110 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkd81378;
    ::ll::UntypedStorage<8, 40> mUnke8fd6c;
    ::ll::UntypedStorage<1, 2>  mUnk2591a3;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemMenuCategoryData_v1_21_110(ComponentItemMenuCategoryData_v1_21_110 const&);
    ComponentItemMenuCategoryData_v1_21_110();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ComponentItemMenuCategoryData_v1_21_110& operator=(::ComponentItemMenuCategoryData_v1_21_110&&);

    MCNAPI ::ComponentItemMenuCategoryData_v1_21_110& operator=(::ComponentItemMenuCategoryData_v1_21_110 const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static void
    upgrade(::ComponentItemMenuCategoryData_v1_21_60& oldData, ::ComponentItemMenuCategoryData_v1_21_110& newData);
    // NOLINTEND
};
