#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/SerializerContext.h"

namespace Puv::internal {

struct PathElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk4e5dd3;
    ::ll::UntypedStorage<4, 4>   mUnk38da85;
    ::ll::UntypedStorage<8, 32>  mUnk42ac2b;
    ::ll::UntypedStorage<4, 4>   mUnk24112f;
    // NOLINTEND

public:
    // prevent constructor by default
    PathElement& operator=(PathElement const&);
    PathElement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PathElement(::Puv::internal::PathElement const&);

    MCAPI PathElement(::Puv::internal::PathElement&&);

    MCAPI
    PathElement(::entt::meta_type metaType, uint id, ::std::string name, ::cereal::SerializerContext::ContextType type);

    MCAPI ~PathElement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Puv::internal::PathElement const&);

    MCAPI void* $ctor(::Puv::internal::PathElement&&);

    MCAPI void*
    $ctor(::entt::meta_type metaType, uint id, ::std::string name, ::cereal::SerializerContext::ContextType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
