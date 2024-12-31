#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class MaterialReducerInputContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkdd30df;
    ::ll::UntypedStorage<8, 8> mUnk8dc168;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerInputContainerController& operator=(MaterialReducerInputContainerController const&);
    MaterialReducerInputContainerController(MaterialReducerInputContainerController const&);
    MaterialReducerInputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MaterialReducerInputContainerController() /*override*/ = default;

    // vIndex: 3
    virtual bool isItemAllowed(::ItemStackBase const&) const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
