#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/versionless/detail/ColorBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

namespace SharedTypes {

struct Color255RGB : public ::Detail::ColorBase {
public:
    // prevent constructor by default
    Color255RGB();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Color255RGB(::mce::Color const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::Color const&);
    // NOLINTEND
};

} // namespace SharedTypes
