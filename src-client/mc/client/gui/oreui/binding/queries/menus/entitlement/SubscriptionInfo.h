#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SubscriptionInfo : public ::OreUI::PropertyObject<::OreUI::SubscriptionInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>          mIsTrialEligible;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mSubSku;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mProductSku;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mPlatformStoreId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mFriendlyId;
    // NOLINTEND
};

} // namespace OreUI
