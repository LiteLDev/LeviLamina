#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/typeid_t.h"

enum class ClientInputLockCategory {};

MCTAPI class Bedrock::typeid_t<CommandRegistry>
Bedrock::type_id<class CommandRegistry, enum class ClientInputLockCategory>();
