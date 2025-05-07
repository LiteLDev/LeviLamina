#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class ArmSize {
public:
    // ArmSize inner types define
    enum class Type : uint64 {
        Slim    = 0,
        Wide    = 1,
        Count   = 2,
        Unknown = 3,
    };

    using SizeInfoList = ::std::unordered_map<::persona::ArmSize::Type, ::persona::SizeInfo>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string getStringFromType(::persona::ArmSize::Type armSizeType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_map<::persona::ArmSize::Type, ::persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
