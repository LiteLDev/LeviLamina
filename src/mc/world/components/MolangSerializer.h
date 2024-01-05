#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace MolangSerializer {
// NOLINTBEGIN
// symbol:
// ?deserializeScriptArg@MolangSerializer@@YA?AV?$unique_ptr@UMolangScriptArg@@U?$default_delete@UMolangScriptArg@@@std@@@std@@AEBVValue@Json@@@Z
MCAPI std::unique_ptr<struct MolangScriptArg> deserializeScriptArg(class Json::Value const& json);

// symbol:
// ?deserializeVariable@MolangSerializer@@YA?AV?$unique_ptr@VMolangVariable@@U?$default_delete@VMolangVariable@@@std@@@std@@AEBVValue@Json@@@Z
MCAPI std::unique_ptr<class MolangVariable> deserializeVariable(class Json::Value const& json);

// symbol:
// ?deserializeVariableMap@MolangSerializer@@YA?AV?$unique_ptr@VMolangVariableMap@@U?$default_delete@VMolangVariableMap@@@std@@@std@@AEBVValue@Json@@@Z
MCAPI std::unique_ptr<class MolangVariableMap> deserializeVariableMap(class Json::Value const& json);

// symbol: ?serializeScriptArg@MolangSerializer@@YA?AVValue@Json@@AEBUMolangScriptArg@@@Z
MCAPI class Json::Value serializeScriptArg(struct MolangScriptArg const&);
// NOLINTEND

}; // namespace MolangSerializer
