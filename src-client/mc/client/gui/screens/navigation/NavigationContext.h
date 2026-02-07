#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ISceneStack;
class SceneFactory;
namespace Social { class IUserManager; }
// clang-format on

namespace Screens::Navigation {

class NavigationContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>> mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ISceneStack>>          mSceneStack;
    ::ll::TypedStorage<8, 8, ::SceneFactory&>                                        mSceneFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationContext& operator=(NavigationContext const&);
    NavigationContext(NavigationContext const&);
    NavigationContext();
};

} // namespace Screens::Navigation
