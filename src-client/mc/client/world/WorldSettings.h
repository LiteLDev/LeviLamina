#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/storage/LevelDataWrapper.h"

// auto generated forward declare list
// clang-format off
class Minecraft;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace World {

class WorldSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 1704, ::LevelDataWrapper>            mLevelDataWrapper;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mLevelChangedSubscription;
    ::ll::TypedStorage<
        8,
        48,
        ::Bedrock::PubSub::Publisher<void(::LevelDataWrapper&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mLevelChangedPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldSettings(::Minecraft& serverData);

    MCAPI ::Bedrock::PubSub::Subscription
    registerLevelChangedListener(::std::function<void(::LevelDataWrapper&)> callback);

    MCAPI ~WorldSettings();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Minecraft& serverData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace World
