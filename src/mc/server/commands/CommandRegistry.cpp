#include "mc/server/commands/CommandRegistry.h"
#include "mc/server/commands/CommandParameterData.h"

CommandRegistry::Overload::Overload(CommandVersion ver, FactoryFn* factory) : version(ver), alloc(factory) {}
