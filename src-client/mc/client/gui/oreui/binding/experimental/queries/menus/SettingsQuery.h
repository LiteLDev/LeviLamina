#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/SettingsGroupId.h"

// auto generated forward declare list
// clang-format off
struct ISettingsRegistry;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SettingsQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::SettingsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::SettingsGroupId,
            ::std::allocator<::OreUI::Experimental::SettingsGroupId>>>
                                                                      mSettingsGroups;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISettingsRegistry>> mSettingsRegistry;
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
    MCAPI explicit SettingsQuery(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
