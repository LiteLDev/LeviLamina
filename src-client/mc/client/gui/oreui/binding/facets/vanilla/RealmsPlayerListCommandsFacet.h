#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms { class RealmsPlayerList; }
namespace Realms { class RealmsPlayerManagement; }
// clang-format on

namespace OreUI {

class RealmsPlayerListCommandsFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsPlayerListCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerList>>       mRealmsPlayerList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::RealmsPlayerManagement>> mRealmsManagePlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsPlayerListCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsPlayerListCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsPlayerListCommandsFacet(
        ::std::shared_ptr<::Realms::RealmsPlayerList>       realmsPlayerList,
        ::std::shared_ptr<::Realms::RealmsPlayerManagement> realmsManagePlayer
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
    MCAPI void* $ctor(
        ::std::shared_ptr<::Realms::RealmsPlayerList>       realmsPlayerList,
        ::std::shared_ptr<::Realms::RealmsPlayerManagement> realmsManagePlayer
    );
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
