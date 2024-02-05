#include "ll/api/command/CommandHandle.h"

#include <string_view>
#include <utility>

#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/OverloadData.h"

#include "mc/server/commands/CommandVersion.h"

namespace ll::command {

struct CommandHandle::Impl {
    gsl::not_null<CommandRegistrar*>           registrar;
    gsl::not_null<CommandRegistry::Signature*> signature;
    bool                                       owned;
    std::recursive_mutex                       mutex;
};

CommandHandle::CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature* signature, bool owned)
: impl(std::make_unique<Impl>(&registrar, signature, owned)) {}

CommandHandle::~CommandHandle() = default;


CommandRegistrar& CommandHandle::getRegistrar() { return *impl->registrar; }

void CommandHandle::registerOverload(OverloadData&& data) {
    std::lock_guard lock{impl->mutex};
    auto&           overload = impl->signature->overloads.emplace_back(CommandVersion{}, data.getFactory());
    overload.params          = data.moveParams();
    impl->registrar->getRegistry().registerOverloadInternal(*impl->signature, overload);
}
char const* CommandHandle::addText(std::string_view text) { return impl->registrar->addText(*this, text); }

} // namespace ll::command
