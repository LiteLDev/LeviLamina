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

class TradeTierQuery : public ::OreUI::QueryBase<::OreUI::TradeTierQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                              mTierName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mIsTierVisible;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                                       mIsTierUnlocked;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                                        mTradeOffers;
    ::ll::TypedStorage<4, 4, int>                                                             mTradeTier;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GameplayUI::GameplayUIContext>> mContext;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
