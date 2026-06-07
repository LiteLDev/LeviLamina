#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class ISceneStack;
class IScreenCapabilities;
class SceneFactory;
// clang-format on

struct MinecraftScreenModelContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                          mMinecraft;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                         mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions>> mAdvancedGraphicsOptions;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>>              mSceneStack;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                            mSceneFactory;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IScreenCapabilities>>                   mCapabilities;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftScreenModelContext& operator=(MinecraftScreenModelContext const&);
    MinecraftScreenModelContext(MinecraftScreenModelContext const&);
    MinecraftScreenModelContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MinecraftScreenModelContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
