#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetTaskTracker.h"
#include "mc/client/gui/screens/ProgressScreenNavigation.h"
#include "mc/client/world/JoinRealmWorldResult.h"
#include "mc/client/world/JoinServerWorldResult.h"

namespace OreUI {

struct NetworkWorldJoinerSharedData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinThirdPartyServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinExternalServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinFriendServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinServerWorldResult>> mJoinLANServerTask;
    ::ll::TypedStorage<4, 16, ::OreUI::FacetTaskTracker<::World::JoinRealmWorldResult>>  mJoinRealmTask;
    ::ll::TypedStorage<8, 104, ::ui::ProgressScreenNavigation>                           mProgressScreenNavigation;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkWorldJoinerSharedData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit NetworkWorldJoinerSharedData(::ui::ProgressScreenNavigation progressScreenNavigation);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ui::ProgressScreenNavigation progressScreenNavigation);
    // NOLINTEND
};

} // namespace OreUI
