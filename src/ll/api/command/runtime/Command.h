#pragma once

#include "ll/api/base/Containers.h"
#include "ll/api/command/runtime/ParamKind.h"

#include "mc/world/level/Command.h"

namespace ll::command::runtime {
class Overload;
class Command : public ::Command {
    friend Overload;

public:
    using Executor = std::function<void(CommandOrigin const&, CommandOutput&, runtime::Command const&)>;

private:
    uint64                     placeholder{};
    Executor                   executor;
    UnorderedStringMap<uint64> paramIndexMap;
    size_t                     paramCount;

    LLAPI Command(std::vector<std::pair<std::string, ParamKindType>> const& params, Executor const& executor);

public:
    LLAPI ~Command() override;

    static void* operator new(size_t) = delete;

    LLNDAPI static void* operator new(size_t, uint paramCount);
    LLAPI static void    operator delete(void*, uint paramCount);
    LLAPI static void    operator delete(void*);

    void execute(CommandOrigin const&, CommandOutput&) const override;

    LLNDAPI ParamStorageType const& operator[](std::string_view) const;
};
} // namespace ll::command::runtime
