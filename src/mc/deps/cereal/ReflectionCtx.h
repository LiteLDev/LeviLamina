#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/internal/ReflectionContext.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace cereal {

struct ReflectionCtx : public ::cereal::internal::ReflectionContext, public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    ReflectionCtx& operator=(ReflectionCtx const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReflectionCtx() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ReflectionCtx();

    MCAPI ReflectionCtx(::cereal::ReflectionCtx const&);

    MCAPI ::std::optional<::entt::type_info> getKnownPropertyType(::std::string_view name) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::cereal::ReflectionCtx& global();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cereal::ReflectionCtx const&);
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

} // namespace cereal
