#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"

namespace Puv::internal {

struct PathElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 144> mUnk4e5dd3;
    ::ll::UntypedStorage<4, 4>   mUnk38da85;
    ::ll::UntypedStorage<8, 32>  mUnk42ac2b;
    ::ll::UntypedStorage<4, 4>   mUnkec9b9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PathElement& operator=(PathElement const&);
    PathElement(PathElement const&);
    PathElement();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathElement(::Puv::internal::PathElement&&);

    MCNAPI PathElement(
        ::entt::meta_type                             metaType,
        uint                                          id,
        ::std::string                                 name,
        ::cereal::BasicSerializerContext::ContextType type
    );

    MCNAPI ~PathElement();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Puv::internal::PathElement&&);

    MCNAPI void*
    $ctor(::entt::meta_type metaType, uint id, ::std::string name, ::cereal::BasicSerializerContext::ContextType type);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
