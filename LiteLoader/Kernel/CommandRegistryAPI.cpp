#include <MC/CommandRegistry.hpp>
#include <MC/CommandParameterData.hpp>
#include <vector>

static_assert(offsetof(CommandParameterData, pad73) == 73);
static_assert(offsetof(CommandParameterData, name) == 16);
static_assert(offsetof(CommandParameterData, unk56) == 56);
/*
void CommandRegistry::registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args)
{
    Signature* signature = const_cast<Signature*>(findCommand(name));
    auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
    registerOverloadInternal(*signature, overload);
}*/