#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IContentManagerContext;
struct ContentViews;
// clang-format on

namespace World {

struct WorldPacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IContentManagerContext>> mGlobalContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentViews>>           mTexturePackViews;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ContentViews>>           mBehaviorPackViews;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~WorldPacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
