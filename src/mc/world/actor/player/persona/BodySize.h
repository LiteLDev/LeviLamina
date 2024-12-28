#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class BodySize {
public:
    // BodySize inner types define
    enum class Type : uint64 {
        Smaller = 0,
        Small   = 0,
        Medium  = 0,
        Tall    = 0,
        Count   = 0,
        Unknown = 0,
    };

public:
    // prevent constructor by default
    BodySize& operator=(BodySize const&);
    BodySize(BodySize const&);
    BodySize();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::persona::BodySize::Type, ::persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
