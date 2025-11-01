#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/SlotData.h"
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"

// auto generated forward declare list
// clang-format off
class BlockReducer;
class CraftableCompounds;
class MaterialReducerContainerManagerModel;
struct AutoPlaceItem;
struct AutoPlaceResult;
// clang-format on

class MaterialReducerContainerManagerController : public ::ContainerManagerController {
public:
    // MaterialReducerContainerManagerController inner types define
    using ActionScope = ::gsl::final_action<::std::function<void()>>;
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::MaterialReducerContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableCompounds>> mCraftableCompounds;
    ::ll::TypedStorage<8, 8, ::BlockReducer*> mBlockReducer;
    ::ll::TypedStorage<1, 1, bool> mObservingContainers;
    ::ll::TypedStorage<8, 40, ::SlotData const> mCreatedItemOutputSlot;
    // NOLINTEND

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
    virtual int handleAutoPlace(::SlotData const&, int, ::std::vector<::AutoPlaceItem> const&, ::std::vector<::AutoPlaceResult>&) /*override*/;

    // vIndex: 20
    virtual bool handleSwap(::SlotData const&, ::SlotData const&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
