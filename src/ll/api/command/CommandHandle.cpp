#include "ll/api/command/CommandHandle.h"

#include <string_view>
#include <utility>

#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/OverloadData.h"

#include "mc/server/commands/CommandVersion.h"

namespace ll::command {

struct CommandHandle::Impl {
    bool                        owned;
    CommandRegistrar&           registrar;
    CommandRegistry::Signature& signature;
    std::recursive_mutex        mutex;
};

CommandHandle::CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature& signature, bool owned)
: impl(std::make_unique<Impl>(owned, registrar, signature)) {}

CommandHandle::~CommandHandle() = default;


CommandRegistrar& CommandHandle::getRegistrar() { return impl->registrar; }

void CommandHandle::registerOverload(OverloadData&& data) {
    std::lock_guard lock{impl->mutex};
    auto            params = data.moveParams();
    for (auto& o : impl->signature.overloads) {
        if (o.params == params) {
            return;
        }
    }
    auto& overload  = impl->signature.overloads.emplace_back(CommandVersion{}, data.getFactory());
    overload.params = std::move(params);
    impl->registrar.getRegistry().registerOverloadInternal(impl->signature, overload);
}
char const* CommandHandle::addText(std::string_view text) { return impl->registrar.addText(*this, text); }

} // namespace ll::command
