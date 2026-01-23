#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/core/debug/log/LogArea.h"

// auto generated forward declare list
// clang-format off
namespace LoadResultHelpers { struct ContentLogOptions; }
namespace Puv { class Logger; }
// clang-format on

namespace LoadResultHelpers {
// functions
// NOLINTBEGIN
MCNAPI ::std::string buildLogMessage(
    ::std::vector<::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string>> const& context,
    ::std::string                                                                                   message
);

MCNAPI void
writeToContentLog(::Puv::Logger const& logger, ::LogArea logArea, ::LoadResultHelpers::ContentLogOptions options);
// NOLINTEND

} // namespace LoadResultHelpers
