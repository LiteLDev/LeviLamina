#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct Degree : public ::type_safe::strong_typedef<::mce::Degree, float>,
                public ::type_safe::strong_typedef_op::equality_comparison<::mce::Degree>,
                public ::type_safe::strong_typedef_op::floating_point_arithmetic<::mce::Degree>,
                public ::type_safe::strong_typedef_op::input_operator<::mce::Degree>,
                public ::type_safe::strong_typedef_op::relational_comparison<::mce::Degree>,
                public ::type_safe::strong_typedef_op::output_operator<::mce::Degree> {};

} // namespace mce
