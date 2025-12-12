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
    virtual ~CraftingInputUIContainerModel() /*override*/ = default;

    virtual int _getContainerOffset() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI int $_getContainerOffset() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
