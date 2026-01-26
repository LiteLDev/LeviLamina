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

    MCFOLD bool operator==(::mce::UUID const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canParse(::std::string_view in);

    MCAPI static ::mce::UUID fromString(::std::string_view in);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID& EMPTY();

    MCAPI static uint64& STRING_LENGTH();
    // NOLINTEND
};

} // namespace mce
