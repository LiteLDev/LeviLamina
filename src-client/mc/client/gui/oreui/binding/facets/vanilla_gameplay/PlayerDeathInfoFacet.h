#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
// clang-format on

namespace OreUI {

class PlayerDeathInfoFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::PlayerDeathInfoFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance const&> mClient;
    ::ll::TypedStorage<8, 32, ::std::string>           mCachedDeathInfo;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerDeathInfoFacet& operator=(PlayerDeathInfoFacet const&);
    PlayerDeathInfoFacet(PlayerDeathInfoFacet const&);
    PlayerDeathInfoFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
