#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/Comparison.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class RemovedInMajorVersion; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

class Release {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd7338f;
    ::ll::UntypedStorage<8, 40> mUnkf154f7;
    ::ll::UntypedStorage<2, 4>  mUnk63e5f1;
    // NOLINTEND

public:
    // prevent constructor by default
    Release& operator=(Release const&);
    Release(Release const&);
    Release();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Release(
        ::Scripting::Comparison                             comparison_,
        ::Scripting::Version                                version_,
        ::std::optional<::Scripting::RemovedInMajorVersion> exclusiveMajorVersionLimit_
    );

    MCNAPI ~Release();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::Comparison                             comparison_,
        ::Scripting::Version                                version_,
        ::std::optional<::Scripting::RemovedInMajorVersion> exclusiveMajorVersionLimit_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
