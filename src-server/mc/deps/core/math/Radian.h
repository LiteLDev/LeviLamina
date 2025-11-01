#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

struct Radian : public ::type_safe::strong_typedef<::mce::Radian, float>, public ::type_safe::strong_typedef_op::equality_comparison<::mce::Radian>, public ::type_safe::strong_typedef_op::relational_comparison<::mce::Radian>, public ::type_safe::strong_typedef_op::floating_point_arithmetic<::mce::Radian>, public ::type_safe::strong_typedef_op::input_operator<::mce::Radian>, public ::type_safe::strong_typedef_op::output_operator<::mce::Radian> {
};

}
