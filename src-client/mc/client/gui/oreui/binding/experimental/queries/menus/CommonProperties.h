#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/SettingsState.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI::Experimental {

struct CommonProperties {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>>                        mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>>                        mName;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::OreUI::Experimental::SettingsState>> mState;
    ::ll::TypedStorage<8, 208, ::OreUI::Experimental::Property<::std::optional<::std::string>>>       mDescription;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonProperties();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommonProperties(::std::string_view id, ::OreUI::Experimental::Detail::IPropertyObject* parent);

    MCAPI ~CommonProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view id, ::OreUI::Experimental::Detail::IPropertyObject* parent);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::Experimental
