#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/realms/FetchStatus.h"
#include "mc/client/realms/PlayerPermission.h"
#include "mc/client/realms/PlayerRole.h"

namespace OreUI {

class PlayerInfoData : public ::OreUI::PropertyObject<::OreUI::PlayerInfoData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                           mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                           mGamerTag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                           mGamerIcon;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::PlayerPermission, ::Realms::PlayerPermission>> mPermission;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                                             mIsOnline;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                                             mIsInRealm;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64, int64>>                                           mLastSeenTime;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                                             mHasOptedIn;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::PlayerRole, ::Realms::PlayerRole>>             mRole;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Realms::FetchStatus, ::Realms::FetchStatus>> mFetchProfileStatus;
    // NOLINTEND
};

} // namespace OreUI
