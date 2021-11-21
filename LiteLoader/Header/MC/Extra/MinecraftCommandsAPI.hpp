//Extra Part For MinecraftCommands.hpp
#ifdef EXTRA_INCLUDE_PART
// Include Headers or Declare Types Here


#else
// Add Member There
public:
 static MCRESULT _runcmd(void* origin, const std::string& cmd) {
    MCRESULT rv;
    SymCall(
        "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@"
        "std@@_N@Z",
        void, MinecraftCommands*, MCRESULT*, std::shared_ptr<CommandContext>,
        bool)(GlobalImpl<MinecraftCommands>::_srv, &rv,
              std::make_shared<CommandContext>(cmd, (CommandOrigin*)origin), false);
    return rv;
}

#endif
