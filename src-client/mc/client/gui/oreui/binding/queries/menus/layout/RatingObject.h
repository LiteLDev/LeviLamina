#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class RatingObject : public ::OreUI::PropertyObject<::OreUI::RatingObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::OreUI::Property<::std::optional<double>>> mAverage;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>    mTotalCount;
    // NOLINTEND
};

} // namespace OreUI
