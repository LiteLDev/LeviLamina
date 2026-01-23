#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

namespace cereal {

class ComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk8928d6;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentStorage& operator=(ComponentStorage const&);
    ComponentStorage(ComponentStorage const&);
    ComponentStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::meta_any getComponent(::std::string_view name);

    MCNAPI bool hasComponent(::std::string_view name) const;

    MCNAPI ::cereal::ComponentStorage& operator=(::cereal::ComponentStorage&&);

    MCNAPI bool operator==(::cereal::ComponentStorage const& other) const;

    MCNAPI bool removeComponent(::std::string_view name);
    // NOLINTEND
};

} // namespace cereal
