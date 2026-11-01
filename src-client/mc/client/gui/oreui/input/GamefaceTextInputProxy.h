#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/interface/IGamefaceTextInputProxy.h"

// auto generated forward declare list
// clang-format off
struct TextBoxSelection;
namespace OreUI { class IView; }
namespace OreUI { class ViewInputHandler; }
// clang-format on

namespace OreUI {

class GamefaceTextInputProxy : public ::IGamefaceTextInputProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IView>> mView;
    ::ll::TypedStorage<8, 8, ::OreUI::ViewInputHandler&>                     mInputHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    GamefaceTextInputProxy& operator=(GamefaceTextInputProxy const&);
    GamefaceTextInputProxy(GamefaceTextInputProxy const&);
    GamefaceTextInputProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GamefaceTextInputProxy() /*override*/ = default;

    virtual void imeStartComposition() /*override*/;

    virtual void imeUpdateCompositionText(::std::string const& compositionString) /*override*/;

    virtual void imeReplaceCompositionTextRange(::std::string const& replacement, int from, int to) /*override*/;

    virtual void imeConfirmComposition(::std::string const& compositionString) /*override*/;

    virtual void imeConfirmComposition() /*override*/;

    virtual void imeEndComposition() /*override*/;

    virtual void setText(::std::string const& text, ::TextBoxSelection selection) /*override*/;

    virtual void setSelection(::TextBoxSelection selection) /*override*/;

    virtual ::std::string getText() const /*override*/;

    virtual ::TextBoxSelection getSelection() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $imeStartComposition();

    MCNAPI void $imeUpdateCompositionText(::std::string const& compositionString);

    MCNAPI void $imeReplaceCompositionTextRange(::std::string const& replacement, int from, int to);

    MCNAPI void $imeConfirmComposition(::std::string const& compositionString);

    MCNAPI void $imeConfirmComposition();

    MCNAPI void $imeEndComposition();

    MCNAPI void $setText(::std::string const& text, ::TextBoxSelection selection);

    MCNAPI void $setSelection(::TextBoxSelection selection);

    MCNAPI ::std::string $getText() const;

    MCNAPI ::TextBoxSelection $getSelection() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
