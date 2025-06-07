#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTickingAreaService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9a2b44;
    ::ll::UntypedStorage<8, 8> mUnke6edf4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTickingAreaService& operator=(ScriptTickingAreaService const&);
    ScriptTickingAreaService(ScriptTickingAreaService const&);
    ScriptTickingAreaService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<bool> isTickingAreaActive(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result_deprecated<bool> purgeTickingAreas(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result_deprecated<bool> releaseTickingArea(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result_deprecated<bool>
    requestTickingArea(::std::string const& areaIdentifier, ::Vec3 const& from, ::Vec3 const& to);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
