#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RemovedInMajorVersion; }
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
    MCNAPI TaggedBinding();

    MCNAPI ::Scripting::TaggedBinding& beta();

    MCNAPI ::Scripting::TaggedBinding& release(
        ::Scripting::Version                                inclusiveLowerVersion,
        ::std::optional<::Scripting::RemovedInMajorVersion> exclusiveMajorVersionLimit
    );

    MCNAPI ~TaggedBinding();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
