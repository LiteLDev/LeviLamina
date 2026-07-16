#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct GameplayUIContext; }
// clang-format on

namespace OreUI {

class AnvilQuery : public ::OreUI::QueryBase<::OreUI::AnvilQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCostText;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mCostSentiment;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mShouldCrossOutIconBeVisible;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mPreviewItemName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mHasInputItem;
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

    // NOLINTEND
};

} // namespace OreUI
