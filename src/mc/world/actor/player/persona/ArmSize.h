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
        Wide    = 0,
        Count   = 0,
        Unknown = 0,
    };

    using SizeInfoList = ::std::unordered_map<::persona::ArmSize::Type, ::persona::SizeInfo>;

public:
    // prevent constructor by default
    ArmSize& operator=(ArmSize const&);
    ArmSize(ArmSize const&);
    ArmSize();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::persona::ArmSize::Type, ::persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
