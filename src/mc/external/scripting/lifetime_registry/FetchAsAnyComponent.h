#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/ObjectHandleValue.h"
#include "mc/external/scripting/lifetime_registry/RetrievedHandleType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ObjectHandle; }
// clang-format on

namespace Scripting::internal {

struct FetchAsAnyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkbd99bb;
    ::ll::UntypedStorage<8, 8>   mUnk61772f;
    ::ll::UntypedStorage<1, 1>   mUnk1ac527;
    ::ll::UntypedStorage<8, 144> mUnkd609ac;
    ::ll::UntypedStorage<4, 4>   mUnk741c56;
    ::ll::UntypedStorage<1, 1>   mUnk3363e8;
    // NOLINTEND

public:
    // prevent constructor by default
    FetchAsAnyComponent& operator=(FetchAsAnyComponent const&);
    FetchAsAnyComponent(FetchAsAnyComponent const&);
    FetchAsAnyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FetchAsAnyComponent(::Scripting::internal::FetchAsAnyComponent&&);

    MCAPI FetchAsAnyComponent(
        ::entt::meta_any (*fetchFunction_)(
            ::entt::basic_registry<::Scripting::ObjectHandleValue>&,
            ::Scripting::ObjectHandleValue
        ),
        ::entt::
            meta_any (*typedHandleFunction_)(::Scripting::ObjectHandle, ::Scripting::RetrievedHandleType, ::std::variant<::std::monostate, ::Scripting::LifetimeRegistry*>&&),
        bool              isTrackedPointer_,
        ::entt::meta_type refType_,
        uint              size_,
        bool              customFn_
    );

    MCAPI ~FetchAsAnyComponent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scripting::internal::FetchAsAnyComponent&&);

    MCAPI void* $ctor(
        ::entt::meta_any (*fetchFunction_)(
            ::entt::basic_registry<::Scripting::ObjectHandleValue>&,
            ::Scripting::ObjectHandleValue
        ),
        ::entt::
            meta_any (*typedHandleFunction_)(::Scripting::ObjectHandle, ::Scripting::RetrievedHandleType, ::std::variant<::std::monostate, ::Scripting::LifetimeRegistry*>&&),
        bool              isTrackedPointer_,
        ::entt::meta_type refType_,
        uint              size_,
        bool              customFn_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting::internal
