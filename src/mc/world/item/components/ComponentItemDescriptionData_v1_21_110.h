#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/world/item/components/ComponentItemMenuCategoryData_v1_21_110.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemDescriptionData_v1_21_110 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<10>>             mIdentifier;
    ::ll::TypedStorage<8, 56, ::ComponentItemMenuCategoryData_v1_21_110> mCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_21_110& operator=(ComponentItemDescriptionData_v1_21_110 const&);
    ComponentItemDescriptionData_v1_21_110(ComponentItemDescriptionData_v1_21_110 const&);
    ComponentItemDescriptionData_v1_21_110();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ComponentItemDescriptionData_v1_21_110& operator=(::ComponentItemDescriptionData_v1_21_110&&);

    MCAPI ~ComponentItemDescriptionData_v1_21_110();
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
