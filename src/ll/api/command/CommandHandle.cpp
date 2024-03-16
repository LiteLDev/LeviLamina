#include "ll/api/command/CommandHandle.h"

#include <string_view>
#include <utility>

#include "ll/api/command/CommandRegistrar.h"
#include "ll/api/command/OverloadData.h"

#include "ll/api/command/runtime/RuntimeOverload.h"

#include "mc/server/commands/CommandVersion.h"

namespace ll::command {

struct CommandHandle::Impl {
    bool                        owned;
    CommandRegistrar&           registrar;
    CommandRegistry::Signature& signature;
    std::recursive_mutex        mutex;

    std::vector<RuntimeOverload> runtimeOverloads;
};

CommandHandle::CommandHandle(CommandRegistrar& registrar, CommandRegistry::Signature& signature, bool owned)
: impl(std::make_unique<Impl>(owned, registrar, signature)) {}

CommandHandle::~CommandHandle() = default;


CommandRegistrar& CommandHandle::getRegistrar() { return impl->registrar; }

void CommandHandle::registerOverload(OverloadData& data) {
    std::lock_guard lock{impl->mutex};
    auto            params = std::move(data.getParams());
    for (auto& o : impl->signature.overloads) {
        if (o.params == params) {
            o.alloc = data.getFactory();
            return;
        }
    }
    auto& overload  = impl->signature.overloads.emplace_back(CommandVersion{}, data.getFactory());
    overload.params = std::move(params);
    impl->registrar.getRegistry().registerOverloadInternal(impl->signature, overload);
}
char const* CommandHandle::addText(std::string_view text) { return impl->registrar.addText(*this, text); }
char const* CommandHandle::addPostfix(std::string_view postfix) { return impl->registrar.addPostfix(*this, postfix); }

void CommandHandle::registerRuntimeOverload(RuntimeOverload& rt) {
    std::lock_guard lock{impl->mutex};
    impl->runtimeOverloads.emplace_back(std::move(rt));
}
RuntimeOverload CommandHandle::runtimeOverload() { return RuntimeOverload{*this}; }

void CommandHandle::alias(std::string_view alias) {
    std::lock_guard lock{impl->mutex};
    std::string     str{alias};
    if (impl->registrar.getRegistry().findCommand(str)) {
        return;
    }
    impl->registrar.getRegistry().registerAlias(impl->signature.name, std::move(str));
}
std::vector<std::string> CommandHandle::alias() const {
    std::lock_guard lock{impl->mutex};
    return impl->registrar.getRegistry().getAliases(impl->signature.name);
}

} // namespace ll::command
