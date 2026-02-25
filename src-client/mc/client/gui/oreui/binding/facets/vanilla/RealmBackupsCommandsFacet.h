#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsBackups; }
// clang-format on

namespace OreUI {

class RealmBackupsCommandsFacet : public ::OreUI::FacetBase<::OreUI::RealmBackupsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsBackups>> mRealmsBackups;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmBackupsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearRealmBackupsState();

    MCAPI void downloadRealmWorld(::std::string const& realmId, ::std::string const& realmName, int activeSlotIndex);
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
