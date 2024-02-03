#pragma once

#include "mc/server/commands/CommandParameterData.h"

namespace ll::command {
class CommandHandle;
class CommandRegistrar;
class OverloadData {
    friend CommandHandle;
    friend CommandRegistrar;

    enum class Placeholder : uint64 {};

    gsl::not_null<CommandHandle*>     handle;
    CommandRegistry::FactoryFn        factory{};
    std::vector<CommandParameterData> params;

protected:
    constexpr OverloadData(CommandHandle& handle) : handle(&handle) {}

    LLAPI bool tryRegisterEnum(
        std::string const&                                 name,
        std::vector<std::pair<std::string, uint64>> const& values,
        Bedrock::typeid_t<CommandRegistry>                 type,
        CommandRegistry::ParseFn                           parser
    );
    LLAPI bool tryRegisterSoftEnum(std::string const& name, std::vector<std::string> values);

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
};
} // namespace ll::command
