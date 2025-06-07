#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class LevelData;
namespace Editor::ScriptModule { class ScriptGameOptions; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptExportManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9ffef9;
    ::ll::UntypedStorage<8, 24> mUnkca4249;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExportManager& operator=(ScriptExportManager const&);
    ScriptExportManager(ScriptExportManager const&);
    ScriptExportManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptExportManager() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _setGameOptions(::LevelData const& levelData, ::Editor::ScriptModule::ScriptGameOptions& gameOptions);

    MCNAPI ::Editor::ScriptModule::ScriptGameOptions getGameOptions(::std::optional<bool> useDefault);

    MCNAPI ::Scripting::Result_deprecated<::std::string> getGameVersion() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindClass();

    MCNAPI static ::Scripting::EnumBinding bindExportResultEnums();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
