#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Core {

class Path : public ::Core::PathBuffer<::std::string> {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    Path();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit Path(::Core::PathBuffer<::std::string> const& rhs);
#endif
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
    MCFOLD void* $ctor(::Core::PathBuffer<::std::string> const& rhs);
#endif
    // NOLINTEND
};

} // namespace Core
