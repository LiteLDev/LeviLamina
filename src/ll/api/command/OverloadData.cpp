#include "ll/api/command/OverloadData.h"

#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/base/StdInt.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"

#include "mc/deps/core/utility/typeid_t.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {

struct OverloadData::Impl {
    CommandHandle&                                          handle;
    std::weak_ptr<mod::Mod>                                 mod;
    std::optional<CommandRegistry::Overload::AllocFunction> factoryClosure{}; // for delay emplace
    std::vector<CommandParameterData>                       params;
    std::recursive_mutex                                    mutex;
};

OverloadData::OverloadData(CommandHandle& handle, std::weak_ptr<mod::Mod> mod)
: impl(std::make_unique<Impl>(handle, std::move(mod))) {}

OverloadData& OverloadData::operator=(OverloadData&&) = default;
OverloadData::OverloadData(OverloadData&&)            = default;
OverloadData::~OverloadData()                         = default;

CommandRegistry::Overload::AllocFunction const& OverloadData::getFactory() { return impl->factoryClosure.value(); }
std::vector<CommandParameterData>&              OverloadData::getParams() { return impl->params; }
CommandHandle&                                  OverloadData::getHandle() { return impl->handle; }
CommandRegistrar&                               OverloadData::getRegistrar() { return impl->handle.getRegistrar(); }
std::weak_ptr<mod::Mod>&                        OverloadData::getMod() { return impl->mod; }

char const* OverloadData::storeStr(std::string_view str) {
    if (str.empty()) {
        return nullptr;
    }
    return impl->handle.storeStr(str);
}

std::lock_guard<std::recursive_mutex> OverloadData::lock() { return std::lock_guard{impl->mutex}; }

CommandParameterData& OverloadData::back() { return impl->params.back(); }

CommandParameterData& OverloadData::addParamImpl(
    Bedrock::typeid_t<CommandRegistry> id,
    CommandRegistry::ParseFunction     parser,
    std::string_view                   name,
    CommandParameterDataType           type,
    std::string_view                   enumNameOrPostfix,
    std::string_view                   subChain,
    int                                offset,
    int                                flagOffset,
    bool                               optional,
    CommandParameterOption             options
) {
    std::lock_guard lock{impl->mutex};
    return impl->params.emplace_back(
        id,
        parser,
        std::string{name},
        type,
        storeStr(enumNameOrPostfix),
        storeStr(subChain),
        offset,
        optional,
        flagOffset,
        options
    );
}
CommandParameterData& OverloadData::addTextImpl(std::string_view text, int offset) {
    std::lock_guard lock{impl->mutex};
    return addParamImpl(
        Bedrock::type_id<CommandRegistry, Placeholder>(),
        &CommandRegistry::parse<Placeholder>,
        text,
        CommandParameterDataType::Enum,
        impl->handle.addText(text),
        {},
        offset,
        -1,
        false,
        CommandParameterOption::EnumAutocompleteExpansion
    );
}
void OverloadData::setFactory(CommandRegistry::Overload::AllocFunction&& fn) {
    std::lock_guard lock{impl->mutex};
    impl->factoryClosure.emplace(std::move(fn));
    impl->handle.registerOverload(*this);
}
} // namespace ll::command
