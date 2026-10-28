#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class SearchFilterToggleObject : public ::OreUI::PropertyObject<::OreUI::SearchFilterToggleObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mTag;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mLabel;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                   mIsDefault;
    // NOLINTEND
};

} // namespace OreUI
