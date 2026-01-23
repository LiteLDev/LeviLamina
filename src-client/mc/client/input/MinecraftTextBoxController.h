#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TextBoxCaretMovement.h"
#include "mc/deps/input/interface/ITextBoxController.h"

// auto generated forward declare list
// clang-format off
class IMinecraftGame;
struct TextBoxStateChange;
namespace OreUI { struct OreUISystem; }
// clang-format on

class MinecraftTextBoxController : public ::ITextBoxController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>     mMinecraftGame;
    ::ll::TypedStorage<8, 8, ::OreUI::OreUISystem*> mOreUISystem;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftTextBoxController& operator=(MinecraftTextBoxController const&);
    MinecraftTextBoxController(MinecraftTextBoxController const&);
    MinecraftTextBoxController();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftTextBoxController() /*override*/ = default;

    virtual void setTextBoxState(int controllerId, ::TextBoxStateChange const& stateChange) /*override*/;

    virtual void onKeyboardDismissed(int controllerId) /*override*/;

    virtual ::std::optional<int> calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setTextBoxState(int controllerId, ::TextBoxStateChange const& stateChange);

    MCAPI void $onKeyboardDismissed(int controllerId);

    MCAPI ::std::optional<int> $calculateCaretPositionAfterMovement(::TextBoxCaretMovement movement);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
