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

            using OriginalType = std::remove_cvref_t<decltype(val)>;

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
            std::terminate();
        }
        return *this;
    }

    explicit Overload(CommandHandle& handle) : OverloadData(handle) {}

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

    [[nodiscard]] constexpr Overload& postfix(std::string_view postfix) {
        back().mEnumNameOrPostfix = addPostfix(postfix);
        back().mParamType         = CommandParameterDataType::Postfix;
        return *this;
    }
    [[nodiscard]] constexpr Overload& option(CommandParameterOption option) {
        back().addOptions(option);
        return *this;
    }
    [[nodiscard]] constexpr Overload& deoption(CommandParameterOption option) {
        back().mOptions = (CommandParameterOption)((uchar)(back().mOptions) & (!(uchar)option));
        return *this;
    }

    template <auto Executor>
    void constexpr execute() {
        setFactory(&Command<Params, Executor>::make);
    }
};
} // namespace ll::command
