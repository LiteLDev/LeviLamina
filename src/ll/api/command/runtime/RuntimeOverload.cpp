#include "ll/api/command/runtime/RuntimeOverload.h"
#include "ll/api/base/Containers.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/runtime/ParamKind.h"
#include "ll/api/memory/Closure.h"

namespace ll::command {

static_assert(ParamKindList::size == ParamKind::Count);
static_assert(ParamKindList::all<std::is_default_constructible>);

struct RuntimeOverload::Impl {
    std::optional<memory::FunctionalClosure<std::unique_ptr<::Command>>>                    factoryClosure{};
    std::vector<std::pair<std::string, ParamKindType>>                                      params;
    std::unordered_set<std::string, ::ll::detail::transparent_string_hash, std::equal_to<>> storedStr;
};

RuntimeOverload::RuntimeOverload(CommandHandle& handle) : OverloadData(handle), impl(std::make_unique<Impl>()) {}

RuntimeOverload::RuntimeOverload(RuntimeOverload&&) = default;
RuntimeOverload::~RuntimeOverload()                 = default;

char const* RuntimeOverload::storeStr(std::string_view str) {
    std::lock_guard l{lock()};
    if (!impl->storedStr.contains(str)) {
        impl->storedStr.emplace(str);
    }
    return impl->storedStr.find(str)->c_str();
}

void RuntimeOverload::addParam(std::string_view name, ParamKindType kind, CommandParameterDataType type) {
    int offset = (int)(sizeof(RuntimeCommand) + impl->params.size() * sizeof(ParamStorageType));
    meta::visitIndex<ParamKind::Count>(
        [&]<size_t N> {
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
        },
        kind
    );
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
    addTextImpl(text, offsetof(RuntimeCommand, placeholder));
    return *this;
}
RuntimeOverload& RuntimeOverload::postfix(std::string_view postfix) {
    std::lock_guard l{lock()};
    back().mEnumNameOrPostfix = addPostfix(postfix);
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
void RuntimeOverload::execute(RuntimeCommand::Executor executor) {
    std::lock_guard l{lock()};

    UnorderedStringMap<uint64> map;
    size_t                     idx{0};

    for (auto& [name, k] : impl->params) {
        map.try_emplace(name, idx++);
    }
    impl->factoryClosure.emplace(
        [executor = std::move(executor), params = std::move(impl->params), map = std::move(map)](
        ) -> std::unique_ptr<::Command> {
            return std::unique_ptr<RuntimeCommand>(new ((uint)params.size()) RuntimeCommand{map, params, executor});
        }
    );
    setFactory(impl->factoryClosure->get());
    getHandle().registerRuntimeOverload(*this);
}
} // namespace ll::command
