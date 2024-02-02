#pragma once

#include "ll/api/reflection/Reflection.h"

#include "mc/world/level/Command.h"

namespace ll::command {

template <reflection::Reflectable Params, auto Executor>
    requires(std::default_initializable<Params>)
class Command : public ::Command {
    uint64 placeholder{};
    Params parameters;

    Command() = default;

public:
    static std::unique_ptr<::Command> make() { return std::unique_ptr<Command>(new Command{}); }

    virtual ~Command() = default;
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const {
        Executor(origin, output, parameters);
    }
};

} // namespace ll::command
