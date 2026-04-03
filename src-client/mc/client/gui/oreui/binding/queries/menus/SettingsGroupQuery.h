#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class SettingsId; }
namespace Settings { struct IRegistry; }
// clang-format on

namespace OreUI {

class SettingsGroupQuery : public ::OreUI::QueryBase<::OreUI::SettingsGroupQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 120, ::OreUI::PropertyVector<::OreUI::SettingsId, ::std::allocator<::OreUI::SettingsId>>>
                                                                        mSettings;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IRegistry>> mSettingsRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsGroupQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsGroupQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsGroupQuery(::OreUI::ClientDependencies const& client, ::std::string const& groupId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::std::string const& groupId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
