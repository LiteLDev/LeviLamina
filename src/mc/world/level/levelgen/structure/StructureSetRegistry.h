#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

class StructureSetRegistry {
public:
    entt::dense_map<std::string, std::shared_ptr<br::worldgen::StructureSet>> structureSetMap;

    // prevent constructor by default
    StructureSetRegistry& operator=(StructureSetRegistry const&);
    StructureSetRegistry(StructureSetRegistry const&);
    StructureSetRegistry();

public:
    // NOLINTBEGIN
    // symbol:
    // ?begin@StructureSetRegistry@worldgen@br@@QEBA?AV?$dense_map_iterator@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$dense_map_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UStructureSet@worldgen@br@@@2@@internal@entt@@@std@@@std@@@std@@@internal@entt@@XZ
    MCAPI entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
        entt::internal::dense_map_node<std::string, std::shared_ptr<struct br::worldgen::StructureSet>>>>>>
          begin() const;

    // symbol:
    // ?end@StructureSetRegistry@worldgen@br@@QEBA?AV?$dense_map_iterator@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@U?$dense_map_node@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$shared_ptr@UStructureSet@worldgen@br@@@2@@internal@entt@@@std@@@std@@@std@@@internal@entt@@XZ
    MCAPI entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
        entt::internal::dense_map_node<std::string, std::shared_ptr<struct br::worldgen::StructureSet>>>>>>
          end() const;

    // symbol: ?size@StructureSetRegistry@worldgen@br@@QEBA_KXZ
    MCAPI uint64 size() const;

    // symbol: ??1StructureSetRegistry@worldgen@br@@QEAA@XZ
    MCAPI ~StructureSetRegistry();

    // NOLINTEND
};

}; // namespace br::worldgen
