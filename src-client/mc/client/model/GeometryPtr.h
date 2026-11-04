#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GeometryGroup;
class GeometryInfo;
class HashedString;
// clang-format on

class GeometryPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::GeometryInfo>> mGeometryInfoPtr;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryPtr();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeometryPtr();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeometryPtr(::GeometryGroup& group, ::HashedString const& name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::GeometryPtr const& NONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::GeometryGroup& group, ::HashedString const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
