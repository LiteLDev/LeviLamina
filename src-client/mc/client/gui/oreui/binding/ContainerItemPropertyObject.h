#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/ContainerItemBindings.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace GameplayUI { struct ContainerItem; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

struct ContainerItemPropertyObject : public ::OreUI::PropertyObject<::OreUI::ContainerItemPropertyObject>,
                                     public ::OreUI::ContainerItemBindings {
public:
    // prevent constructor by default
    ContainerItemPropertyObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ContainerItemPropertyObject(::OreUI::Detail::IPropertyObject* parent, ::GameplayUI::ContainerItem item);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Detail::IPropertyObject* parent, ::GameplayUI::ContainerItem item);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
