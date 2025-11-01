#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/managers/controllers/ContainerManagerController.h"
#include "mc/world/item/CompoundContainerType.h"

// auto generated forward declare list
// clang-format off
class CraftableCompounds;
class LabTableContainerManagerModel;
// clang-format on

class LabTableContainerManagerController : public ::ContainerManagerController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::LabTableContainerManagerModel>> mModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftableCompounds>>           mCraftableCompounds;
    ::ll::TypedStorage<1, 1, ::CompoundContainerType>                           mResultContainer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LabTableContainerManagerController() /*override*/ = default;
    // NOLINTEND
};
