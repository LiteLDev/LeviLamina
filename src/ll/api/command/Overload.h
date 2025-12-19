#pragma once

#include <cstddef>
#include <stdexcept>
#include <string>
#include <string_view>
#include <type_traits>

#include "ll/api/command/Command.h"
#include "ll/api/command/OverloadData.h"
#include "ll/api/command/ParamTraits.h"

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

    template <size_t I, bool Opt>
    constexpr void addParam(std::string_view name) {
        using OriginalType       = std::remove_cvref_t<typename reflection::member_t<I, Params>>;
        using RemoveOptionalType = remove_optional_t<OriginalType>;
        int offset               = (int)(paramOffset + reflection::member_offset_v<I, Params>);
        int flagOffset           = -1;
        if constexpr (traits::is_specialization_of_v<OriginalType, Optional>) {
            flagOffset = offset + OptionalOffsetGetter<RemoveOptionalType>::value;
        }
        using Traits = ParamTraits<RemoveOptionalType>;
        Traits::transformData(
            addParamImpl(
                Traits::typeId(),
                Traits::parseFn(),
                name,
                Traits::dataType(),
                Traits::enumNameOrPostfix(),
                Traits::subChain(),
                offset,
                flagOffset,
                Opt,
                Traits::options()
            ),
            getRegistrar()
        );
    }
    explicit Overload(CommandHandle& handle, std::weak_ptr<mod::Mod> mod) : OverloadData(handle, std::move(mod)) {}

    class ParamName {
        std::string_view str;
        int              idx;

        constexpr int indexSearcher(std::string_view s) {
            int i{};
            for (auto& member : reflection::member_name_array_v<Params>) {
                if (member == s) return i;
                i++;
            }
#ifndef __INTELLISENSE__
            throw std::invalid_argument("invalid param " + std::string(str));
#else
            return -1;
#endif
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
        meta::visitIndex<reflection::member_count_v<Params>>(name.index(), [&]<size_t I>() {
            addParam<I, true>(name.get());
        });
        return *this;
    }
    [[nodiscard]] constexpr Overload& required(ParamName const name) {
        meta::visitIndex<reflection::member_count_v<Params>>(name.index(), [&]<size_t I>() {
            addParam<I, false>(name.get());
        });
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
