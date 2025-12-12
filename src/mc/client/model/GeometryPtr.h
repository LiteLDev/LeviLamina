#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class GeometryPtr {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk465477;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryPtr& operator=(GeometryPtr const&);
    GeometryPtr(GeometryPtr const&);
    GeometryPtr();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~GeometryPtr() = default;
#else // LL_PLAT_C
    virtual ~GeometryPtr();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::HashedString const& getName() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::GeometryPtr const& NONE();
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
