#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/ContainerExpandStatus.h"
#include "mc/world/item/ItemInstance.h"

struct ExpandoModelElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ItemInstance const>  item;
    ::ll::TypedStorage<4, 4, ::ContainerExpandStatus> status;
    ::ll::TypedStorage<8, 32, ::std::string>          groupName;
    // NOLINTEND
};
