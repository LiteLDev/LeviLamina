#include <Global.h>
#include <regCommandAPI.h>
#include <Config.h>

void CMDREG::MakeCommand(string const& name, const char* desc, int lvl) {
    if (LL::globalConfig.debugMode) {
        Logger::setTitle("RegCmd");
        Logger::Debug() << "Registering -> " << name << Logger::endl;
        Logger::setTitle("LiteLoader");
    }
    if (Global<CommandRegistry> == nullptr) {
        Logger::setTitle("RegCmd");
        Logger::Error() << "Global<CommandRegistry> Not Set" << Logger::endl;
        Logger::setTitle("LiteLoader");
        std::this_thread::sleep_for(std::chrono::seconds(5));
        exit(1);
    }
    Global<CommandRegistry>->registerCommand(name, desc, (CommandPermissionLevel)lvl, { (CommandFlagValue)0 }, { (CommandFlagValue)0x80 });
}




