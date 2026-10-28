#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/server/commands/edu/SubscriptionType.h"

// auto generated forward declare list
// clang-format off
struct SubscriptionOffer;
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class SubscriptionInfo : public ::OreUI::PropertyObject<::OreUI::SubscriptionInfo> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::SubscriptionType, ::SubscriptionType>> mType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                             mIsTrialEligible;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mSubSku;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mProductSku;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mPlatformStoreId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>           mFriendlyId;
    // NOLINTEND

public:
    // prevent constructor by default
    SubscriptionInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    SubscriptionInfo(::SubscriptionOffer const& info, ::OreUI::Detail::IPropertyObject* parent, ::std::string name);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubscriptionOffer const& info, ::OreUI::Detail::IPropertyObject* parent, ::std::string name);
    // NOLINTEND
};

} // namespace OreUI
