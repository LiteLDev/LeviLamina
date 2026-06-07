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
#ifdef LL_PLAT_C
    MCAPI static ::std::_List_const_iterator<
        ::std::_List_val<::std::_List_simple_types<::std::pair<::persona::BodySize::Type const, ::persona::SizeInfo>>>>
    _getSizeInfoIteratorByType(::persona::BodySize::Type bodySizeType);

    MCAPI static ::std::string getStringFromType(::persona::BodySize::Type bodySizeType);

    MCAPI static ::std::string_view getTexturePathByType(::persona::BodySize::Type bodySizeType);

    MCAPI static ::persona::BodySize::Type getTypeFromString(::std::string_view bodySizeStr);

    MCAPI static bool isValidType(::persona::BodySize::Type bodySizeType);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::persona::BodySize::Type, ::persona::SizeInfo> const& mInfoList();
    // NOLINTEND
};

} // namespace persona
