#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsRolesAndPermissions; }
// clang-format on

namespace OreUI {

class RealmsRolesAndPermissionsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsRolesAndPermissionsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsRolesAndPermissions>> mRolesAndPermissions;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsRolesAndPermissionsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsRolesAndPermissionsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmsRolesAndPermissionsCommandsFacet(
        ::std::shared_ptr<::Realms::RealmsRolesAndPermissions> rolesAndPermissions
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::Realms::RealmsRolesAndPermissions> rolesAndPermissions);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
