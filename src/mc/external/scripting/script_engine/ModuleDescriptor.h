#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ModuleDescriptor {
public:
    // prevent constructor by default
    ModuleDescriptor(ModuleDescriptor const&);
    ModuleDescriptor();

public:
    // NOLINTBEGIN
    MCAPI ModuleDescriptor(struct Scripting::ModuleDescriptor&&);

    MCAPI struct Scripting::ModuleDescriptor& operator=(struct Scripting::ModuleDescriptor const&);

    MCAPI bool operator==(struct Scripting::ModuleDescriptor const&) const;

    MCAPI std::string toString() const;

    MCAPI ~ModuleDescriptor();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Scripting
