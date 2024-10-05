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
    static constexpr auto paramOffset       = offsetof(Overload<Params>::TestOffset, params);
    static constexpr auto placeholderOffset = offsetof(Overload<Params>::TestOffset, placeholder);

    constexpr Overload& addParam(std::string_view name, int index) {
        meta::visitIndex<reflection::member_count_v<Params>>(index, [&, this]<size_t I>() {
            using OriginalType       = typename reflection::member_t<I, Params>;
            using RemoveOptionalType = remove_optional_t<OriginalType>;
            using ParamType          = std::conditional_t<
                         traits::is_specialization_of_v<RemoveOptionalType, SoftEnum>,
                         std::string,
                         RemoveOptionalType>;
            int offset     = (int)(paramOffset + reflection::member_offset_v<I, Params>);
            int flagOffset = -1;
            if constexpr (traits::is_specialization_of_v<OriginalType, Optional>) {
                flagOffset = offset + OptionalOffsetGetter<ParamType>::value;
            }

            CommandParameterDataType paramType = CommandParameterDataType::Basic;
            if constexpr (std::is_enum_v<ParamType>) {
                paramType = CommandParameterDataType::Enum;
                CommandRegistrar::getInstance().template tryRegisterEnum<ParamType>();
            } else if constexpr (traits::is_specialization_of_v<RemoveOptionalType, SoftEnum>) {
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
        return *this;
    }

    explicit Overload(CommandHandle& handle, std::weak_ptr<mod::Mod> mod) : OverloadData(handle, std::move(mod)) {}

    class ParamName : public std::string_view {
        std::string_view str;
        int              idx;

        constexpr int indexSearcher(std::string_view s) {
            int i{};
            for (auto& member : reflection::member_name_array_v<Params>) {
                if (member == s) return i;
                i++;
            }
            throw std::invalid_argument("invalid param " + std::string(str));
        }

    public:
        template <class S>
            requires(std::is_constructible_v<std::string_view, S const&>)
        consteval ParamName(S const& s) : str(s),
                                          idx(indexSearcher(s)) {}
        constexpr std::string_view get() const { return str; }
        constexpr int              index() const { return idx; }
    };

public:
    [[nodiscard]] constexpr Overload& optional(ParamName const name) {
        addParam(name.get(), name.index()).back().mIsOptional = true;
        return *this;
    }
    [[nodiscard]] constexpr Overload& required(ParamName const name) {
        addParam(name.get(), name.index()).back().mIsOptional = false;
        return *this;
    }
    [[nodiscard]] constexpr Overload& text(std::string_view text) {
        addTextImpl(text, (int)placeholderOffset);
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

    template <class Fn>
    void constexpr execute(Fn&& fn) {
        using E = std::remove_cvref_t<Fn>;
        setFactory([fn = std::forward<Fn>(fn)]() -> std::unique_ptr<::Command> {
            return std::unique_ptr<Command<Params, E>>(new Command<Params, E>{fn});
        });
    }
};
} // namespace ll::command
