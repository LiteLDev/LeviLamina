#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI::Experimental {

class ExposedRouterLocation
: public ::OreUI::Experimental::PropertyObject<::OreUI::Experimental::ExposedRouterLocation> {
public:
    // ExposedRouterLocation inner types define
    using Base = ::OreUI::Experimental::PropertyObject<::OreUI::Experimental::ExposedRouterLocation>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mPath;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mQuery;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mFragment;
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
        ::OreUI::Experimental::Detail::IPropertyObject* parent,
        ::std::string const&                            path,
        ::std::string const&                            query,
        ::std::string const&                            fragment
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Experimental::Detail::IPropertyObject* parent,
        ::std::string const&                            path,
        ::std::string const&                            query,
        ::std::string const&                            fragment
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

} // namespace OreUI::Experimental
