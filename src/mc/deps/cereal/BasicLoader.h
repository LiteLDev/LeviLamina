#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class BasicLoader {
public:
    // prevent constructor by default
    BasicLoader& operator=(BasicLoader const&);
    BasicLoader(BasicLoader const&);
    BasicLoader();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BasicLoader@cereal@@UEAA@XZ
    virtual ~BasicLoader();

    // symbol:
    // ?getErrors@BasicLoader@cereal@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getErrors() const;

    // NOLINTEND
};

}; // namespace cereal
