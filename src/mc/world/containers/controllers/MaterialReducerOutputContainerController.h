#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
// clang-format on

class MaterialReducerOutputContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkb69341;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerOutputContainerController& operator=(MaterialReducerOutputContainerController const&);
    MaterialReducerOutputContainerController(MaterialReducerOutputContainerController const&);
    MaterialReducerOutputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MaterialReducerOutputContainerController() /*override*/ = default;

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
