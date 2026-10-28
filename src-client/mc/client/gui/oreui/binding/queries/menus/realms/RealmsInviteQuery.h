#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
namespace OreUI { class InviteStatusData; }
namespace Realms { class RealmsPlayerList; }
// clang-format on

namespace OreUI {

class RealmsInviteQuery : public ::OreUI::QueryBase<::OreUI::RealmsInviteQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerList>> mPlayerListManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mRealmInviteListSubscriber;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::InviteStatusData, ::OreUI::InviteStatusData>>
        mInviteStates;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsInviteQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsInviteQuery(::OreUI::GameDependencies const& game);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND
};

} // namespace OreUI
