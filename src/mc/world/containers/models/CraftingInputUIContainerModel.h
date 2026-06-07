#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/containers/models/PlayerUIContainerModelBase.h"

// auto generated forward declare list
// clang-format off
class Player;
// clang-format on

class CraftingInputUIContainerModel : public ::PlayerUIContainerModelBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mWorkBench;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    CraftingInputUIContainerModel();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftingInputUIContainerModel() /*override*/ = default;

    virtual int _getContainerOffset() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI CraftingInputUIContainerModel(::ContainerEnumName containerName, ::Player& player, bool workBench);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::ContainerEnumName containerName, ::Player& player, bool workBench);
#endif
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
