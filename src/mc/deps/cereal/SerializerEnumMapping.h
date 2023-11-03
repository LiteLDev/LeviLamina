#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class SerializerEnumMapping {
public:
    // prevent constructor by default
    SerializerEnumMapping& operator=(SerializerEnumMapping const&);
    SerializerEnumMapping(SerializerEnumMapping const&);
    SerializerEnumMapping();

public:
    // NOLINTBEGIN
    // symbol:
    // ?lookup@SerializerEnumMapping@cereal@@QEBA_N_JAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool lookup(int64, std::string&) const;

    // symbol:
    // ?lookup@SerializerEnumMapping@cereal@@QEBA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEA_J@Z
    MCAPI bool lookup(std::string const&, int64&) const;

    // symbol:
    // ?mapping@SerializerEnumMapping@cereal@@QEBA?AU?$iterable_adaptor@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@std@@@std@@@std@@@std@@V12@@entt@@XZ
    MCAPI entt::iterable_adaptor<
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const, int64>>>>,
        std::_List_const_iterator<std::_List_val<std::_List_simple_types<std::pair<std::string const, int64>>>>>
    mapping() const;

    // symbol: ??4SerializerEnumMapping@cereal@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class cereal::SerializerEnumMapping& operator=(class cereal::SerializerEnumMapping&&);

    // symbol:
    // ?toString@SerializerEnumMapping@cereal@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // NOLINTEND
};

}; // namespace cereal
