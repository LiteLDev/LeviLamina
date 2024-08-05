#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"
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
        class Bedrock::typeid_t<class CommandRegistry>,
        bool (CommandRegistry::*)(void*, struct CommandRegistry::ParseToken const&, class CommandOrigin const&, int, std::string&, std::vector<std::string>&)
            const,
        char const*,
        ::CommandParameterDataType,
        char const*,
        char const*,
        int,
        bool,
        int
    );

    MCAPI class CommandParameterData& addOptions(::CommandParameterOption options);

    MCAPI ~CommandParameterData();

    // NOLINTEND
};
