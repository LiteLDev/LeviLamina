#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

class CommandParameterData {
public:
    // prevent constructor by default
    CommandParameterData& operator=(CommandParameterData const&);
    CommandParameterData();

public:
    // NOLINTBEGIN
    MCAPI CommandParameterData(class CommandParameterData const& p);

    MCAPI CommandParameterData(
        class Bedrock::typeid_t<class CommandRegistry> typeIndex,
        bool (CommandRegistry::*
                  parse)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        char const*                name,
        ::CommandParameterDataType paramType,
        char const*                enumNameOrPostfix,
        char const*                chainedSubcommand,
        int                        offset,
        bool                       optional,
        int                        setOffset
    );

    MCAPI class CommandParameterData& addOptions(::CommandParameterOption options);

    MCAPI ~CommandParameterData();

    // NOLINTEND
};
