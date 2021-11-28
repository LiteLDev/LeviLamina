#include <Global.h>
#include <regCommandAPI.h>

namespace CMDREG {
typeid_t<CommandRegistry>& GETID(const char* name) {
    return *(typeid_t<CommandRegistry>*)(dlsym_real(name));
}
typeid_t<CommandRegistry> ALLOCID() {
    auto& id = *((unsigned short*)SYM("?count@?$typeid_t@VCommandRegistry@@@@2GA"));
    return {id++};
}
template <>
typeid_t<CommandRegistry> getTPID<CommandMessage>() {
    return GETID(
        "?id@?1???$type_id@VCommandRegistry@@VCommandMessage@@@@YA?AV?$typeid_t@VCommandRegistry@@@"
        "@XZ@4V1@A");
}
template <>
typeid_t<CommandRegistry> getTPID<bool>() {
    return GETID(
        "?id@?1???$type_id@VCommandRegistry@@_N@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
}
template <>
typeid_t<CommandRegistry> getTPID<int>() {
    return GETID(
        "?id@?1???$type_id@VCommandRegistry@@H@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
}
template <>
typeid_t<CommandRegistry> getTPID<float>() {
    return GETID(
        "?id@?1???$type_id@VCommandRegistry@@M@@YA?AV?$typeid_t@VCommandRegistry@@@@XZ@4V1@A");
}
template <>
typeid_t<CommandRegistry> getTPID<std::string>() {
    return GETID(
        "?id@?1???$type_id@VCommandRegistry@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@"
        "2@@std@@@@YA?AV?$"
        "typeid_t@VCommandRegistry@@@@XZ@4V1@A");
}
template <>
typeid_t<CommandRegistry> getTPID<CommandSelector<Actor>>() {
    return GETID(
        "?id@?1???$type_id@VCommandRegistry@@V?$CommandSelector@VActor@@@@@@YA?AV?$typeid_t@"
        "VCommandRegistry@@@@XZ@4V1@"
        "A");
}
template <>
typeid_t<CommandRegistry> getTPID<CommandSelector<Player>>() {
    return GETID(
        "?id@?1???$type_id@VCommandRegistry@@V?$CommandSelector@VPlayer@@@@@@YA?AV?$typeid_t@"
        "VCommandRegistry@@@@XZ@4V1@"
        "A");
}

void MakeCommand(string const& name, const char* desc, int lvl) {
    Logger::setTitle("RegisteringCommand");
    Logger::Info() << name << Logger::endl;
    Logger::setTitle("LiteLoader");
    if (CmdRegGlobal == nullptr) {
        Logger::setTitle("RegisteringCommand");
        Logger::Error() << "CmdRegGlobal Not Set" << Logger::endl;
        Logger::setTitle("LiteLoader");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        exit(1);
    }
    CmdRegGlobal->registerCommand(name, desc, (CommandPermissionLevel)lvl, 0, 0x80);
}

} // namespace CMDREG

//CommandOutput
void CommandOutput::error(
    class std::
        basic_string<char, struct std::char_traits<char>, class std::allocator<char>> const& a0,
    class std::vector<class CommandOutputParameter,
                      class std::allocator<class CommandOutputParameter>> const& a1) {
    void (CommandOutput::*rv)(
        class std::basic_string<char, struct std::char_traits<char>,
                                class std::allocator<char>> const&,
        class std::vector<class CommandOutputParameter,
                          class std::allocator<class CommandOutputParameter>> const&);
    *((void**)&rv) = dlsym(
        "?error@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@"
        "@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@"
        "std@@@3@@Z");
    return (this->*rv)(a0, a1);
}
void CommandOutput::success(
    class std::basic_string<char,
                            struct std::char_traits<char>,
                            class std::allocator<char>> const& a0,
    class std::vector<class CommandOutputParameter,
                      class std::allocator<class CommandOutputParameter>> const& a1) {
    void (CommandOutput::*rv)(
        class std::basic_string<char, struct std::char_traits<char>,
                                class std::allocator<char>> const&,
        class std::vector<class CommandOutputParameter,
                          class std::allocator<class CommandOutputParameter>> const&);
    *((void**)&rv) = dlsym(
        "?success@CommandOutput@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@"
        "2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@VCommandOutputParameter@@@"
        "std@@@3@@Z");
    return (this->*rv)(a0, a1);
}

void CommandOutput::addMessage(std::string const& str) {
    SymCall(
        "?addMessage@CommandOutput@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$"
        "allocator@D@2@@std@@AEBV?$vector@VCommandOutputParameter@@V?$allocator@"
        "VCommandOutputParameter@@@std@@@3@W4CommandOutputMessageType@@@Z",
        void, void*, std::string const&, std::vector<CommandOutputParameter> const&,
        int)(this, str, {}, 0);
}

