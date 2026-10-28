#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/models/LevelContainerManagerModel.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
// clang-format on

class DropperContainerManagerModel : public ::LevelContainerManagerModel {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DropperContainerManagerModel() /*override*/ = default;

    virtual ::ContainerScreenContext _postInit() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ContainerScreenContext $_postInit();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
