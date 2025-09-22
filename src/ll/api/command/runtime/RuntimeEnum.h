#pragma once

#include <string>

#include "ll/api/base/StdInt.h"
#include "ll/api/command/ParamTraits.h"

namespace ll::command {
struct RuntimeEnum {
    std::string name;
    uint64      index;
};
struct RuntimeSoftEnum : std::string {
    using std::string::string;
};
template <>
struct ParamTraits<RuntimeEnum> : ParamTraitsBase<RuntimeEnum> {
    struct Parser {
        bool operator()(
            CommandRegistry const&             registry,
            void*                              storage,
            CommandRegistry::ParseToken const& token,
            CommandOrigin const&,
            int,
            std::string&,
            std::vector<std::string>&
        ) const {
            *(RuntimeEnum*)storage = {token.toString(), registry.getEnumData(token)};
            return true;
        }
    };
    static constexpr CommandParameterDataType dataType() { return CommandParameterDataType::Enum; }
    static constexpr CommandParameterOption   options() { return CommandParameterOption::EnumAutocompleteExpansion; }
};
template <>
struct ParamTraits<RuntimeSoftEnum> : ParamTraitsBase<RuntimeSoftEnum> {
    static constexpr CommandParameterDataType    dataType() { return CommandParameterDataType::SoftEnum; }
    static constexpr CommandParameterOption      options() { return CommandParameterOption::EnumAutocompleteExpansion; }
    static inline CommandRegistry::ParseFunction parseFn() { return &CommandRegistry::parse<std::string>; }
    static Bedrock::typeid_t<CommandRegistry>    typeId() { return Bedrock::type_id<CommandRegistry, std::string>(); }
};
} // namespace ll::command
