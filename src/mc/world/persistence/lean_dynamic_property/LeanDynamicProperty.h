#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace LeanDynamicProperty { struct String; }
// clang-format on

namespace LeanDynamicProperty {
// functions
// NOLINTBEGIN
MCNAPI ::std::variant<double, float, bool, ::std::string, ::Vec3>
delean(::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3> const& leanVariant);

MCNAPI ::std::variant<double, float, bool, ::LeanDynamicProperty::String, ::Vec3>
lean(::std::variant<double, float, bool, ::std::string, ::Vec3> const& variant);
// NOLINTEND

} // namespace LeanDynamicProperty
