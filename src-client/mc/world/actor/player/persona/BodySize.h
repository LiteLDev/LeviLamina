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
        Small   = 1,
        Medium  = 2,
        Tall    = 3,
        Count   = 4,
        Unknown = 5,
    };

    using SizeInfoList = ::std::unordered_map<::persona::BodySize::Type, ::persona::SizeInfo>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string getStringFromType(::persona::BodySize::Type bodySizeType);

    MCAPI static ::persona::BodySize::Type getTypeFromString(::std::string_view bodySizeStr);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::persona::BodySize::Type, ::persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
