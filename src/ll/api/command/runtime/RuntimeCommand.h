#pragma once

#include "ll/api/base/Containers.h"
#include "ll/api/command/runtime/ParamKind.h"

#include "mc/world/level/Command.h"

namespace ll::command {
class RuntimeOverload;
class RuntimeCommand : public ::Command {
    friend RuntimeOverload;

public:
    using Executor = std::function<void(CommandOrigin const&, CommandOutput&, RuntimeCommand const&)>;

private:
    uint64                            placeholder{};
    Executor const&                   executor;
    UnorderedStringMap<uint64> const& paramIndexMap;
    size_t                            paramCount;

    LLAPI RuntimeCommand(
        UnorderedStringMap<uint64> const&                         map,
        std::vector<std::pair<std::string, ParamKindType>> const& params,
        Executor const&                                           executor
    );

public:
    LLAPI ~RuntimeCommand() override;

    static void* operator new(size_t) = delete;

    LLNDAPI static void* operator new(size_t, uint paramCount);
    LLAPI static void    operator delete(void*, uint paramCount);
    LLAPI static void    operator delete(void*);

    void execute(CommandOrigin const&, CommandOutput&) const override;

    LLNDAPI ParamStorageType const& operator[](std::string_view name) const;

    LLNDAPI ParamStorageType const& operator[](size_t idx) const;
};
} // namespace ll::command
