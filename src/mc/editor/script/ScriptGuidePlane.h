#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor { struct GuidePlaneData; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptGuidePlane {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkd6bfa7;
    ::ll::UntypedStorage<4, 12> mUnke145d0;
    ::ll::UntypedStorage<4, 12> mUnk272750;
    ::ll::UntypedStorage<1, 1>  mUnk34e42d;
    ::ll::UntypedStorage<8, 24> mUnkbfed83;
    ::ll::UntypedStorage<8, 24> mUnkfdf3ba;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptGuidePlane& operator=(ScriptGuidePlane const&);
    ScriptGuidePlane(ScriptGuidePlane const&);
    ScriptGuidePlane();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ScriptGuidePlane(::Editor::GuidePlaneData const& data);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Editor::GuidePlaneData const& data);
#endif
    // NOLINTEND
};

} // namespace Editor::ScriptModule
