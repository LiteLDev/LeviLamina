#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class SerializerEnumMapping {
public:
    // prevent constructor by default
    SerializerEnumMapping& operator=(SerializerEnumMapping const&);
    SerializerEnumMapping();

public:
    // NOLINTBEGIN
    // symbol: ??0SerializerEnumMapping@cereal@@QEAA@AEBV01@@Z
    MCAPI SerializerEnumMapping(class cereal::SerializerEnumMapping const&);

    // symbol:
    // ?lookup@SerializerEnumMapping@cereal@@QEBA?AV?$optional@_J@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCAPI std::optional<int64> lookup(std::string_view) const;

    // symbol:
    // ?lookup@SerializerEnumMapping@cereal@@QEBA?AV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@_J@Z
    MCAPI std::optional<std::string> lookup(int64) const;

    // symbol:
    // ?mapping@SerializerEnumMapping@cereal@@QEBA?AU?$iterable_adaptor@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_J@std@@@std@@@std@@@std@@V12@@entt@@XZ
    MCAPI entt::iterable_adaptor<
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::string, int64>>>>,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::string, int64>>>>>
    mapping() const;

    // symbol: ??1SerializerEnumMapping@cereal@@QEAA@XZ
    MCAPI ~SerializerEnumMapping();

    // NOLINTEND
};

}; // namespace cereal
