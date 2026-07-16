#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/realms/RealmsServerSettingsSliderData.h"
#include "mc/client/network/realms/RealmsServerMode.h"
#include "mc/client/network/realms/RealmsTier.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace Realms { class RealmsServerSettingsManager; }
// clang-format on

namespace OreUI {

class RealmsServerSettingsQuery : public ::OreUI::QueryBase<::OreUI::RealmsServerSettingsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Realms::RealmsServerSettingsManager>>
                                                                              mRealmsServerSettingsManager;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::RealmsServerMode>> mRealmsServerMode;
    ::ll::TypedStorage<8, 944, ::OreUI::RealmsServerSettingsSliderData>       mRealmsPlayerCount;
    ::ll::TypedStorage<8, 944, ::OreUI::RealmsServerSettingsSliderData>       mRealmsRenderDistance;
    ::ll::TypedStorage<8, 944, ::OreUI::RealmsServerSettingsSliderData>       mRealmsSimDistance;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::RealmsTier>>       mRealmsTier;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                mRealmsServerModeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsServerSettingsQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
