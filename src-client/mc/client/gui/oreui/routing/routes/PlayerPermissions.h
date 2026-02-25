#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class LocalPlayer;
class SceneFactory;
struct ActorUniqueID;
namespace OreUI { class RouteMatcher; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI::EntryPoints {

class PlayerPermissions : public ::OreUI::IEntryPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&> mScreenTechStackSelector;
    ::ll::TypedStorage<8, 64, ::std::function<::LocalPlayer*()>>   mGetPrimaryLocalPlayer;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerPermissions& operator=(PlayerPermissions const&);
    PlayerPermissions(PlayerPermissions const&);
    PlayerPermissions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;

    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual ~PlayerPermissions() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _isOreUIPlayerPermissionScreenEnabled() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string composeRoute(::ActorUniqueID const& id);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BASE_ID();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> LEGACY_ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const;

    MCAPI bool $shouldAddToConfiguration() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::EntryPoints
