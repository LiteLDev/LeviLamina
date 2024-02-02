#pragma once

#include "ll/api/reflection/Reflection.h"

#include "mc/world/level/Command.h"

namespace ll::command {

template <reflection::Reflectable T, auto Executor>
    requires(std::default_initializable<T>)
class Command : public ::Command {
    T parameters;

    Command() {
        reflection::forEachMember(parameters, [](std::string_view name, auto& member) {
            using member_type = std::remove_cvref_t<decltype(member)>;
            if constexpr (concepts::IsOptional<member_type>) {
                if (!member) member.emplace();
            }
        });
    }

public:
    static std::unique_ptr<::Command> make() { return std::unique_ptr<Command>(new Command{}); }

    virtual ~Command() = default;
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const {
        Executor(origin, output, parameters);
    }
};

} // namespace ll::command
