#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector.h"

// auto generated forward declare list
// clang-format off
namespace Puv::internal { struct PathElement; }
// clang-format on

namespace Puv::internal {

struct ScopedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk16802b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopedPath& operator=(ScopedPath const&);
    ScopedPath(ScopedPath const&);
    ScopedPath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI
    ScopedPath(::Bedrock::small_vector<::Puv::internal::PathElement, 1>& path, ::Puv::internal::PathElement point);

    MCNAPI ~ScopedPath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Bedrock::small_vector<::Puv::internal::PathElement, 1>& path, ::Puv::internal::PathElement point);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv::internal
