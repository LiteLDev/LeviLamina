#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ScriptDeferredFlushTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWorkDone;
    ::ll::TypedStorage<8, 8, ::Bedrock::PubSub::Publisher<void(::ScriptDeferredFlushTracker&), ::Bedrock::PubSub::ThreadModel::MultiThreaded, 0>&> mFlushingCoroutinePublisher;
    ::ll::TypedStorage<1, 1, bool> mFlushingCoroutines;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDeferredFlushTracker& operator=(ScriptDeferredFlushTracker const&);
    ScriptDeferredFlushTracker(ScriptDeferredFlushTracker const&);
    ScriptDeferredFlushTracker();

};
