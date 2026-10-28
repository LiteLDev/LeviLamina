#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/services/catalog/store_filter/FilterSectionType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class SearchFilterToggleObject; }
// clang-format on

namespace OreUI {

class SearchFilterCollectionObject : public ::OreUI::PropertyObject<::OreUI::SearchFilterCollectionObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mPrefix;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::StoreFilter::FilterSectionType, ::StoreFilter::FilterSectionType>>
                                                              mSectionType;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mIsSingleSelect;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::SearchFilterToggleObject, ::OreUI::SearchFilterToggleObject>>
        mToggles;
    // NOLINTEND
};

} // namespace OreUI
