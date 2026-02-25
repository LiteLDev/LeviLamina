#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyObject.h"

namespace OreUI::Experimental {

class SettingsGroupId : public ::OreUI::Experimental::PropertyObject<::OreUI::Experimental::SettingsGroupId> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsGroupId() /*override*/;
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
