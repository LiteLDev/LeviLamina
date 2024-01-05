#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntitySet {
public:
    // prevent constructor by default
    EntitySet& operator=(EntitySet const&);

public:
    // NOLINTBEGIN
    // symbol: ??0EntitySet@@QEAA@XZ
    MCAPI EntitySet();

    // symbol: ??0EntitySet@@QEAA@$$QEAV0@@Z
    MCAPI EntitySet(class EntitySet&&);

    // symbol: ??0EntitySet@@QEAA@AEBV0@@Z
    MCAPI EntitySet(class EntitySet const&);

    // symbol: ?add@EntitySet@@QEAA_NAEBVEntityContext@@@Z
    MCAPI bool add(class EntityContext const& entity);

    // symbol:
    // ?erase@EntitySet@@QEAA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KVWeakEntityRef@@@std@@@std@@@std@@@std@@V23@@Z
    MCAPI
    std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<uint64 const, class WeakEntityRef>>>>
        erase(std::_List_const_iterator<
              std::_List_val<std::_List_simple_types<std::pair<uint64 const, class WeakEntityRef>>>>);

    // symbol: ??4EntitySet@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class EntitySet& operator=(class EntitySet&&);

    // NOLINTEND
};
