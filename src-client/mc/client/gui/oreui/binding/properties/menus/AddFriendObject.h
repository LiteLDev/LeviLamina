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
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mXuid;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamertag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mGamerIcon;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsOnline;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFollowingMe;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFollowedByMe;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFriendRequestReceived;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsFriendRequestSent;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mDescription;
    // NOLINTEND
};

} // namespace OreUI
