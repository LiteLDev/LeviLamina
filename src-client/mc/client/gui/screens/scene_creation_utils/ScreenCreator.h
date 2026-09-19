#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SceneFactory;
// clang-format on

namespace SceneCreationUtils {

class ScreenCreator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::SceneFactory&> mSceneFactory;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenCreator& operator=(ScreenCreator const&);
    ScreenCreator(ScreenCreator const&);
    ScreenCreator();
};

} // namespace SceneCreationUtils
