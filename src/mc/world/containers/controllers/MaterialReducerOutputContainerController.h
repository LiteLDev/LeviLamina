#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/controllers/ContainerController.h"

// auto generated forward declare list
// clang-format off
class ContainerModel;
class ItemStackBase;
// clang-format on

class MaterialReducerOutputContainerController : public ::ContainerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIsItemAllowed;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerOutputContainerController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaterialReducerOutputContainerController() /*override*/ = default;

    virtual bool isItemAllowed(::ItemStackBase const& item) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit MaterialReducerOutputContainerController(::std::shared_ptr<::ContainerModel> containerModel);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::shared_ptr<::ContainerModel> containerModel);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $isItemAllowed(::ItemStackBase const& item) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
