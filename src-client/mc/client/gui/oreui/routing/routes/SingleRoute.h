#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/IEntryPoint.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class ISceneStack;
class SceneFactory;
namespace OreUI { class RouteMatcher; }
// clang-format on

namespace OreUI::EntryPoints {

class SingleRoute : public ::OreUI::IEntryPoint {
public:
    // SingleRoute inner types define
    using SceneCreationCallback =
        ::std::function<::std::shared_ptr<::AbstractScene>(::SceneFactory&, ::std::string const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mRoute;
    ::ll::TypedStorage<8, 32, ::std::string> mScreenId;
    ::ll::
        TypedStorage<8, 64, ::std::function<::std::shared_ptr<::AbstractScene>(::SceneFactory&, ::std::string const&)>>
            mSceneCreationCallback;
    // NOLINTEND

public:
    // prevent constructor by default
    SingleRoute();

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
    MCAPI SingleRoute(
        ::std::string const&                                                                       route,
        ::std::string const&                                                                       screenId,
        ::std::function<::std::shared_ptr<::AbstractScene>(::SceneFactory&, ::std::string const&)> sceneCreationCallback
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&                                                                       route,
        ::std::string const&                                                                       screenId,
        ::std::function<::std::shared_ptr<::AbstractScene>(::SceneFactory&, ::std::string const&)> sceneCreationCallback
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
