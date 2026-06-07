#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/SceneFactory.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class IUIDefRepository;
namespace Json { class Value; }
namespace OreUI { class SceneProvider; }
// clang-format on

class VanillaSceneFactory : public ::SceneFactory {
public:
    // prevent constructor by default
    VanillaSceneFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaSceneFactory() /*override*/ = default;

    virtual ::Json::Value createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VanillaSceneFactory(
        ::IMinecraftGame&                                                minecraft,
        ::IClientInstance&                                               client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IMinecraftGame&                                                minecraft,
        ::IClientInstance&                                               client,
        ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const& advancedGraphicsOptions,
        ::OreUI::SceneProvider&                                          sceneProvider
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Json::Value $createGlobalVars(::Bedrock::NotNullNonOwnerPtr<::IUIDefRepository const> defRepository) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
