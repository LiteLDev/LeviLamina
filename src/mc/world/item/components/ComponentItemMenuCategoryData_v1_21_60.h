#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ComponentItemMenuCategoryData_v1_20_20;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemMenuCategoryData_v1_21_60 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkdcc77b;
    ::ll::UntypedStorage<8, 40> mUnkb8de49;
    ::ll::UntypedStorage<1, 2>  mUnk94d681;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemMenuCategoryData_v1_21_60(ComponentItemMenuCategoryData_v1_21_60 const&);
    ComponentItemMenuCategoryData_v1_21_60();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ComponentItemMenuCategoryData_v1_21_60& operator=(::ComponentItemMenuCategoryData_v1_21_60 const&);

    MCAPI ::ComponentItemMenuCategoryData_v1_21_60& operator=(::ComponentItemMenuCategoryData_v1_21_60&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static void upgrade(
        ::std::optional<::ComponentItemMenuCategoryData_v1_20_20>& oldData,
        ::ComponentItemMenuCategoryData_v1_21_60&                  newData
    );
    // NOLINTEND
};
