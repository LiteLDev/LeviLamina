#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services::layout::model { struct Price; }
namespace OreUI { class SaleInfoObject; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class PriceObject : public ::OreUI::PropertyObject<::OreUI::PriceObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>, ::std::optional<int>>> mListPrice;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::SaleInfoObject>>                      mSaleInfo;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
        mCurrencyId;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>, ::std::optional<::std::string>>>
        mVirtualCurrencyType;
    // NOLINTEND

public:
    // prevent constructor by default
    PriceObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PriceObject(
        ::std::string const&                             name,
        ::OreUI::Detail::IPropertyObject*                parent,
        ::Bedrock::Services::layout::model::Price const& src
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                             name,
        ::OreUI::Detail::IPropertyObject*                parent,
        ::Bedrock::Services::layout::model::Price const& src
    );
    // NOLINTEND
};

} // namespace OreUI
