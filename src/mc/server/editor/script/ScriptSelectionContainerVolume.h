#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptSelectionContainer.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptSelectionContainerVolume : public ::Editor::ScriptModule::ScriptSelectionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb1b577;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSelectionContainerVolume& operator=(ScriptSelectionContainerVolume const&);
    ScriptSelectionContainerVolume(ScriptSelectionContainerVolume const&);
    ScriptSelectionContainerVolume();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptSelectionContainerVolume() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
