#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/SettingsType.h"

namespace OreUI::Experimental {

class SettingsId : public ::OreUI::Experimental::PropertyObject<::OreUI::Experimental::SettingsId> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>>                       mId;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::OreUI::Experimental::SettingsType>> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsId();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsId() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsId(::std::string_view id, ::OreUI::Experimental::SettingsType type);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string_view id, ::OreUI::Experimental::SettingsType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
