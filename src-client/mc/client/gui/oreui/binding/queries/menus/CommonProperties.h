#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

struct CommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                  mName;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::SettingsState>>         mState;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonProperties(::std::string_view id, ::OreUI::Detail::IPropertyObject* parent);

    MCAPI ~CommonProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view id, ::OreUI::Detail::IPropertyObject* parent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
