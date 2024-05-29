#pragma once

#include <cstddef>
#include <stdexcept>
#include <string>
#include <string_view>
#include <type_traits>

#include "ll/api/base/StdInt.h"
#include "ll/api/command/Command.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/EnumName.h"
#include "ll/api/command/Optional.h"
#include "ll/api/command/OverloadData.h"
#include "ll/api/command/SoftEnum.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"
#include "mc/world/level/Command.h"

namespace ll::command {

template <reflection::Reflectable Params>
class Overload : private OverloadData {
    friend CommandHandle;

    struct TestOffset : private ::Command {
        uint64 placeholder{};
        Params params;
    };
    static inline auto ParamOffset       = offsetof(Overload<Params>::TestOffset, params);
    static inline auto PlaceholderOffset = offsetof(Overload<Params>::TestOffset, placeholder);

    constexpr Overload& addParam(std::string_view name) {
        bool hasName{};
        reflection::forEachMember((*(Params*)ParamOffset), [&, this](std::string_view param, auto& val) {
            if (name != param) {
                return;
            }
            hasName = true;

            using OriginalType = std::remove_cvref_t<decltype((val))>;

            using RemoveOptionalType = remove_optional_t<OriginalType>;

            using ParamType = std::conditional_t<
                concepts::is_specialization_of_v<RemoveOptionalType, SoftEnum>,
                std::string,
                RemoveOptionalType>;

            int offset     = (int)(size_t)std::addressof(val);
            int flagOffset = -1;
            if constexpr (concepts::is_specialization_of_v<OriginalType, Optional>) {
                flagOffset = offset + OptionalOffsetGetter<ParamType>::value;
            }

            CommandParameterDataType paramType = CommandParameterDataType::Basic;
            if constexpr (std::is_enum_v<ParamType>) {
                paramType = CommandParameterDataType::Enum;
                CommandRegistrar::getInstance().template tryRegisterEnum<ParamType>();
            } else if constexpr (concepts::is_specialization_of_v<RemoveOptionalType, SoftEnum>) {
                paramType = CommandParameterDataType::SoftEnum;
                CommandRegistrar::getInstance().template tryRegisterSoftEnum<RemoveOptionalType>();
            }

            addParamImpl(
                Bedrock::type_id<CommandRegistry, ParamType>(),
                &CommandRegistry::parse<ParamType>,
                name,
                paramType,
                enum_name_v<RemoveOptionalType>,
                offset,
                flagOffset,
                true
            );
        });
        if (!hasName) {
            throw std::invalid_argument("invalid param " + std::string(name));
        }
        return *this;
    }

    explicit Overload(CommandHandle& handle, std::weak_ptr<plugin::Plugin> plugin)
    : OverloadData(handle, std::move(plugin)) {}

public:
    [[nodiscard]] constexpr Overload& optional(std::string_view name) {
        addParam(name).back().mIsOptional = true;
        return *this;
    }
    [[nodiscard]] constexpr Overload& required(std::string_view name) {
        addParam(name).back().mIsOptional = false;
        return *this;
    }
    [[nodiscard]] constexpr Overload& text(std::string_view text) {
        addTextImpl(text, (int)PlaceholderOffset);
        return *this;
    }
    template <class Fn>
    [[nodiscard]] constexpr Overload& modify(Fn&& fn) {
        std::invoke(std::forward<Fn>(fn), back());
        return *this;
    }

    [[nodiscard]] constexpr Overload& postfix(std::string_view postfix) {
        return modify([&](auto&& val) {
            val.mEnumNameOrPostfix = storeStr(postfix);
            val.mParamType         = CommandParameterDataType::Postfix;
        });
    }
    [[nodiscard]] constexpr Overload& option(CommandParameterOption option) {
        return modify([&](auto&& val) { val.addOptions(option); });
    }
    [[nodiscard]] constexpr Overload& deoption(CommandParameterOption option) {
        return modify([&](auto&& val) {
            val.mOptions = (CommandParameterOption)((uchar)(val.mOptions) & (!(uchar)option));
        });
        return *this;
    }

    template <auto Executor>
    [[deprecated("deprecated: please put the function as a parameter in the bracket")]] void constexpr execute() {
        using E = std::remove_cvref_t<decltype((Executor))>;
        setFactory([&]() -> std::unique_ptr<::Command> {
            return std::unique_ptr<Command<Params, E>>(new Command<Params, E>{Executor});
        });
    }

    template <class Fn>
    void constexpr execute(Fn&& fn) {
        using E = std::remove_cvref_t<Fn>;
        setFactory([fn = std::forward<Fn>(fn)]() -> std::unique_ptr<::Command> {
            return std::unique_ptr<Command<Params, E>>(new Command<Params, E>{fn});
        });
    }
};
} // namespace ll::command
