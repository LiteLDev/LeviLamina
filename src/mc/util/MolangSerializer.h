#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MolangVariable;
class MolangVariableMap;
struct MolangScriptArg;
namespace Json { class Value; }
// clang-format on

namespace MolangSerializer {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::MolangScriptArg> deserializeScriptArg(::Json::Value const& json);

MCAPI ::std::unique_ptr<::MolangVariable> deserializeVariable(::Json::Value const& json);

MCAPI ::std::unique_ptr<::MolangVariableMap> deserializeVariableMap(::Json::Value const& json);

MCAPI ::Json::Value serializeScriptArg(::MolangScriptArg const& scriptArg);
// NOLINTEND

} // namespace MolangSerializer
