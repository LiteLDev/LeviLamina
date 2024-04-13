#include "ll/api/command/OverloadData.h"

#include <stdexcept>
#include <string>
#include <string_view>
#include <utility>
#include <vector>

#include "ll/api/base/StdInt.h"
#include "ll/api/command/CommandHandle.h"
#include "ll/api/command/CommandRegistrar.h"

#include "mc/deps/core/common/bedrock/typeid_t.h"
#include "mc/server/commands/CommandParameterData.h"
#include "mc/server/commands/CommandParameterDataType.h"
#include "mc/server/commands/CommandParameterOption.h"
#include "mc/server/commands/CommandRegistry.h"

namespace ll::command {

struct OverloadData::Impl {
    CommandHandle&                    handle;
    CommandRegistry::FactoryFn        factory{};
    std::vector<CommandParameterData> params;
    std::recursive_mutex              mutex;
};

OverloadData::OverloadData(CommandHandle& handle) : impl(std::make_unique<Impl>(handle)) {}

OverloadData::OverloadData(OverloadData&&) = default;
OverloadData::~OverloadData()              = default;

CommandRegistry::FactoryFn OverloadData::getFactory() {
    std::lock_guard lock{impl->mutex};
    return impl->factory;
}
std::vector<CommandParameterData>& OverloadData::getParams() {
    std::lock_guard lock{impl->mutex};
    return impl->params;
}
CommandHandle& OverloadData::getHandle() {
    std::lock_guard lock{impl->mutex};
    return impl->handle;
}

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
char const* OverloadData::addPostfix(std::string_view postfix) { return impl->handle.addPostfix(postfix); }

void OverloadData::setFactory(CommandRegistry::FactoryFn fn) {
    std::lock_guard lock{impl->mutex};
    impl->factory = fn;
    impl->handle.registerOverload(*this);
}
} // namespace ll::command
