#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"

// auto generated forward declare list
// clang-format off
class IAppPlatform;
class IClientInstance;
class IMinecraftGame;
class IScreenControllerFactory;
class IScreenModelFactory;
class LayoutManager;
class SceneFactory;
class ScreenController;
class UIControlFactory;
class UIScene;
class UISoundPlayer;
class VisualTree;
struct ScreenSizeData;
namespace Json { class Value; }
namespace SceneCreationUtils { class ScreenCreator; }
namespace mce { class TextureGroup; }
// clang-format on

class ISceneFactoryImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISceneFactoryImpl() = default;

    virtual ::std::shared_ptr<::UIControlFactory>
    createUIControlFactory(::Json::Value const& globalVars, ::UISoundPlayer const& soundPlayer) = 0;

    virtual ::std::shared_ptr<::UIScene> createUIScene(
        ::std::shared_ptr<::ScreenController> controller,
        ::std::unique_ptr<::VisualTree>       visualTree,
        ::std::shared_ptr<::UIControlFactory> controlFactory,
        ::std::unique_ptr<::LayoutManager>    layoutManager
    ) = 0;

    virtual ::std::shared_ptr<::mce::TextureGroup> getTextureGroup() = 0;

    virtual void setMeasureStrategy(::VisualTree& tree) = 0;

    virtual ::std::shared_ptr<void> createItemRegistryScope() = 0;

    virtual ::ScreenSizeData getClientScreenSizeData() = 0;

    virtual ::SubClientId getClientSubId() = 0;

    virtual ::SceneCreationUtils::ScreenCreator getScreenCreator(::SceneFactory& factory) = 0;

    virtual ::IScreenControllerFactory& getScreenControllerFactory() = 0;

    virtual ::IScreenModelFactory& getScreenModelFactory() = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::ISceneFactoryImpl> create(
        ::IMinecraftGame&                             game,
        ::IAppPlatform&                               platform,
        ::IClientInstance&                            client,
        ::std::unique_ptr<::IScreenControllerFactory> controllerFactory,
        ::std::unique_ptr<::IScreenModelFactory>      modelFactory
    );
    // NOLINTEND
};
