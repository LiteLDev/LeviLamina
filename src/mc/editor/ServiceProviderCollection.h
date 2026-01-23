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
        ::ll::UntypedStorage<8, 64> mUnk7d3e7a;
        ::ll::UntypedStorage<8, 64> mUnkf99a5e;
        ::ll::UntypedStorage<8, 16> mUnk69db61;
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

        MCNAPI pointer_struct(
            ::entt::meta_any&&                      any,
            ::std::function<bool(::entt::meta_any)> isValidFunc,
            ::std::shared_ptr<void>                 sharedWrapper
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::entt::meta_any&&                      any,
            ::std::function<bool(::entt::meta_any)> isValidFunc,
            ::std::shared_ptr<void>                 sharedWrapper
        );
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
    MCNAPI ::std::vector<::std::string> getServiceList() const;

    MCNAPI ~ServiceProviderCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor
