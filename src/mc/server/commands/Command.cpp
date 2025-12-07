#include "mc/server/commands/Command.h"
#include "mc/server/commands/CommandRegistry.h"

std::string Command::getCommandName() const { return mRegistry->symbolToString(mCommandSymbol); }
