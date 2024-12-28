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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk89c47b;
    // NOLINTEND

public:
    // prevent constructor by default
    TaggedBinding& operator=(TaggedBinding const&);
    TaggedBinding(TaggedBinding const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TaggedBinding();

    MCAPI ::Scripting::TaggedBinding& beta();

    MCAPI ::Scripting::TaggedBinding& onlyStable();

    MCAPI ::Scripting::TaggedBinding& release(
        ::Scripting::Version                            inclusiveLowerVersion,
        ::std::optional<::Scripting::MajorVersionLimit> exclusiveMajorVersionLimit
    );

    MCAPI ~TaggedBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
