#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

struct MinorVersionPromotion {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnka26ca1;
    ::ll::UntypedStorage<8, 96> mUnk3c4dad;
    ::ll::UntypedStorage<8, 40> mUnk762736;
    ::ll::UntypedStorage<8, 40> mUnk21cc95;
    // NOLINTEND

public:
    // prevent constructor by default
    MinorVersionPromotion& operator=(MinorVersionPromotion const&);
    MinorVersionPromotion(MinorVersionPromotion const&);
    MinorVersionPromotion();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MinorVersionPromotion(
        ::Scripting::ModuleDescriptor const& promotedModule_,
        ::Scripting::ModuleDescriptor const& requestedBy_,
        ::Scripting::Version const&          originalVersion_,
        ::Scripting::Version const&          promotedToVersion_
    );

    MCNAPI ~MinorVersionPromotion();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::ModuleDescriptor const& promotedModule_,
        ::Scripting::ModuleDescriptor const& requestedBy_,
        ::Scripting::Version const&          originalVersion_,
        ::Scripting::Version const&          promotedToVersion_
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Scripting
