#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace ResourcePackPathLifetimeHelpers { class ScopeDestroyedPath; }
// clang-format on

namespace ResourcePackPathLifetimeHelpers {

class ResourcePackPathCache {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7cbdf7;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePackPathCache& operator=(ResourcePackPathCache const&);
    ResourcePackPathCache(ResourcePackPathCache const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ResourcePackPathCache();

    MCNAPI ::std::shared_ptr<::ResourcePackPathLifetimeHelpers::ScopeDestroyedPath const>
    getOrAdd(::Core::PathBuffer<::std::string> const& path);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace ResourcePackPathLifetimeHelpers
