#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class FilePath {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1024, char[1024]> m_filePath;
    // NOLINTEND

public:
    // prevent constructor by default
    FilePath();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FilePath(char const* _rhs);

    MCNAPI char const* get() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* _rhs);
    // NOLINTEND
};

} // namespace bx
