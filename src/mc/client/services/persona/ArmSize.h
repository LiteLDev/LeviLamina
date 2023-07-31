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
    enum class Type {};

public:
    // prevent constructor by default
    ArmSize& operator=(ArmSize const&) = delete;
    ArmSize(ArmSize const&)            = delete;
    ArmSize()                          = delete;

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_getSizeInfoIteratorByType\@ArmSize\@persona\@\@KA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBW4Type\@ArmSize\@persona\@\@USizeInfo\@3\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@W4Type\@12\@\@Z
     */
    MCAPI static std::_List_const_iterator<std::_List_val<
        std::_List_simple_types<std::pair<enum class persona::ArmSize::Type const, struct persona::SizeInfo>>>>
        _getSizeInfoIteratorByType(enum class persona::ArmSize::Type);
    // NOLINTEND

private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?mInfoList\@ArmSize\@persona\@\@0V?$unordered_map\@W4Type\@ArmSize\@persona\@\@USizeInfo\@3\@U?$hash\@W4Type\@ArmSize\@persona\@\@\@std\@\@U?$equal_to\@W4Type\@ArmSize\@persona\@\@\@6\@V?$allocator\@U?$pair\@$$CBW4Type\@ArmSize\@persona\@\@USizeInfo\@3\@\@std\@\@\@6\@\@std\@\@B
     */
    MCAPI static std::unordered_map<enum class persona::ArmSize::Type, struct persona::SizeInfo> const mInfoList;
    // NOLINTEND
};

}; // namespace persona
