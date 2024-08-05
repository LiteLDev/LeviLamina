#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace MolangSerializer {
// NOLINTBEGIN
MCAPI std::unique_ptr<struct MolangScriptArg> deserializeScriptArg(class Json::Value const& json);

MCAPI std::unique_ptr<class MolangVariable> deserializeVariable(class Json::Value const& json);

MCAPI std::unique_ptr<class MolangVariableMap> deserializeVariableMap(class Json::Value const& json);

MCAPI class Json::Value serializeScriptArg(struct MolangScriptArg const&);
// NOLINTEND

}; // namespace MolangSerializer
