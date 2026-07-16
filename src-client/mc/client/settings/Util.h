#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Settings { struct LocStringData; }
// clang-format on

namespace Settings::DataProvider::Util {
// functions
// NOLINTBEGIN
MCAPI ::std::string getValue(
    ::std::variant<::std::string, ::std::function<::std::string()>, ::Settings::LocStringData> const& stringSource
);
// NOLINTEND

} // namespace Settings::DataProvider::Util
