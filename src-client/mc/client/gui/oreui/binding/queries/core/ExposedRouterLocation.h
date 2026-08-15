#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExposedRouterLocation : public ::OreUI::PropertyObject<::OreUI::ExposedRouterLocation> {
public:
    // ExposedRouterLocation inner types define
    using Base = ::OreUI::PropertyObject<::OreUI::ExposedRouterLocation>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mPath;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mQuery;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mFragment;
    // NOLINTEND

public:
    // prevent constructor by default
    ExposedRouterLocation();
};

} // namespace OreUI
