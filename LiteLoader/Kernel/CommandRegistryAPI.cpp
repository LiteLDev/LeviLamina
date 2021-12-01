#include <MC/CommandRegistry.hpp>
#include <MC/CommandParameterData.hpp>
#include <vector>
#include <regCommandAPI.h>

static_assert(offsetof(CommandParameterData, pad73) == 73);
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

using ParseFn = bool (CommandRegistry::*)(
    void*, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string&,
    std::vector<std::string>&) const;

static std::unordered_map<string, void*> parse_ptr = {
    {typeid(CommandMessage).name(),
     dlsym_real(
         "??$parse@VCommandMessage@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@"
         "@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
         "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
         "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(std::string).name(),
     dlsym_real("??$parse@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@"
                "CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$basic_"
                "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
                "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$"
                "char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(float).name(),
     dlsym_real("??$parse@M@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(int).name(),
     dlsym_real("??$parse@H@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@HAEAV?$"
                "basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_"
                "string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@"
                "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(CommandSelector<Actor>).name(),
     dlsym_real(
         "??$parse@V?$CommandSelector@VActor@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
         "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
         "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
         "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(CommandSelector<Player>).name(),
     dlsym_real(
         "??$parse@V?$CommandSelector@VPlayer@@@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@"
         "AEBVCommandOrigin@@HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@"
         "AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@"
         "V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
    {typeid(CommandPosition).name(),
     dlsym_real(
         "??$parse@VCommandPosition@@@CommandRegistry@@AEBA_NPEAXAEBUParseToken@0@AEBVCommandOrigin@@"
         "HAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$vector@V?$basic_string@"
         "DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@"
         "std@@V?$allocator@D@2@@std@@@2@@4@@Z")},
};
    
template <typename T>
ParseFn CommandRegistry::getParseFn() {
    bool (CommandRegistry::*ptr)(void*, CommandRegistry::ParseToken const&,
                                 CommandOrigin const&, int, std::string&,
                                 std::vector<std::string>&) const;
    *(void**)&ptr = parse_ptr[typeid(T).name()];
    if (!ptr) {
        printf("Cant parse cmd data %s\n", typeid(T).name());
        std::this_thread::sleep_for(std::chrono::seconds(10));
        exit(1);
    }
    return ptr;
}
template LIAPI ParseFn CommandRegistry::getParseFn<int>();
template LIAPI ParseFn CommandRegistry::getParseFn<CommandPosition>();
template LIAPI ParseFn CommandRegistry::getParseFn<std::string>();


void CommandRegistry::registerOverload(std::string const& name, Overload::FactoryFn factory, std::vector<CommandParameterData>&& args) {
    Signature* signature = const_cast<Signature*>(findCommand(name));
    auto& overload = signature->overloads.emplace_back(CommandVersion{}, factory, std::move(args));
    registerOverloadInternal(*signature, overload);
}
template <typename T>
std::unique_ptr<Command> CommandRegistry::allocateCommand() {
    return std::make_unique<T>();
}
template <typename T, typename... Params>
void CommandRegistry::registerOverload(std::string const& name, Params... params) {
    registerOverload(name, &allocateCommand<T>, {params...});
}