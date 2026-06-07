#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Resources::Archive { class Reader; }
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Resources {

class PreloadedPathHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka9cf92;
    ::ll::UntypedStorage<8, 16> mUnk40a8fb;
    ::ll::UntypedStorage<8, 24> mUnk1003ec;
    // NOLINTEND

public:
    // prevent constructor by default
    PreloadedPathHandle& operator=(PreloadedPathHandle const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PreloadedPathHandle();

    MCNAPI PreloadedPathHandle(::Bedrock::Resources::PreloadedPathHandle const&);

    MCNAPI PreloadedPathHandle(
        ::Core::Path const&                                      root,
        ::std::shared_ptr<::Bedrock::Resources::Archive::Reader> backingObject
    );

    MCNAPI void forEach(::brstd::function_ref<void(::Core::Path const&)> callback) const;

    MCNAPI explicit operator bool() const;

    MCNAPI ~PreloadedPathHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Bedrock::Resources::PreloadedPathHandle const&);

    MCNAPI void*
    $ctor(::Core::Path const& root, ::std::shared_ptr<::Bedrock::Resources::Archive::Reader> backingObject);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Resources
