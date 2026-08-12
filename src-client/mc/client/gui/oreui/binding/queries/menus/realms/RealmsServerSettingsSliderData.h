#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/network/realms/ServerSettings.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class RealmsServerSettingsSliderData : public ::OreUI::PropertyObject<::OreUI::RealmsServerSettingsSliderData> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> min;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> max;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> defaultValue;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>> current;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsServerSettingsSliderData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsServerSettingsSliderData(
        ::std::string                                name,
        ::OreUI::Detail::IPropertyObject*            parent,
        ::Realms::ServerSettings::SliderValue const& values
    );

    MCAPI void update(::Realms::ServerSettings::SliderValue const& values);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
