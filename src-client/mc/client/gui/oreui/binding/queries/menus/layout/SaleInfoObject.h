#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SaleInfoObject : public ::OreUI::PropertyObject<::OreUI::SaleInfoObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>           mSalePrice;
    ::ll::TypedStorage<8, 184, ::OreUI::Property<::std::optional<double>>>        mDiscount;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mStartDate;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mExpirationDate;
    // NOLINTEND
};

} // namespace OreUI
