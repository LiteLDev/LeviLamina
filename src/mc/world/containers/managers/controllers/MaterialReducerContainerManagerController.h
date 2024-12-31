#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
struct AutoPlaceItem;
struct AutoPlaceResult;
struct SlotData;
// clang-format on

class MaterialReducerContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkaa5bd6;
    ::ll::UntypedStorage<8, 8>  mUnk971750;
    ::ll::UntypedStorage<8, 8>  mUnk538b19;
    ::ll::UntypedStorage<1, 1>  mUnkaf4889;
    ::ll::UntypedStorage<8, 40> mUnk10894c;
    // NOLINTEND

public:
    // prevent constructor by default
    MaterialReducerContainerManagerController& operator=(MaterialReducerContainerManagerController const&);
    MaterialReducerContainerManagerController(MaterialReducerContainerManagerController const&);
    MaterialReducerContainerManagerController();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MaterialReducerContainerManagerController() /*override*/ = default;

    // vIndex: 27
    virtual bool isOutputSlot(::std::string const&) const /*override*/;

    // vIndex: 26
    virtual void closeContainers() /*override*/;

    // vIndex: 13
    virtual void handlePlaceOne(::SlotData const&, ::SlotData const&) /*override*/;

    // vIndex: 15
    virtual int
    handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/
        ;

    // vIndex: 20
    virtual bool handleSwap(::SlotData const&, ::SlotData const&) /*override*/;
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
