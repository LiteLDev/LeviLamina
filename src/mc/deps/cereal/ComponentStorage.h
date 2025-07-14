#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_map.h"

namespace cereal {

class ComponentStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk417288;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentStorage& operator=(ComponentStorage const&);
    ComponentStorage(ComponentStorage const&);
    ComponentStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::entt::basic_any<16, 8> getComponent(::std::string_view name);

    MCNAPI bool hasComponent(::std::string_view name) const;

    MCNAPI ::cereal::ComponentStorage& operator=(::cereal::ComponentStorage&&);

    MCNAPI bool removeComponent(::std::string_view name);
    // NOLINTEND
};

} // namespace cereal
