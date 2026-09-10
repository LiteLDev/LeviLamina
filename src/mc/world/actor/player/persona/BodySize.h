#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/persona/BodySizeType.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class BodySize {
public:
    // BodySize inner types define
    using SizeInfoList = ::std::unordered_map<::SharedTypes::persona::BodySizeType, ::persona::SizeInfo>;

    using Type = ::SharedTypes::persona::BodySizeType;

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static ::std::string getStringFromType(::SharedTypes::persona::BodySizeType bodySizeType);

    MCAPI static ::SharedTypes::persona::BodySizeType getTypeFromString(::std::string_view bodySizeStr);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::SharedTypes::persona::BodySizeType, ::persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
