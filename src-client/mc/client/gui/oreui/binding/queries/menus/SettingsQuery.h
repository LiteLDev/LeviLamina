#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class SettingsGroupId; }
namespace Settings { struct IRegistry; }
// clang-format on

namespace OreUI {

class SettingsQuery : public ::OreUI::QueryBase<::OreUI::SettingsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::SettingsGroupId, ::std::allocator<::OreUI::SettingsGroupId>>>
                                                                        mSettingsGroups;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IRegistry>> mSettingsRegistry;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SettingsQuery(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
