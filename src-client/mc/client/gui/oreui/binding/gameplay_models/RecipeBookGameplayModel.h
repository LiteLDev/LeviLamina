#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/gameplay/api/gameplayui/RecipeBookTab.h"
#include "mc/client/gui/oreui/GameplayModelBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
namespace GameplayUI { struct RecipeBookTabData; }
// clang-format on

namespace OreUI {

class RecipeBookGameplayModel : public ::OreUI::Experimental::GameplayModelBase<::OreUI::RecipeBookGameplayModel> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                            mIsAvailable;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsVisible;
    ::ll::TypedStorage<1, 1, bool>                                                            mIsFiltering;
    ::ll::TypedStorage<4, 4, ::GameplayUI::RecipeBookTab>                                     mSelectedTab;
    ::ll::TypedStorage<8, 24, ::std::vector<::GameplayUI::RecipeBookTabData>>                 mTabs;
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
