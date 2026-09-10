#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/ArmSizeType.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class ArmSize {
public:
    // ArmSize inner types define
    using SizeInfoList = ::std::unordered_map<::SharedTypes::persona::ArmSizeType, ::persona::SizeInfo>;

    using Type = ::SharedTypes::persona::ArmSizeType;

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string getStringFromType(::SharedTypes::persona::ArmSizeType armSizeType);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::SharedTypes::persona::ArmSizeType, ::persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
