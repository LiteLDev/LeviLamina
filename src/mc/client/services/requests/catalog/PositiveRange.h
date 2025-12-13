#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace catalog {

class PositiveRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk5538c5;
    ::ll::UntypedStorage<4, 4> mUnk3f805f;
    // NOLINTEND

public:
    // prevent constructor by default
    PositiveRange& operator=(PositiveRange const&);
    PositiveRange(PositiveRange const&);
    PositiveRange();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void parse(::Json::Value const& rangeJson);
    // NOLINTEND
};

} // namespace catalog
