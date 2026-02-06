#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class LayoutManager;
class TaskGroup;
class UIControlFactory;
struct CachedScene;
struct VisualTree;
namespace Json { class Value; }
// clang-format on

class CachedScenes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                         mLowMemoryDevice;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                               mDestroyScreenTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::map<::Json::Value, ::std::unique_ptr<::CachedScene>>> mCachedScene;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void cacheVisualTree(
        ::std::unique_ptr<::VisualTree>       screen,
        ::std::shared_ptr<::UIControlFactory> factory,
        ::std::unique_ptr<::LayoutManager>    layoutManager
    );

    MCAPI ::std::unique_ptr<::CachedScene> getCachedScene(::Json::Value const& info);
    // NOLINTEND
};
