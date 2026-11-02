#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Settings::FactoryUtil {

struct TagFunction {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::string> execute(::std::string const& tag);
    // NOLINTEND
};

} // namespace Settings::FactoryUtil
