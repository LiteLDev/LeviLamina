#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ProjectRegion; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectRegionPlayerService : public ::EnableGetWeakRef<::Editor::ProjectRegion> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkadb191;
    ::ll::UntypedStorage<8, 8>  mUnkb55685;
    ::ll::UntypedStorage<8, 8>  mUnka1a39b;
    ::ll::UntypedStorage<8, 64> mUnk40dedf;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegionPlayerService& operator=(ScriptProjectRegionPlayerService const&);
    ScriptProjectRegionPlayerService(ScriptProjectRegionPlayerService const&);
    ScriptProjectRegionPlayerService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptProjectRegionPlayerService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
