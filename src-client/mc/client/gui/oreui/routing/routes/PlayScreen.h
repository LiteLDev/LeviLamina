#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/screens/models/PlayScreenDefaultTab.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
namespace OreUI { class RouterLocation; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI::EntryPoints {

class PlayScreen : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&> mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayScreen& operator=(PlayScreen const&);
    PlayScreen(PlayScreen const&);
    PlayScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;

    virtual ~PlayScreen() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isOreUIPlayScreenEnabled() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string
    composeRoute(::PlayScreenDefaultTab tab, bool isEditorMode, ::std::string const& dirtyLevelId);

    MCAPI static ::std::string getLastPlayScreenTab(::std::vector<::OreUI::RouterLocation> const& routerHistory);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BASE_SCREEN_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> EDITOR_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> LEGACY_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldAddToConfiguration() const;

    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
