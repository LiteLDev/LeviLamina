#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/EditorPlayerCommon.h"

// auto generated forward declare list
// clang-format off
class PlayerEventCoordinator;
// clang-format on

namespace Editor {

class EditorServerPlayer : public ::Editor::EditorPlayerCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbbe1db;
    ::ll::UntypedStorage<8, 16> mUnk788873;
    ::ll::UntypedStorage<8, 8>  mUnk696781;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerPlayer& operator=(EditorServerPlayer const&);
    EditorServerPlayer(EditorServerPlayer const&);
    EditorServerPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerPlayer() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::optional_ref<::PlayerEventCoordinator> getPlayerEventCoordinator() /*override*/;

    virtual bool isClientSide() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor
