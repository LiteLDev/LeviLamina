#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class ItemStackBase;
// clang-format on

class MaterialReducerInputContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mEnabled;
    ::ll::TypedStorage<8, 8, ::BlockReducer*> mBlockReducer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MaterialReducerInputContainerController() /*override*/ = default;

    // vIndex: 3
    virtual bool isItemAllowed(::ItemStackBase const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
