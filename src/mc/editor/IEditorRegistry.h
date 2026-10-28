#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace Editor {

class IEditorRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString const& getRegistryId() const = 0;

    virtual bool isAllowed(::HashedString const&) const = 0;
    // NOLINTEND
};

} // namespace Editor
