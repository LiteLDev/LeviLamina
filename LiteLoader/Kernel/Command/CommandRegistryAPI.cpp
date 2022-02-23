#include <MC/CommandRegistry.hpp>
#include <MC/CommandParameterData.hpp>
#include <vector>
#include <RegCommandAPI.h>

static_assert(offsetof(CommandParameterData, options) == 73);
static_assert(offsetof(CommandParameterData, name) == 16);
static_assert(offsetof(CommandParameterData, unk56) == 56);
static_assert(offsetof(CommandRegistry::Overload, unk) == 40);
static_assert(sizeof(CommandRegistry::Overload) == 72);
static_assert(offsetof(CommandRegistry::Signature, alt_symbol) == 96);
static_assert(sizeof(CommandRegistry::Signature) == 120);
/*
void CommandRegistry::registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args)
{
    Signature* signature = const_cast<Signature*>(findCommand(name));
    auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
    registerOverloadInternal(*signature, overload);
}*/
