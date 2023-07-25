#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace persona { struct SizeInfo; }
// clang-format on

namespace persona {

class ArmSize {
public:
    // ArmSize inner types declare
    // clang-format off

    // clang-format on

    // ArmSize inner types define
    enum class Type {};

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PERSONA_ARMSIZE
public:
    ArmSize& operator=(ArmSize const&) = delete;
    ArmSize(ArmSize const&)            = delete;
    ArmSize()                          = delete;
#endif

public:
    // protected:
    /**
     * @symbol
     * ?_getSizeInfoIteratorByType\@ArmSize\@persona\@\@KA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBW4Type\@ArmSize\@persona\@\@USizeInfo\@3\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@W4Type\@12\@\@Z
     */
    MCAPI static class std::_List_const_iterator<class std::_List_val<struct std::_List_simple_types<
        struct std::pair<enum class persona::ArmSize::Type const, struct persona::SizeInfo>>>>
        _getSizeInfoIteratorByType(enum class persona::ArmSize::Type);

    // private:

protected:
private:
    /**
     * @symbol
     * ?mInfoList\@ArmSize\@persona\@\@0V?$unordered_map\@W4Type\@ArmSize\@persona\@\@USizeInfo\@3\@U?$hash\@W4Type\@ArmSize\@persona\@\@\@std\@\@U?$equal_to\@W4Type\@ArmSize\@persona\@\@\@6\@V?$allocator\@U?$pair\@$$CBW4Type\@ArmSize\@persona\@\@USizeInfo\@3\@\@std\@\@\@6\@\@std\@\@B
     */
    MCAPI static class std::unordered_map<
        enum class persona::ArmSize::Type,
        struct persona::SizeInfo,
        struct std::hash<enum class persona::ArmSize::Type>,
        struct std::equal_to<enum class persona::ArmSize::Type>,
        class std::allocator<struct std::pair<enum class persona::ArmSize::Type const, struct persona::SizeInfo>>> const
        mInfoList;
};

}; // namespace persona
