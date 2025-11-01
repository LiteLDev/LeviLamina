#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Direction {
public:
    // Direction inner types define
    enum class Type : uchar {
        South = 0,
        West = 1,
        North = 2,
        East = 3,
        Undefined = 255,
    };
    
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Direction::Type getDirection(float xd, float zd);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> DIRECTION_COUNTER_CLOCKWISE();

    MCNAPI static ::std::array<uchar, 4> const& DIRECTION_FACING();

    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> DIRECTION_OPPOSITE();

    MCNAPI static ::std::add_lvalue_reference_t<::Direction::Type const[]> FACING_DIRECTION();

    MCNAPI static ::std::unordered_map<::std::string, ::Direction::Type> const& FROM_STRING_MAP();

    MCNAPI static ::std::add_lvalue_reference_t<uchar[][6]> RELATIVE_DIRECTION_FACING();

    MCNAPI static ::std::add_lvalue_reference_t<int const[]> STEP_X();

    MCNAPI static ::std::add_lvalue_reference_t<int const[]> STEP_Z();

    MCNAPI static ::std::unordered_map<uint, ::std::string> const& TO_STRING_MAP();
    // NOLINTEND

};
