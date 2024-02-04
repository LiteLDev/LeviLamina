#pragma once

#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "gsl/pointers"

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {
class CommandHandle;
class CommandRegistrar;
class OverloadData {
    friend CommandHandle;
    friend CommandRegistrar;

    enum class Placeholder : uint64 {};

    struct Impl;
    std::unique_ptr<Impl> impl;

    CommandRegistry::FactoryFn        getFactory();
    std::vector<CommandParameterData> moveParams();

protected:
    LLAPI explicit OverloadData(CommandHandle& handle);

    LLAPI CommandParameterData& back();

    LLAPI CommandParameterData& addParamImpl(
        Bedrock::typeid_t<CommandRegistry> id,
        CommandRegistry::ParseFn           parser,
        std::string_view                   name,
        CommandParameterDataType           type,
        char const*                        enumNameOrPostfix,
        int                                offset,
        int                                flagOffset,
        bool                               optional
    );

    LLAPI CommandParameterData& addTextImpl(std::string_view text, int offset);

    LLAPI void setFactory(CommandRegistry::FactoryFn fn);

public:
    LLAPI ~OverloadData();
};
} // namespace ll::command
