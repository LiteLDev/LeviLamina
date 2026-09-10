#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/ObservableValue.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

namespace OreUI {

class RefreshPolicyObject : public ::OreUI::PropertyObject<::OreUI::RefreshPolicyObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                  mMinRefreshDelayInSeconds;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>> mTimeToLiveInSeconds;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::std::string, ::std::allocator<::OreUI::Detail::ObservableValue<::std::string>>>>
        mEvents;
    // NOLINTEND
};

} // namespace OreUI
