#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
struct MinecraftServiceKeysMetadata;
// clang-format on

class MinecraftServiceKeysRequestHandler {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Threading::Async<::std::optional<::std::unordered_map<::std::string, ::std::string>>>
    getKeys(::TaskGroup& taskOwner, ::std::string const& endpoint, bool highPriority);

    MCNAPI static ::Bedrock::Threading::Async<::std::optional<::MinecraftServiceKeysMetadata>>
    getKeysMetadata(::TaskGroup& taskOwner, ::std::string const& authServiceUrl, bool highPriority);
    // NOLINTEND
};
