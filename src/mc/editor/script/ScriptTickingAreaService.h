#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Scripting { struct Error; }
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
    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> isTickingAreaActive(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> purgeTickingAreas(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error> releaseTickingArea(::std::string const& areaIdentifier);

    MCNAPI ::Scripting::Result<bool, ::Scripting::Error>
    requestTickingArea(::std::string const& areaIdentifier, ::Vec3 const& from, ::Vec3 const& to);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptTickingAreaService> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
