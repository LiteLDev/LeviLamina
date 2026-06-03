#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class INIProperty; }
// clang-format on

namespace cereal {

struct INISection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                              name;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::cereal::INIProperty>> properties;
    // NOLINTEND
};

} // namespace cereal
