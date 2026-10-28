#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/SocialPresence.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/social/RelationshipStatus.h"

namespace OreUI {

class GiftRecipientEligibilityFriendObject
: public ::OreUI::PropertyObject<::OreUI::GiftRecipientEligibilityFriendObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                     mGamerTag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                     mFriendId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>                     mGamerIcon;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::SocialPresence, ::OreUI::SocialPresence>> mPresence;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::RelationshipStatus, ::RelationshipStatus>>       mFavoriteStatus;
    // NOLINTEND
};

} // namespace OreUI
