#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/GameplayModelBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

namespace OreUI {

class ContainerGameplayModel : public ::OreUI::Experimental::GameplayModelBase<::OreUI::ContainerGameplayModel> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                                  mColorMode;
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
