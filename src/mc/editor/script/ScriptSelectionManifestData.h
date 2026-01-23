#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptSelectionManifestData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf0b5c0;
    ::ll::UntypedStorage<1, 1>  mUnk726950;
    ::ll::UntypedStorage<4, 4>  mUnkdb1f63;
    ::ll::UntypedStorage<8, 8>  mUnk1e5541;
    ::ll::UntypedStorage<8, 8>  mUnkd90c60;
    ::ll::UntypedStorage<8, 24> mUnke2a7d7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionManifestData& operator=(ScriptSelectionManifestData const&);
    ScriptSelectionManifestData(ScriptSelectionManifestData const&);
    ScriptSelectionManifestData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptSelectionManifestData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
