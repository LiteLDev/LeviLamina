#include "ll/api/command/CommandHandle.h"

#include <string_view>
#include <utility>

#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/OverloadData.h"

#include "mc/server/commands/CommandVersion.h"

namespace ll::command {

void CommandHandle::registerOverload(OverloadData&& data) {
    auto& overload  = signature->overloads.emplace_back(CommandVersion{}, data.factory);
    overload.params = std::move(data.params);
    registrar->getRegistry().registerOverloadInternal(*signature, overload);
}
char const* CommandHandle::addText(std::string_view text) { return registrar->addText(*this, text); }

} // namespace ll::command
