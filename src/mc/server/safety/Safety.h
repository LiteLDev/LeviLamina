#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/safety/ChatFloodingAction.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace Safety { struct ChatFloodingActionEnumHasher; }
namespace Bedrock::Services::safety_client::model { struct RequestBedrockModerationRequest; }
// clang-format on

namespace Safety {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::Bedrock::Services::safety_client::model::RequestBedrockModerationRequest
createBedrockModerationRequest(::Json::Value const& reportData);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<
    ::Safety::ChatFloodingAction,
    ::std::string,
    ::Safety::ChatFloodingActionEnumHasher,
    ::std::equal_to<::Safety::ChatFloodingAction>> const&
ChatFloodingActionEnumToStringMap();
// NOLINTEND

} // namespace Safety
