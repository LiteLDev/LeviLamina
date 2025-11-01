#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/versionless/util/Identifier.h"
#include "mc/world/item/components/ComponentItemMenuCategoryData_v1_20_20.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct ComponentItemDescriptionData_v1_20_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<10>> mIdentifier;
    ::ll::TypedStorage<8, 64, ::std::optional<::ComponentItemMenuCategoryData_v1_20_20>> mCategory;
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
