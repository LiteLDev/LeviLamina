#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace CodeBuilder { class IRequestHandler; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct RequestHeader; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class RequestInterpreter {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void process(
        ::CodeBuilder::IRequestHandler&     sender,
        ::CodeBuilder::RequestHeader const& header,
        ::Json::Value const&                body,
        ::IMinecraftEventing*               eventing
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _parse(::Json::Value const& command, ::CodeBuilder::CommandRequest& request);
    // NOLINTEND
};

} // namespace CodeBuilder
