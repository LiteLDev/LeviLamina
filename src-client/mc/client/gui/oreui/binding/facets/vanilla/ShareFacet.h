#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/ServiceReference.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
// clang-format on

namespace OreUI {

class ShareFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ShareFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::ServiceReference<::AppPlatform>> mAppPlatform;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShareFacet();

    MCNAPI bool isShareSupported() const;

    MCNAPI void share(::std::string const& shareTitle, ::std::string const& shareText, ::std::string const& shareUri);

    MCNAPI void
    shareFile(::std::string const& shareTitle, ::std::string const& shareText, ::std::string const& filePath);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
