#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandManager {

public:
    // prevent constructor by default
    CommandManager& operator=(CommandManager const&) = delete;
    CommandManager(CommandManager const&)            = delete;
    CommandManager()                                 = delete;

public:
    /**
     * @symbol ??0CommandManager\@\@QEAA\@AEAVMinecraftCommands\@\@\@Z
     */
    MCAPI CommandManager(class MinecraftCommands&); // NOLINT
    /**
     * @symbol ?getCommands\@CommandManager\@\@QEAAAEAVMinecraftCommands\@\@XZ
     */
    MCAPI class MinecraftCommands& getCommands(); // NOLINT
    /**
     * @symbol ?getFunctionManager\@CommandManager\@\@QEAAAEAVFunctionManager\@\@XZ
     */
    MCAPI class FunctionManager& getFunctionManager(); // NOLINT
    /**
     * @symbol
     * ?initialize\@CommandManager\@\@QEAAXV?$unique_ptr\@VFunctionManager\@\@U?$default_delete\@VFunctionManager\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void initialize(std::unique_ptr<class FunctionManager>); // NOLINT
    /**
     * @symbol ?loadFunctionManager\@CommandManager\@\@QEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI void loadFunctionManager(class ResourcePackManager&); // NOLINT
    /**
     * @symbol ?runCommand\@CommandManager\@\@QEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@\@Z
     */
    MCAPI void runCommand(class Command&, class CommandOrigin&, enum class CommandOriginSystem); // NOLINT
    /**
     * @symbol
     * ?runCommand\@CommandManager\@\@QEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CommandOriginSystem\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void runCommand(
        class HashedString const&,
        class CommandOrigin&,
        enum class CommandOriginSystem,
        enum class CurrentCmdVersion
    ); // NOLINT
    /**
     * @symbol ?tick\@CommandManager\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ??1CommandManager\@\@QEAA\@XZ
     */
    MCAPI ~CommandManager(); // NOLINT
};
