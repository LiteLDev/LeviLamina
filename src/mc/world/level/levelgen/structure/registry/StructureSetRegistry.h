#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

class StructureSetRegistry {
    using StructureSetMap = entt::dense_map<std::string, std::shared_ptr<br::worldgen::StructureSet>>;

public:
    StructureSetMap mStructureSetMap;

    // prevent constructor by default
    StructureSetRegistry& operator=(StructureSetRegistry const&);
    StructureSetRegistry(StructureSetRegistry const&);
    StructureSetRegistry();

public:
    // NOLINTBEGIN
    MCAPI entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
        entt::internal::dense_map_node<std::string, std::shared_ptr<struct br::worldgen::StructureSet>>>>>>
          begin() const;

    MCAPI entt::internal::dense_map_iterator<std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<
        entt::internal::dense_map_node<std::string, std::shared_ptr<struct br::worldgen::StructureSet>>>>>>
          end() const;

    MCAPI void record(std::string_view key, std::shared_ptr<struct br::worldgen::StructureSet>&& set);

    MCAPI uint64 size() const;

    // NOLINTEND
};

}; // namespace br::worldgen
