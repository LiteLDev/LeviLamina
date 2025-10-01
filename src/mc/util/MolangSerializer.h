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
MCNAPI ::std::unique_ptr<::MolangScriptArg> deserializeScriptArg(::Json::Value const& json);

MCNAPI ::std::unique_ptr<::MolangVariable> deserializeVariable(::Json::Value const& json);

MCNAPI ::std::unique_ptr<::MolangVariableMap> deserializeVariableMap(::Json::Value const& json);

MCNAPI ::Json::Value serializeScriptArg(::MolangScriptArg const& scriptArg);

MCNAPI ::Json::Value serializeVariableMap(::MolangVariableMap const& variableMap);
// NOLINTEND

} // namespace MolangSerializer
