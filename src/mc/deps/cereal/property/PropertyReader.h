#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class PropertyReader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9e1804;
    // NOLINTEND

public:
    // prevent constructor by default
    PropertyReader& operator=(PropertyReader const&);
    PropertyReader(PropertyReader const&);
    PropertyReader();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::entt::basic_any<16, 8>* getProperty(::std::string_view name) const;
    // NOLINTEND
};

} // namespace cereal
