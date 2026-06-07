#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/BasicLockbox.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class Mutex; }
// clang-format on

namespace ResourcePackPathLifetimeHelpers {

class ScopeDestroyedPath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk8207d4;
    ::ll::UntypedStorage<8, 16> mUnk199715;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeDestroyedPath& operator=(ScopeDestroyedPath const&);
    ScopeDestroyedPath(ScopeDestroyedPath const&);
    ScopeDestroyedPath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScopeDestroyedPath(
        ::Core::PathBuffer<::std::string> const& path,
        ::std::shared_ptr<::Bedrock::Threading::BasicLockbox<
            ::std::unordered_map<::std::string, ::std::weak_ptr<::ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>,
            ::Bedrock::Threading::Mutex>>        cacheContainer
    );

    MCNAPI ~ScopeDestroyedPath();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Core::PathBuffer<::std::string> const& path,
        ::std::shared_ptr<::Bedrock::Threading::BasicLockbox<
            ::std::unordered_map<::std::string, ::std::weak_ptr<::ResourcePackPathLifetimeHelpers::ScopeDestroyedPath>>,
            ::Bedrock::Threading::Mutex>>        cacheContainer
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ResourcePackPathLifetimeHelpers
