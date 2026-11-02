#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SearchSortOptionObject : public ::OreUI::PropertyObject<::OreUI::SearchSortOptionObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int, int>>                     mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mLabel;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mTtsOverride;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mRequiresActiveSearch;
    // NOLINTEND
};

} // namespace OreUI
