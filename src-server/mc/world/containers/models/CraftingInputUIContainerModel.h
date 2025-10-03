#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

class CraftingInputUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mWorkBench;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~CraftingInputUIContainerModel() /*override*/ = default;

    // vIndex: 22
    virtual int _getContainerOffset() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
