#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CodeBuilder { class IRequestHandler; }
namespace CodeBuilder { struct CommandRequest; }
namespace CodeBuilder { struct RequestHeader; }
namespace Json { class Value; }
// clang-format on

namespace CodeBuilder {

class RequestInterpreter {
public:
    // prevent constructor by default
    RequestInterpreter& operator=(RequestInterpreter const&);
    RequestInterpreter(RequestInterpreter const&);
    RequestInterpreter();

public:
    // NOLINTBEGIN
    // symbol:
    // ?process@RequestInterpreter@CodeBuilder@@QEBAXAEAVIRequestHandler@2@AEBURequestHeader@2@AEBVValue@Json@@@Z
    MCAPI void process(
        class CodeBuilder::IRequestHandler&      sender,
        struct CodeBuilder::RequestHeader const& header,
        class Json::Value const&                 body
    ) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_parse@RequestInterpreter@CodeBuilder@@CA_NAEBVValue@Json@@AEAUCommandRequest@2@@Z
    MCAPI static bool _parse(class Json::Value const& command, struct CodeBuilder::CommandRequest& request);

    // NOLINTEND
};

}; // namespace CodeBuilder
