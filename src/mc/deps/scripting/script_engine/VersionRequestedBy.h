#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ModuleDescriptor; }
namespace Scripting { struct Version; }
// clang-format on

namespace Scripting {

struct VersionRequestedBy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>  mUnk143185;
    ::ll::UntypedStorage<8, 40>  mUnkf3415b;
    ::ll::UntypedStorage<8, 104> mUnk460b40;
    ::ll::UntypedStorage<1, 1>   mUnk135d43;
    ::ll::UntypedStorage<1, 1>   mUnk7590a2;
    ::ll::UntypedStorage<1, 1>   mUnk39326b;
    ::ll::UntypedStorage<1, 1>   mUnk490f0f;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionRequestedBy& operator=(VersionRequestedBy const&);
    VersionRequestedBy(VersionRequestedBy const&);
    VersionRequestedBy();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VersionRequestedBy(::Scripting::VersionRequestedBy&&);

    MCNAPI VersionRequestedBy(
        ::Scripting::Version          version_,
        ::Scripting::Version          originalVersion,
        ::Scripting::ModuleDescriptor by_,
        bool                          supported_,
        bool                          missing_,
        bool                          explicitRequest_,
        bool                          promotion_
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scripting::VersionRequestedBy&&);

    MCNAPI void* $ctor(
        ::Scripting::Version          version_,
        ::Scripting::Version          originalVersion,
        ::Scripting::ModuleDescriptor by_,
        bool                          supported_,
        bool                          missing_,
        bool                          explicitRequest_,
        bool                          promotion_
    );
    // NOLINTEND
};

} // namespace Scripting
