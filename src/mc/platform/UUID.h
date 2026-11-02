#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class UUID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, uint64[2]> Data;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::std::string asString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::UUID fromString(::std::string_view in);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::UUID& EMPTY();

    MCNAPI static uint64& STRING_LENGTH();
    // NOLINTEND
};

} // namespace mce
