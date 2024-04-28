#include "ll/api/command/OverloadData.h"

#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/base/StdInt.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/memory/Closure.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {

struct OverloadData::Impl {
    CommandHandle&                                                       handle;
    std::weak_ptr<plugin::Plugin>                                        plugin;
    std::optional<memory::FunctionalClosure<CommandRegistry::FactoryFn>> factoryClosure{}; // for delay emplace
    std::vector<CommandParameterData>                                    params;
    std::recursive_mutex                                                 mutex;
};

OverloadData::OverloadData(CommandHandle& handle, std::weak_ptr<plugin::Plugin> plugin)
: impl(std::make_unique<Impl>(handle, std::move(plugin))) {}

OverloadData& OverloadData::operator=(OverloadData&&) = default;
OverloadData::OverloadData(OverloadData&&)            = default;
OverloadData::~OverloadData()                         = default;

CommandRegistry::FactoryFn*        OverloadData::getFactory() { return impl->factoryClosure.value().get(); }
std::vector<CommandParameterData>& OverloadData::getParams() { return impl->params; }
CommandHandle&                     OverloadData::getHandle() { return impl->handle; }
std::weak_ptr<plugin::Plugin>&     OverloadData::getPlugin() { return impl->plugin; }

char const* OverloadData::storeStr(std::string_view str) { return impl->handle.storeStr(str); }

std::lock_guard<std::recursive_mutex> OverloadData::lock() { return std::lock_guard{impl->mutex}; }

CommandParameterData& OverloadData::back() { return impl->params.back(); }

CommandParameterData& OverloadData::addParamImpl(
    Bedrock::typeid_t<CommandRegistry> id,
    CommandRegistry::ParseFn           parser,
    std::string_view                   name,
    CommandParameterDataType           type,
    char const*                        enumNameOrPostfix,
    int                                offset,
    int                                flagOffset,
    bool                               optional
) {
    std::lock_guard lock{impl->mutex};
    auto&           param =
        impl->params.emplace_back(id, parser, std::string{name}, type, enumNameOrPostfix, offset, optional, flagOffset);
    if (id == Bedrock::type_id<CommandRegistry, CommandBlockName>()
        || id == Bedrock::type_id<CommandRegistry, CommandItem>()) {
        param.addOptions(CommandParameterOption::HasSemanticConstraint);
    }
    if (type == CommandParameterDataType::Enum) {
        param.addOptions(CommandParameterOption::EnumAutocompleteExpansion);
    }
    return param;
}
CommandParameterData& OverloadData::addTextImpl(std::string_view text, int offset) {
    std::lock_guard lock{impl->mutex};
    return addParamImpl(
        Bedrock::type_id<CommandRegistry, Placeholder>(),
        &CommandRegistry::parse<Placeholder>,
        text,
        CommandParameterDataType::Enum,
        impl->handle.addText(text),
        offset,
        -1,
        false
    );
}
void OverloadData::setFactory(std::function<std::unique_ptr<::Command>()>&& fn) {
    std::lock_guard lock{impl->mutex};
    impl->factoryClosure.emplace(std::move(fn));
    impl->handle.registerOverload(*this);
}
} // namespace ll::command
