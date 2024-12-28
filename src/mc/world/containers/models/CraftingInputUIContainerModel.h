#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

class CraftingInputUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk781af5;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftingInputUIContainerModel& operator=(CraftingInputUIContainerModel const&);
    CraftingInputUIContainerModel(CraftingInputUIContainerModel const&);
    CraftingInputUIContainerModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~CraftingInputUIContainerModel() /*override*/;

    // vIndex: 22
    virtual int _getContainerOffset() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $_getContainerOffset() const;
    // NOLINTEND
};
