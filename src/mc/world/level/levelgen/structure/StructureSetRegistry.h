#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace br::worldgen { struct StructureSet; }
// clang-format on

namespace br::worldgen {

class StructureSetRegistry {
public:
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

    MCAPI void record(std::string_view, std::shared_ptr<struct br::worldgen::StructureSet>&&);

    MCAPI uint64 size() const;

    // NOLINTEND
};

}; // namespace br::worldgen
