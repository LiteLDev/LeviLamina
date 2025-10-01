#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Identifier.h"
#include "mc/deps/shared_types/v1_19_40/item/ItemCategory.h"

struct ComponentItemDescriptionData_v1_20 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SharedTypes::Identifier<10>>                                               mIdentifier;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::v1_19_40::ItemCategory::CreativeItemCategory>> mCategory;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentItemDescriptionData_v1_20& operator=(ComponentItemDescriptionData_v1_20 const&);
    ComponentItemDescriptionData_v1_20(ComponentItemDescriptionData_v1_20 const&);
    ComponentItemDescriptionData_v1_20();

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::ComponentItemDescriptionData_v1_20& operator=(::ComponentItemDescriptionData_v1_20&&);

    MCAPI ~ComponentItemDescriptionData_v1_20();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
