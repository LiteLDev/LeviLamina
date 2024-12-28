#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

namespace Bedrock::Resources {

class PreloadedPathHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka9cf92;
    ::ll::UntypedStorage<8, 16> mUnk40a8fb;
    // NOLINTEND

public:
    // prevent constructor by default
    PreloadedPathHandle& operator=(PreloadedPathHandle const&);
    PreloadedPathHandle(PreloadedPathHandle const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PreloadedPathHandle();

    MCAPI void forEach(::brstd::function_ref<void(::Core::Path const&)> callback) const;

    MCAPI explicit operator bool() const;

    MCAPI ~PreloadedPathHandle();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Resources
