#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/store/services/BadgeType.h"

namespace OreUI {

class ActiveBadgeObject : public ::OreUI::PropertyObject<::OreUI::ActiveBadgeObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Property<
            ::std::optional<::Bedrock::Services::layout::model::BadgeType>,
            ::std::optional<::Bedrock::Services::layout::model::BadgeType>>>
        mType;
    // NOLINTEND
};

} // namespace OreUI
