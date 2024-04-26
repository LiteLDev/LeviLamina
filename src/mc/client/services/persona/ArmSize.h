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
    enum class Type : int64 {
        Slim    = 0,
        Wide    = 1,
        Count   = 2,
        Unknown = 3,
    };

    using SizeInfoList = std::unordered_map<ArmSize::Type, SizeInfo>;

    struct Proxy {
        using constIterator = SizeInfoList::const_iterator;
    };

public:
    // prevent constructor by default
    ArmSize& operator=(ArmSize const&);
    ArmSize(ArmSize const&);
    ArmSize();

public:
    // NOLINTBEGIN
    // symbol:
    // ?getStringFromType@ArmSize@persona@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Type@12@@Z
    MCAPI static std::string getStringFromType(::persona::ArmSize::Type);

    // symbol: ?getTypeFromString@ArmSize@persona@@SA?AW4Type@12@AEBV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI static ::persona::ArmSize::Type getTypeFromString(std::string_view const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_getSizeInfoIteratorByType@ArmSize@persona@@KA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4Type@ArmSize@persona@@USizeInfo@3@@std@@@std@@@std@@@std@@W4Type@12@@Z
    MCAPI static Proxy::constIterator _getSizeInfoIteratorByType(::persona::ArmSize::Type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?mInfoList@ArmSize@persona@@0V?$unordered_map@W4Type@ArmSize@persona@@USizeInfo@3@U?$hash@W4Type@ArmSize@persona@@@std@@U?$equal_to@W4Type@ArmSize@persona@@@6@V?$allocator@U?$pair@$$CBW4Type@ArmSize@persona@@USizeInfo@3@@std@@@6@@std@@B
    MCAPI static SizeInfoList const mInfoList;

    // NOLINTEND
};

}; // namespace persona
