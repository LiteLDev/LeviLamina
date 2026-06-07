#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/profiler/ThreadFrameType.h"
#include "mc/platform/brstd/basic_cstring_view.h"

namespace Bedrock::Profile {

class ProfileThread {
public:
    // prevent constructor by default
    ProfileThread();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ProfileThread(
        ::brstd::basic_cstring_view<char, ::std::char_traits<char>> name,
        ::Core::Profile::ThreadFrameType                            frameType
    );

    MCNAPI ~ProfileThread();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::brstd::basic_cstring_view<char, ::std::char_traits<char>> name, ::Core::Profile::ThreadFrameType frameType);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Profile
