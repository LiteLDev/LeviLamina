#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/realms/RealmsManageMembersState.h"
#include "mc/client/realms/PlayerListState.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class PlayerInfoData; }
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
// clang-format on

namespace OreUI {

class RealmsPlayerListQuery : public ::OreUI::QueryBase<::OreUI::RealmsPlayerListQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerList>>       mRealmsPlayerList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerManagement>> mRealmsManagePlayer;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::PlayerInfoData, ::OreUI::PlayerInfoData>> mPlayerList;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::PlayerInfoData, ::OreUI::PlayerInfoData>>
                                                                                                        mBlockedPlayers;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::PlayerListState, ::Realms::PlayerListState>> mState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::PlayerListState, ::Realms::PlayerListState>> mBlocklistState;
    ::ll::TypedStorage<8, 592, ::OreUI::RealmsManageMembersState> mManageMembersState;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mPlayerListChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mBlockedPlayerListChangedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mRealmPlayerManagementSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>    mRealmPlayerManagementActionSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsPlayerListQuery(::OreUI::GameDependencies const& game);
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
