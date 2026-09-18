#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class AddFriendObject : public ::OreUI::PropertyObject<::OreUI::AddFriendObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mGamertag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mGamerIcon;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsOnline;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsFollowingMe;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsFollowedByMe;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsFriend;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsFriendRequestReceived;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsFriendRequestSent;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mDescription;
    // NOLINTEND
};

} // namespace OreUI
