#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class MajorVersionLimit; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

struct TaggedBinding {
public:
    // prevent constructor by default
    TaggedBinding& operator=(TaggedBinding const&);

public:
    // NOLINTBEGIN
    MCAPI TaggedBinding();

    MCAPI TaggedBinding(struct Scripting::TaggedBinding const&);

    MCAPI struct Scripting::TaggedBinding& beta();

    MCAPI struct Scripting::TaggedBinding& onlyStable();

    MCAPI struct Scripting::TaggedBinding& release(
        struct Scripting::Version                         inclusiveLowerVersion,
        std::optional<class Scripting::MajorVersionLimit> exclusiveMajorVersionLimit
    );

    MCAPI ~TaggedBinding();

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
