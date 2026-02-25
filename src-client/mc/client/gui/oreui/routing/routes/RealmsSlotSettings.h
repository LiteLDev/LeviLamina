#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/network/realms/RealmId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
namespace Realms { struct RealmsList; }
namespace Realms { struct World; }
namespace ui { class ScreenTechStackSelector; }
// clang-format on

namespace OreUI::EntryPoints {

class RealmsSlotSettings : public ::OreUI::IEntryPoint {
public:
    // RealmsSlotSettings inner types declare
    // clang-format off
    struct PathComponents;
    // clang-format on

    // RealmsSlotSettings inner types define
    struct PathComponents {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Realms::RealmId> realmId;
        ::ll::TypedStorage<8, 32, ::std::string>    tab;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~PathComponents();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<::std::shared_ptr<::Realms::RealmsList>()>> mGetRealmsList;
    ::ll::TypedStorage<8, 8, ::ui::ScreenTechStackSelector const&>                        mScreenTechStackSelector;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsSlotSettings& operator=(RealmsSlotSettings const&);
    RealmsSlotSettings(RealmsSlotSettings const&);
    RealmsSlotSettings();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;

    virtual ~RealmsSlotSettings() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::OreUI::EntryPoints::RealmsSlotSettings::PathComponents>
    _parsePath(::std::string const& path);

    MCAPI static ::std::string composeRoute(::Realms::World const& world);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BASE_SCREEN_ID();

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
