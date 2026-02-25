#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct OpenAndCloseRealmManager; }
// clang-format on

namespace OreUI {

class OpenAndCloseRealmCommandsFacet : public ::OreUI::FacetBase<::OreUI::OpenAndCloseRealmCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::OpenAndCloseRealmManager>> mOpenAndCloseRealmManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~OpenAndCloseRealmCommandsFacet() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void closeRealm(int64 realmId);

    MCAPI void openRealm(int64 realmId);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
