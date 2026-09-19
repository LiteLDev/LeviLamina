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
    ::ll::TypedStorage<1, 1, bool>            mEnabled;
    ::ll::TypedStorage<8, 8, ::BlockReducer*> mBlockReducer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MaterialReducerInputContainerController() /*override*/ = default;

    virtual bool isItemAllowed(::ItemStackBase const& item) const /*override*/;
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
