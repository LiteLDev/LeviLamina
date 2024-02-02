#pragma once

#include "ll/api/command/Command.h"
#include "ll/api/command/EnumName.h"
#include "ll/api/command/Optional.h"
#include "ll/api/command/SoftEnum.h"

#include "mc/server/commands/CommandParameterData.h"

namespace ll::command {
class CommandRegistrar;
class CommandHandle {
    enum class Placeholder {};

public:
    std::string              name;
    std::vector<std::string> alias;

    std::string              description;
    ::CommandPermissionLevel requirement;
    CommandFlag              flag = CommandFlagValue::None;

    class OverloadData {
    public:
        CommandHandle&                      handle;
        CommandRegistry::FactoryFn          factory{};
        std::vector<::CommandParameterData> params;
    };

    std::vector<OverloadData> overloads;

    void registerOverload(OverloadData&&);

    char const* addText(std::string_view);


    template <reflection::Reflectable Params>
    class Overload : public OverloadData {
    public:
        struct TestOffset : public ::Command {
            uint64 placeholder{};
            Params p;
        };
        static inline auto ParamOffset = offsetof(Overload<Params>::TestOffset, p);

        constexpr Overload& optional(std::string_view name) {
            bool hasName{};
            reflection::forEachMember((*(Params*)ParamOffset), [&, this](std::string_view param, auto& val) {
                if (name != param) {
                    return;
                }
                hasName = true;

                int offset         = (int)(size_t)std::addressof(val);
                int flagOffset     = -1;
                using OriginalType = std::remove_cvref_t<decltype(val)>;
                using ParamType    = std::conditional_t<
                    concepts::is_specialization_of_v<OriginalType, SoftEnum>,
                    std::string,
                    remove_optional_t<OriginalType>>;
                if constexpr (concepts::is_specialization_of_v<OriginalType, Optional>) {
                    flagOffset = offset + OptionalOffsetGetter<ParamType>::value;
                }
                CommandParameterDataType paramType = CommandParameterDataType::Basic;
                if constexpr (std::is_enum_v<ParamType>) {
                    paramType = CommandParameterDataType::Enum;
                } else if constexpr (concepts::is_specialization_of_v<ParamType, SoftEnum>) {
                    paramType = CommandParameterDataType::SoftEnum;
                }
                params.emplace_back(
                    Bedrock::type_id<CommandRegistry, ParamType>(),
                    &CommandRegistry::parse<ParamType>,
                    name.data(),
                    paramType,
                    enum_name<OriginalType>::value,
                    nullptr,
                    offset,
                    true,
                    flagOffset
                );
            });
            if (!hasName) {
                throw std::runtime_error("miss param " + std::string(name));
            }
            return *this;
        }
        constexpr Overload& required(std::string_view name) {
            optional(name).params.back().mIsOptional = false;
            return *this;
        }

        constexpr Overload& text(std::string_view text) {
            params
                .emplace_back(
                    Bedrock::type_id<CommandRegistry, Placeholder>(),
                    &CommandRegistry::parse<Placeholder>,
                    text.data(),
                    CommandParameterDataType::Enum,
                    handle.addText(text),
                    nullptr,
                    offsetof(Overload<Params>::TestOffset, placeholder),
                    false,
                    -1
                )
                .addOptions(::CommandParameterOption::EnumAutocompleteExpansion);
            return *this;
        }

        // constexpr Overload& postfix(std::string_view postfix) {
        //     auto& last      = params.back();
        //     last.mPostfix   = postfix.data();
        //     last.mParamType = CommandParameterDataType::Postfix;
        //     return *this;
        // }
        constexpr Overload& option(::CommandParameterOption option) {
            params.back().addOptions(option);
            return *this;
        }
        template <auto Executor>
        void constexpr execute() {
            factory = &Command<Params, Executor>::make;
            handle.registerOverload(std::move(*this));
        }
    };

    template <reflection::Reflectable Params>
    constexpr auto overload() -> Overload<Params> {
        return Overload<Params>{*this};
    }
};
} // namespace ll::command
