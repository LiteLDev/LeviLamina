#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IAdvancedGraphicsOptions;
class IClientInstance;
class IMinecraftGame;
class SceneFactory;
// clang-format on

namespace SceneCreationUtils {

class ScreenCreator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                                  mSceneFactory;
    ::ll::TypedStorage<8, 8, ::IMinecraftGame&>                                                mMc;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                               mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IAdvancedGraphicsOptions> const> mAdvancedGraphicsOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenCreator& operator=(ScreenCreator const&);
    ScreenCreator(ScreenCreator const&);
    ScreenCreator();
};

} // namespace SceneCreationUtils
