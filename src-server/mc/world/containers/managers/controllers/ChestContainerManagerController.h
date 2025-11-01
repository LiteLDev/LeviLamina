#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class ChestContainerManagerModel;
class ItemInstance;
struct SlotData;
// clang-format on

class ChestContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ChestContainerManagerModel>> mChestContainerManagerModel;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChestContainerManagerController() /*override*/ = default;

    // vIndex: 32
    virtual void _onItemAcquired(::ItemInstance const&, ::SlotData const&) /*override*/;

    // vIndex: 33
    virtual void _onItemPlaced(::ItemInstance const&, ::SlotData const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
