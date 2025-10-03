#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class PathArgument; }
// clang-format on

namespace Json {

class Path {
public:
    // Path inner types define
    using InArgs = ::std::vector<::Json::PathArgument const*>;

    using Args = ::std::vector<::Json::PathArgument>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::Json::PathArgument>> args_;
    // NOLINTEND
};

} // namespace Json
