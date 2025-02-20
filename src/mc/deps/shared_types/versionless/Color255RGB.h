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
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Color255RGB(::mce::Color const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::mce::Color const&);
    // NOLINTEND
};

} // namespace SharedTypes
