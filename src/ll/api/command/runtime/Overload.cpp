#include "ll/api/command/runtime/Overload.h"
#include "ll/api/base/Containers.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/runtime/ParamKind.h"
#include "ll/api/memory/Closure.h"

namespace ll::command::runtime {

static_assert(ParamKindList::size == ParamKind::Count);
static_assert(ParamKindList::all<std::is_default_constructible>);

struct Overload::Impl {
    std::optional<memory::FunctionalClosure<std::unique_ptr<::Command>>>                    factoryClosure{};
    std::vector<std::pair<std::string, ParamKindType>>                                      params;
    std::unordered_set<std::string, ::ll::detail::transparent_string_hash, std::equal_to<>> storedStr;
};

Overload::Overload(CommandHandle& handle) : OverloadData(handle), impl(std::make_unique<Impl>()) {}

Overload::Overload(Overload&&) = default;
Overload::~Overload()          = default;

char const* Overload::storeStr(std::string_view str) {
    std::lock_guard l{lock()};
    if (!impl->storedStr.contains(str)) {
        impl->storedStr.emplace(str);
    }
    return impl->storedStr.find(str)->c_str();
}

void Overload::addParam(std::string_view name, ParamKindType kind, CommandParameterDataType type) {
    int offset = (int)(sizeof(Command) + impl->params.size() * sizeof(ParamStorageType));
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
Overload& Overload::optional(std::string_view name, ParamKindType kind) {
    std::lock_guard l{lock()};
    if (kind == ParamKind::Enum || kind == ParamKind::SoftEnum) {
        throw std::invalid_argument("enum kind need enum name");
    }
    addParam(name, kind, CommandParameterDataType::Basic);
    return *this;
}
Overload& Overload::required(std::string_view name, ParamKindType kind) {
    std::lock_guard l{lock()};
    optional(name, kind).back().mIsOptional = false;
    return *this;
}
Overload& Overload::optional(std::string_view name, ParamKindType enumKind, std::string_view enumName) {
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
Overload& Overload::required(std::string_view name, ParamKindType enumKind, std::string_view enumName) {
    std::lock_guard l{lock()};
    optional(name, enumKind, enumName).back().mIsOptional = false;
    return *this;
}
Overload& Overload::text(std::string_view text) {
    std::lock_guard l{lock()};
    addTextImpl(text, offsetof(Command, placeholder));
    return *this;
}
Overload& Overload::postfix(std::string_view postfix) {
    std::lock_guard l{lock()};
    back().mEnumNameOrPostfix = addPostfix(postfix);
    back().mParamType         = CommandParameterDataType::Postfix;
    return *this;
}
Overload& Overload::option(CommandParameterOption option) {
    std::lock_guard l{lock()};
    back().addOptions(option);
    return *this;
}
Overload& Overload::deoption(CommandParameterOption option) {
    std::lock_guard l{lock()};
    back().mOptions = (CommandParameterOption)((uchar)(back().mOptions) & (!(uchar)option));
    return *this;
}
void Overload::execute(Command::Executor executor) {
    std::lock_guard l{lock()};
    impl->factoryClosure.emplace(
        [executor = std::move(executor), params = std::move(impl->params)]() -> std::unique_ptr<::Command> {
            return std::unique_ptr<Command>(new ((uint)params.size()) Command{params, executor});
        }
    );
    setFactory(impl->factoryClosure->get());
    getHandle().registerRuntimeOverload(*this);
}
} // namespace ll::command::runtime
