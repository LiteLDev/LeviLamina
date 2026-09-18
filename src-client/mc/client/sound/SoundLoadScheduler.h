#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourceLoadManager;
// clang-format on

class SoundLoadScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::std::mutex>                                      mCanceledLoadsLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::function<void()>>>            mCanceledLoads;
    ::ll::TypedStorage<8, 8, ::std::shared_mutex>                                mResourceLoadManagerLock;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourceLoadManager>> mResourceLoadManager;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _runCanceledLoads();
    // NOLINTEND
};
