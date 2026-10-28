#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GameplayModelBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/containers/ContainerEnumName.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerItem; }
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

namespace OreUI {

class ContainerItemsGameplayModel
: public ::OreUI::Experimental::GameplayModelBase<::OreUI::ContainerItemsGameplayModel> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GameplayUI::ContainerItem>>                     mItems;
    ::ll::TypedStorage<1, 1, ::ContainerEnumName>                                             mContainerName;
    ::ll::TypedStorage<8, 8, uint64>                                                          mItemsHandle;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
