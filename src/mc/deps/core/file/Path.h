#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

namespace Core {

class Path : public ::Core::PathBuffer<::std::string> {
public:
    // prevent constructor by default
    Path();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit Path(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& rhs);
#endif

    MCAPI explicit Path(::Core::PathBuffer<::std::string> const& rhs);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::Path const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& rhs);
#endif

    MCFOLD void* $ctor(::Core::PathBuffer<::std::string> const& rhs);
    // NOLINTEND
};

} // namespace Core
