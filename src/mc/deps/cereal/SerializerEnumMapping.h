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
    MCAPI SerializerEnumMapping(class cereal::SerializerEnumMapping const&);

    MCAPI std::optional<int64> lookup(std::string_view) const;

    MCAPI std::optional<std::string> lookup(int64) const;

    MCAPI entt::iterable_adaptor<
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::string, int64>>>>,
        std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<std::pair<std::string, int64>>>>>
    mapping() const;

    MCAPI ~SerializerEnumMapping();

    // NOLINTEND
};

}; // namespace cereal
