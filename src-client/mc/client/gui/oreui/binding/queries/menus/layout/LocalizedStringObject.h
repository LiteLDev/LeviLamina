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

class LocalizedStringObject : public ::OreUI::PropertyObject<::OreUI::LocalizedStringObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalizedStringObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    LocalizedStringObject(::std::string const& name, ::OreUI::Detail::IPropertyObject* parent, ::std::string value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, ::OreUI::Detail::IPropertyObject* parent, ::std::string value);
    // NOLINTEND
};

} // namespace OreUI
