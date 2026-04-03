#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ExposedRouterLocation : public ::OreUI::PropertyObject<::OreUI::ExposedRouterLocation> {
public:
    // ExposedRouterLocation inner types define
    using Base = ::OreUI::PropertyObject<::OreUI::ExposedRouterLocation>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mPath;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mQuery;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>> mFragment;
    // NOLINTEND

public:
    // prevent constructor by default
    ExposedRouterLocation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ExposedRouterLocation() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ExposedRouterLocation(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string const&              path,
        ::std::string const&              query,
        ::std::string const&              fragment
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string const&              path,
        ::std::string const&              query,
        ::std::string const&              fragment
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
