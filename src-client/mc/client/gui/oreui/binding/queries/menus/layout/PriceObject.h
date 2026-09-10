#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class SaleInfoObject; }
// clang-format on

namespace OreUI {

class PriceObject : public ::OreUI::PropertyObject<::OreUI::PriceObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>           mListPrice;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::SaleInfoObject>>          mSaleInfo;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mCurrencyId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mVirtualCurrencyType;
    // NOLINTEND
};

} // namespace OreUI
