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

class AnvilGameplayModel : public ::OreUI::Experimental::GameplayModelBase<::OreUI::AnvilGameplayModel> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mCostText;
    ::ll::TypedStorage<8, 32, ::std::string> mCostSentiment;
    ::ll::TypedStorage<1, 1, bool>           mShouldCrossOutIconBeVisible;
    ::ll::TypedStorage<8, 32, ::std::string> mPreviewItemName;
    ::ll::TypedStorage<1, 1, bool>           mHasInputItem;
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
