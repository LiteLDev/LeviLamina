#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/EditorPlayerCommon.h"

// auto generated forward declare list
// clang-format off
class PlayerEventCoordinator;
class ServerPlayer;
// clang-format on

namespace Editor {

class EditorServerPlayer : public ::Editor::EditorPlayerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbbe1db;
    ::ll::UntypedStorage<8, 16> mUnk788873;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerPlayer& operator=(EditorServerPlayer const&);
    EditorServerPlayer(EditorServerPlayer const&);
    EditorServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorServerPlayer() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 6
    virtual ::optional_ref<::PlayerEventCoordinator> getPlayerEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ServerPlayer* getServerPlayer() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::optional_ref<::PlayerEventCoordinator> $getPlayerEventCoordinator();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorPlayer();

    MCNAPI static void** $vftableForPlayerEventListener();

    MCNAPI static void** $vftableForEditorPlayerServiceProvider();

    MCNAPI static void** $vftableForEditorServiceList();
    // NOLINTEND
};

} // namespace Editor
