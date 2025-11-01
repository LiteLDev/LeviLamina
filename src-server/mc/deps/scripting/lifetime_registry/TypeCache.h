#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::internal {

class TypeCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk8409a9;
    // NOLINTEND

public:
    // prevent constructor by default
    TypeCache& operator=(TypeCache const&);
    TypeCache(TypeCache const&);
    TypeCache();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::meta_type const& cacheType(::entt::meta_type&& type);

    MCNAPI ~TypeCache();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
