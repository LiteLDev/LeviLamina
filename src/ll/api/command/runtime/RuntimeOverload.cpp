#include "ll/api/command/runtime/RuntimeOverload.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/runtime/ParamKind.h"

namespace ll::command {

static_assert(ParamKindList::size == ParamKind::Count);
static_assert(ParamKindList::all<std::is_default_constructible>);

struct RuntimeOverload::Impl {
    std::vector<std::pair<std::string, ParamKindType>> params;
};

RuntimeOverload::RuntimeOverload(CommandHandle& handle, std::weak_ptr<plugin::Plugin> plugin)
: OverloadData(handle, std::move(plugin)),
  impl(std::make_unique<Impl>()) {}

RuntimeOverload::RuntimeOverload(RuntimeOverload&&) = default;
RuntimeOverload::~RuntimeOverload()                 = default;

void RuntimeOverload::addParam(std::string_view name, ParamKindType kind, CommandParameterDataType type) {
    int offset = (int)(sizeof(RuntimeCommand) + impl->params.size() * sizeof(ParamStorageType));
    meta::visitIndex<ParamKind::Count>(kind, [&]<size_t N> {
        using ParamType = ParamKindList::get<N>;
        addParamImpl(
            Bedrock::type_id<CommandRegistry, ParamType>(),
            &CommandRegistry::parse<ParamType>,
            name,
            type,
            nullptr,
            offset,
            offset + OptionalOffsetGetter<ParamStorageType::value_type>::value,
            true
        );
    });
    impl->params.emplace_back(name, kind);
}
RuntimeOverload& RuntimeOverload::optional(std::string_view name, ParamKindType kind) {
    std::lock_guard l{lock()};
    if (kind == ParamKind::Enum || kind == ParamKind::SoftEnum) {
        throw std::invalid_argument("enum kind need enum name");
    }
    addParam(name, kind, CommandParameterDataType::Basic);
    return *this;
}
RuntimeOverload& RuntimeOverload::required(std::string_view name, ParamKindType kind) {
    std::lock_guard l{lock()};
    optional(name, kind).back().mIsOptional = false;
    return *this;
}
RuntimeOverload& RuntimeOverload::optional(std::string_view name, ParamKindType enumKind, std::string_view enumName) {
    std::lock_guard l{lock()};
    if (enumKind != ParamKind::Enum && enumKind != ParamKind::SoftEnum) {
        throw std::invalid_argument("invalid enum kind");
    }
    if (enumKind == ParamKind::Enum) {
        addParam(name, enumKind, CommandParameterDataType::Enum);
    } else {
        addParam(name, enumKind, CommandParameterDataType::SoftEnum);
    }
    back().mEnumNameOrPostfix = storeStr(enumName);
    return *this;
}
RuntimeOverload& RuntimeOverload::required(std::string_view name, ParamKindType enumKind, std::string_view enumName) {
    std::lock_guard l{lock()};
    optional(name, enumKind, enumName).back().mIsOptional = false;
    return *this;
}
RuntimeOverload& RuntimeOverload::text(std::string_view text) {
    std::lock_guard l{lock()};
    addTextImpl(text, (int)offsetof(RuntimeCommand, placeholder));
    return *this;
}
RuntimeOverload& RuntimeOverload::postfix(std::string_view postfix) {
    std::lock_guard l{lock()};
    back().mEnumNameOrPostfix = storeStr(postfix);
    back().mParamType         = CommandParameterDataType::Postfix;
    return *this;
}
RuntimeOverload& RuntimeOverload::option(CommandParameterOption option) {
    std::lock_guard l{lock()};
    back().addOptions(option);
    return *this;
}
RuntimeOverload& RuntimeOverload::deoption(CommandParameterOption option) {
    std::lock_guard l{lock()};
    back().mOptions = (CommandParameterOption)((uchar)(back().mOptions) & (!(uchar)option));
    return *this;
}
void RuntimeOverload::execute(RuntimeCommand::Executor fn) {
    std::lock_guard l{lock()};

    UnorderedStringMap<uint64> map;
    size_t                     idx{0};

    for (auto& [name, k] : impl->params) {
        map.try_emplace(name, idx++);
    }
    setFactory(
        [executor = std::move(fn), params = std::move(impl->params), map = std::move(map)](
        ) -> std::unique_ptr<::Command> {
            return std::unique_ptr<RuntimeCommand>(new ((uint)params.size()) RuntimeCommand{map, params, executor});
        }
    );
}
} // namespace ll::command
