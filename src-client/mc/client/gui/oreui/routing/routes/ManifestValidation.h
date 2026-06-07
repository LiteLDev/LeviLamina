#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/client/gui/oreui/routing/RouteFlags.h"
#include "mc/client/gui/oreui/routing/RouteHistoryAction.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IContentKeyProvider;
class IContentManager;
class ISceneStack;
class PackManifestFactory;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI::EntryPoints {

class ManifestValidation : public ::OreUI::IEntryPoint {
public:
    // ManifestValidation inner types define
    enum class ScreenType : uchar {
        Default = 0,
        Storage = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PackManifestFactory&>                                      mManifestFactory;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const>> mKeyProvider;
    ::ll::TypedStorage<8, 64, ::std::function<::IContentManager&()>>                      mGetContentManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ManifestValidation& operator=(ManifestValidation const&);
    ManifestValidation(ManifestValidation const&);
    ManifestValidation();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool shouldAddToConfiguration() const /*override*/;

    virtual void addToMatcher(
        ::OreUI::RouteMatcher&                              routeMatcher,
        ::SceneFactory&                                     sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const& sceneStack
    ) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ManifestValidation(
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::function<::IContentManager&()>                             getContentManager
    );

    MCAPI void _navigateToManifestValidationScreen(
        ::SceneFactory&                                      sceneFactory,
        ::Bedrock::NotNullNonOwnerPtr<::ISceneStack> const&  sceneStack,
        ::std::string const&                                 path,
        ::OreUI::RouteHistoryAction                          action,
        ::OreUI::EntryPoints::ManifestValidation::ScreenType type
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> BASE_SCREEN_ID();

    MCAPI static ::OreUI::EntryPoints::RouteFlags const& FLAGS();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> ROUTE_STORAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::PackManifestFactory&                                            manifestFactory,
        ::Bedrock::NotNullNonOwnerPtr<::IContentKeyProvider const> const& keyProvider,
        ::std::function<::IContentManager&()>                             getContentManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $shouldAddToConfiguration() const;

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
