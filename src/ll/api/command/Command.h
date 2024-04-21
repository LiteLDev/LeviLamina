#pragma once

#include <memory>

#include "ll/api/base/StdInt.h"
#include "ll/api/reflection/Reflection.h" // IWYU pragma: keep

#include "mc/world/level/Command.h"

namespace ll::command {

namespace detail {
LLAPI void printCommandError(::Command const&, ::CommandOutput&) noexcept;
}

struct EmptyParam {};

template <reflection::Reflectable P, class E>
    requires(std::default_initializable<P>)
class Command : public ::Command {
    uint64   placeholder{};
    P        parameters;
    E const& executor;

    Command() = default;

public:
    Command(E const& executor) : executor(executor) {}

    virtual ~Command() = default;

    void execute(class CommandOrigin const& origin, class CommandOutput& output) const override {
        try {
            if constexpr (std::is_invocable_v<E, CommandOrigin const&, CommandOutput&, P const&, ::Command const&>) {
                executor(origin, output, parameters, *this);
            } else if constexpr (std::is_invocable_v<E, CommandOrigin const&, CommandOutput&, P const&>) {
                executor(origin, output, parameters);
            } else if constexpr (std::is_invocable_v<E, CommandOrigin const&, CommandOutput&>) {
                executor(origin, output);
            } else {
                executor();
            }
        } catch (...) {
            ::ll::command::detail::printCommandError(*this, output);
        }
    }
};
} // namespace ll::command
