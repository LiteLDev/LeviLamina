#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/SceneFactory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AbstractScene;
class BaseScreen;
class IClientInstance;
class ILayoutServiceProvider;
class IMinecraftGame;
class ISceneFactoryImpl;
class IUIDefRepository;
namespace Json { class Value; }
namespace OreUI { class SceneProvider; }
namespace SceneCreationUtils { class ScreenCreator; }
// clang-format on

class VanillaSceneFactory : public ::SceneFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::std::shared_ptr<::BaseScreen>(::SceneCreationUtils::ScreenCreator&)>>
        mDevConsoleScreenFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaSceneFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaSceneFactory() /*override*/ = default;

    virtual ::Json::Value createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const
        /*override*/;

    virtual ::std::shared_ptr<::AbstractScene> createDevConsole() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VanillaSceneFactory(
        ::std::unique_ptr<::ISceneFactoryImpl> impl,
        ::IMinecraftGame&                      minecraft,
        ::ILayoutServiceProvider&              layoutServiceProvider,
        ::IClientInstance&                     client,
        ::OreUI::SceneProvider&                sceneProvider,
        ::brstd::move_only_function<::std::shared_ptr<::BaseScreen>(::SceneCreationUtils::ScreenCreator&)>&&
            devConsoleScreenFactory
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::unique_ptr<::ISceneFactoryImpl> impl,
        ::IMinecraftGame&                      minecraft,
        ::ILayoutServiceProvider&              layoutServiceProvider,
        ::IClientInstance&                     client,
        ::OreUI::SceneProvider&                sceneProvider,
        ::brstd::move_only_function<::std::shared_ptr<::BaseScreen>(::SceneCreationUtils::ScreenCreator&)>&&
            devConsoleScreenFactory
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Json::Value $createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const;

    MCNAPI ::std::shared_ptr<::AbstractScene> $createDevConsole();
    // NOLINTEND
};
