#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ObjectiveCriteria {
public:
    // prevent constructor by default
    ObjectiveCriteria& operator=(ObjectiveCriteria const&);
    ObjectiveCriteria(ObjectiveCriteria const&);
    ObjectiveCriteria();

public:
    // NOLINTBEGIN
    // symbol: ?getName@ObjectiveCriteria@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?isReadOnly@ObjectiveCriteria@@QEBA_NXZ
    MCAPI bool isReadOnly() const;

    // NOLINTEND
};
