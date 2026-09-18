#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

namespace OreUI {

class ExperiencePlayerCountObject : public ::OreUI::PropertyObject<::OreUI::ExperiencePlayerCountObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>> mExperienceId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int64, int64>>                 mPlayerCount;
    // NOLINTEND
};

} // namespace OreUI
