#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/options/option_types/Option.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BoolOption : public ::Option {
public:
    // prevent constructor by default
    BoolOption& operator=(BoolOption const&);
    BoolOption(BoolOption const&);
    BoolOption();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BoolOption@@UEAA@XZ
    virtual ~BoolOption() = default;

    // vIndex: 1, symbol:
    // ?save@BoolOption@@UEAAXAEAV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
    virtual void save(std::vector<std::pair<std::string, std::string>>& propertyVector);

    // vIndex: 2, symbol: ?load@BoolOption@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void load(std::string const& valueString);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_set@BoolOption@@AEAAX_N0@Z
    MCAPI void _set(bool v, bool saveOptionChange);

    // NOLINTEND
};
