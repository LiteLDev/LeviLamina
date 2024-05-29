#pragma once

#include "ll/api/command/OverloadData.h"
#include "ll/api/command/runtime/ParamKind.h"
#include "ll/api/command/runtime/RuntimeCommand.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandParameterDataType.h"

namespace ll::command {
class RuntimeOverload : private OverloadData {
    friend CommandHandle;

    struct Impl;
    std::unique_ptr<Impl> impl;

    RuntimeOverload(CommandHandle&, std::weak_ptr<plugin::Plugin> plugin);

    void addParam(std::string_view name, ParamKindType kind, CommandParameterDataType type);

public:
    LLNDAPI RuntimeOverload& optional(std::string_view name, ParamKindType kind);

    LLNDAPI RuntimeOverload& required(std::string_view name, ParamKindType kind);

    LLNDAPI RuntimeOverload& optional(std::string_view name, ParamKindType enumKind, std::string_view enumName);

    LLNDAPI RuntimeOverload& required(std::string_view name, ParamKindType enumKind, std::string_view enumName);

    LLNDAPI RuntimeOverload& text(std::string_view text);

    LLNDAPI RuntimeOverload& postfix(std::string_view postfix);

    LLNDAPI RuntimeOverload& option(CommandParameterOption option);

    LLNDAPI RuntimeOverload& deoption(CommandParameterOption option);

    LLAPI void execute(RuntimeCommand::Executor fn);

    LLAPI RuntimeOverload(RuntimeOverload&&);
    LLAPI ~RuntimeOverload();
};
} // namespace ll::command
