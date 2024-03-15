#pragma once

#include "ll/api/command/OverloadData.h"
#include "ll/api/command/runtime/Command.h"
#include "ll/api/command/runtime/ParamKind.h"

#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandOutput.h"
#include "mc/server/commands/CommandParameterDataType.h"

namespace ll::command::runtime {
class Overload : private OverloadData {
    friend CommandHandle;

    struct Impl;
    std::unique_ptr<Impl> impl;

    Overload(CommandHandle&);

    char const* storeStr(std::string_view);

    void addParam(std::string_view name, ParamKindType kind, CommandParameterDataType type);

public:
    LLNDAPI Overload& optional(std::string_view name, ParamKindType kind);

    LLNDAPI Overload& required(std::string_view name, ParamKindType kind);

    LLNDAPI Overload& optional(std::string_view name, ParamKindType enumKind, std::string_view enumName);

    LLNDAPI Overload& required(std::string_view name, ParamKindType enumKind, std::string_view enumName);

    LLNDAPI Overload& text(std::string_view text);

    LLNDAPI Overload& postfix(std::string_view postfix);

    LLNDAPI Overload& option(CommandParameterOption option);

    LLNDAPI Overload& deoption(CommandParameterOption option);

    LLAPI void execute(Command::Executor executor);

    LLAPI Overload(Overload&&);
    LLAPI ~Overload();
};
} // namespace ll::command::runtime
