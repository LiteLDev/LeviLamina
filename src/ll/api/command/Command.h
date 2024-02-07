#pragma once

#include <memory>

#include "ll/api/base/StdInt.h"
#include "ll/api/reflection/Reflection.h" // IWYU pragma: keep

#include "mc/world/level/Command.h"

namespace ll::command {

struct EmptyParam {};

template <reflection::Reflectable Params, auto Executor>
    requires(std::default_initializable<Params>)
class Command : public ::Command {
    uint64 placeholder{};
    Params parameters;

    Command() = default;

public:
    static std::unique_ptr<::Command> make() { return std::unique_ptr<Command>(new Command{}); }

    virtual ~Command() = default;
    void execute(class CommandOrigin const& origin, class CommandOutput& output) const override {
        if constexpr (requires { Executor(origin, output, parameters, *this); }) {
            Executor(origin, output, parameters, *this);
        } else if constexpr (requires { Executor(origin, output, parameters); }) {
            Executor(origin, output, parameters);
        } else {
            Executor(origin, output);
        }
    }
};

} // namespace ll::command
