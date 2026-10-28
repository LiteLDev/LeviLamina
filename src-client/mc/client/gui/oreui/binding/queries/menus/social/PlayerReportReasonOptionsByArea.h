#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class PlayerReportOption; }
// clang-format on

namespace OreUI {

class PlayerReportReasonOptionsByArea : public ::OreUI::PropertyObject<::OreUI::PlayerReportReasonOptionsByArea> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int, int>> mReportArea;
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::PlayerReportOption, ::OreUI::PlayerReportOption>>
        mOptions;
    // NOLINTEND
};

} // namespace OreUI
