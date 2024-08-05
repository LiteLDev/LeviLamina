#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/IPayload.h"
#include "mc/external/scripting/Privilege.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class IPayload; }
namespace Scripting { class NativeRuntime; }
namespace Scripting { class ResultAny; }
namespace Scripting { class StringBasedRuntime; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class StringPayload : public ::Scripting::IPayload {
public:
    // prevent constructor by default
    StringPayload& operator=(StringPayload const&);
    StringPayload(StringPayload const&);
    StringPayload();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StringPayload();

    // vIndex: 1
    virtual class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::NativeRuntime&, std::optional<::Scripting::Privilege>);

    // vIndex: 2
    virtual class Scripting::ResultAny
    runOn(struct Scripting::ContextId, class Scripting::StringBasedRuntime& runtime, std::optional<::Scripting::Privilege>);

    MCAPI StringPayload(std::string scriptName, std::string scriptData);

    // NOLINTEND
};

}; // namespace Scripting
