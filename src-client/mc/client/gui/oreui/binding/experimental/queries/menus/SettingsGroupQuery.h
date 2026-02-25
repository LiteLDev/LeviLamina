#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/SettingsId.h"

// auto generated forward declare list
// clang-format off
struct ISettingsRegistry;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SettingsGroupQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::SettingsGroupQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::
            PropertyVector<::OreUI::Experimental::SettingsId, ::std::allocator<::OreUI::Experimental::SettingsId>>>
                                                                      mSettings;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISettingsRegistry>> mSettingsRegistry;
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
    MCAPI SettingsGroupQuery(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& groupId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& groupId);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
