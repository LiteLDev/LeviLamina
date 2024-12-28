#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/export/ExportResult.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class Player;
namespace Editor::ScriptModule { class ScriptGameOptions; }
namespace Scripting { struct Error; }
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
    virtual ~ScriptExportManager();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ScriptExportManager(::Player& player);

    MCAPI void _setGameOptions(::LevelData const& levelData, ::Editor::ScriptModule::ScriptGameOptions& gameOptions);

    MCAPI ::Editor::ScriptModule::ScriptGameOptions getGameOptions(::std::optional<bool> useDefault);

    MCAPI ::Scripting::Result<::std::string, ::Scripting::Error> getGameVersion() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptExportManager> bindClass();

    MCAPI static ::Scripting::EnumBindingBuilder<::Editor::ExportResult, ::Editor::ExportResult>
    bindExportResultEnums();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
