#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
struct MinecraftServiceKeysMetadata;
namespace Bedrock::Http { class Request; }
namespace Bedrock::Http { class Response; }
// clang-format on

class MinecraftServiceKeysRequestHandler {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Http::Request _buildKeysRequest(::std::string const& keyEndpoint, bool highPriority);

    MCNAPI static ::Bedrock::Http::Request _buildMetadataRequest(::std::string const& authServiceUrl, bool highPriority);

    MCNAPI static ::std::optional<::std::unordered_map<::std::string, ::std::string>> _parseKeysResponse(::Bedrock::Http::Response const& response);

    MCNAPI static ::std::optional<::MinecraftServiceKeysMetadata> _parseMetadataResponse(::Bedrock::Http::Response const& response);

    MCNAPI static ::Bedrock::Threading::Async<::std::optional<::std::unordered_map<::std::string, ::std::string>>> getKeys(::TaskGroup& taskOwner, ::std::string const& endpoint, bool highPriority);

    MCNAPI static ::Bedrock::Threading::Async<::std::optional<::MinecraftServiceKeysMetadata>> getKeysMetadata(::TaskGroup& taskOwner, ::std::string const& authServiceUrl, bool highPriority);
    // NOLINTEND

};
