#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

namespace Core {

class Path : public ::Core::PathBuffer<::std::string> {
public:
    // prevent constructor by default
    Path();

public:
    // member functions
    // NOLINTBEGIN
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
    MCFOLD void* $ctor(::Core::PathBuffer<::std::string> const& rhs);
    // NOLINTEND
};

} // namespace Core
