#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor {

class ServiceProviderCollection {
public:
    // ServiceProviderCollection inner types declare
    // clang-format off
    struct pointer_struct;
    // clang-format on

    // ServiceProviderCollection inner types define
    struct pointer_struct {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 192> mUnk7d3e7a;
        ::ll::UntypedStorage<8, 64>  mUnkf99a5e;
        // NOLINTEND

    public:
        // prevent constructor by default
        pointer_struct& operator=(pointer_struct const&);
        pointer_struct(pointer_struct const&);
        pointer_struct();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::entt::meta_any deref_as_ref();

        MCNAPI bool isValid();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc627de;
    // NOLINTEND

public:
    // prevent constructor by default
    ServiceProviderCollection& operator=(ServiceProviderCollection const&);
    ServiceProviderCollection(ServiceProviderCollection const&);
    ServiceProviderCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ServiceProviderCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
