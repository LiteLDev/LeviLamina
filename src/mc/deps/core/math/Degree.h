#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Radian; }
// clang-format on

namespace mce {

struct Degree : public ::type_safe::strong_typedef<::mce::Degree, float>,
                public ::type_safe::strong_typedef_op::equality_comparison<::mce::Degree>,
                public ::type_safe::strong_typedef_op::relational_comparison<::mce::Degree>,
                public ::type_safe::strong_typedef_op::floating_point_arithmetic<::mce::Degree>,
                public ::type_safe::strong_typedef_op::input_operator<::mce::Degree>,
                public ::type_safe::strong_typedef_op::output_operator<::mce::Degree> {
public:
    // prevent constructor by default
    Degree& operator=(Degree const&);
    Degree(Degree const&);
    Degree();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Degree(::mce::Radian rad);

    MCAPI float const& asFloat() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::Radian rad);
    // NOLINTEND
};

} // namespace mce
