#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MinecraftCommands {

public:
    // prevent constructor by default
    MinecraftCommands& operator=(MinecraftCommands const&) = delete;
    MinecraftCommands(MinecraftCommands const&)            = delete;
    MinecraftCommands()                                    = delete;

public:
    /**
     * @symbol ??0MinecraftCommands\@\@QEAA\@AEAVMinecraft\@\@\@Z
     */
    MCAPI MinecraftCommands(class Minecraft&); // NOLINT
    /**
     * @symbol
     * ?compileCommand\@MinecraftCommands\@\@QEAAPEAVCommand\@\@AEBVHashedString\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@V?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI class Command*
    compileCommand(class HashedString const&, class CommandOrigin&, enum class CurrentCmdVersion, class std::function<void(std::string const&)>); // NOLINT
    /**
     * @symbol
     * ?enqueueDeferredCommand\@MinecraftCommands\@\@QEAAXV?$unique_ptr\@VCommandContext\@\@U?$default_delete\@VCommandContext\@\@\@std\@\@\@std\@\@_N1V?$function\@$$A6AXUMCRESULT\@\@\@Z\@3\@\@Z
     */
    MCAPI void
    enqueueDeferredCommand(std::unique_ptr<class CommandContext>, bool, bool, class std::function<void(struct MCRESULT)>); // NOLINT
    /**
     * @symbol ?enqueueDeferredCommandBlockCommand\@MinecraftCommands\@\@QEAAXVBlockPos\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI void enqueueDeferredCommandBlockCommand(class BlockPos, class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?enqueueDeferredScriptCommand\@MinecraftCommands\@\@QEAA_NV?$unique_ptr\@VDeferredScriptCommand\@\@U?$default_delete\@VDeferredScriptCommand\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI bool enqueueDeferredScriptCommand(std::unique_ptr<class DeferredScriptCommand>); // NOLINT
    /**
     * @symbol ?executeCommand\@MinecraftCommands\@\@QEBA?AUMCRESULT\@\@AEAVCommandContext\@\@_N\@Z
     */
    MCAPI struct MCRESULT executeCommand(class CommandContext&, bool) const; // NOLINT
    /**
     * @symbol ?getRegistry\@MinecraftCommands\@\@QEAAAEAVCommandRegistry\@\@XZ
     */
    MCAPI class CommandRegistry& getRegistry(); // NOLINT
    /**
     * @symbol ?handleOutput\@MinecraftCommands\@\@QEBAXAEBVCommandOrigin\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI void handleOutput(class CommandOrigin const&, class CommandOutput const&) const; // NOLINT
    /**
     * @symbol
     * ?initCoreEnums\@MinecraftCommands\@\@QEAAXVItemRegistryRef\@\@AEBVIWorldRegistriesProvider\@\@AEBVActorFactory\@\@AEBVExperiments\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI void
    initCoreEnums(class ItemRegistryRef, class IWorldRegistriesProvider const&, class ActorFactory const&, class Experiments const&, class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?initCoreEnumsServer\@MinecraftCommands\@\@QEAAXAEBVActorDefinitionGroup\@\@AEBVCameraPresets\@\@\@Z
     */
    MCAPI void initCoreEnumsServer(class ActorDefinitionGroup const&, class CameraPresets const&); // NOLINT
    /**
     * @symbol ?requestCommandExecution\@MinecraftCommands\@\@QEAA?AUMCRESULT\@\@AEAVCommandContext\@\@_N\@Z
     */
    MCAPI struct MCRESULT requestCommandExecution(class CommandContext&, bool); // NOLINT
    /**
     * @symbol ?runCommand\@MinecraftCommands\@\@QEAAXAEAVCommand\@\@AEAVCommandOrigin\@\@\@Z
     */
    MCAPI void runCommand(class Command&, class CommandOrigin&); // NOLINT
    /**
     * @symbol
     * ?runCommand\@MinecraftCommands\@\@QEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void runCommand(class HashedString const&, class CommandOrigin&, enum class CurrentCmdVersion); // NOLINT
    /**
     * @symbol
     * ?runOrDeferCommand\@MinecraftCommands\@\@QEAAXAEBVHashedString\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void
    runOrDeferCommand(class HashedString const&, class CommandOrigin&, enum class CurrentCmdVersion); // NOLINT
    /**
     * @symbol
     * ?runOrDeferCommand\@MinecraftCommands\@\@QEAAXV?$not_null\@PEAVCommand\@\@\@gsl\@\@AEAVCommandOrigin\@\@W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI void runOrDeferCommand(
        class gsl::not_null<class Command*>,
        class CommandOrigin&,
        enum class CurrentCmdVersion
    ); // NOLINT
    /**
     * @symbol
     * ?setRegistryNetworkUpdateCallback\@MinecraftCommands\@\@QEBAXV?$function\@$$A6AXAEBVPacket\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void setRegistryNetworkUpdateCallback(class std::function<void(class Packet const&)>) const; // NOLINT
    /**
     * @symbol ?shouldDeferCommand\@MinecraftCommands\@\@QEBA_NW4CurrentCmdVersion\@\@\@Z
     */
    MCAPI bool shouldDeferCommand(enum class CurrentCmdVersion) const; // NOLINT
    /**
     * @symbol ?tick\@MinecraftCommands\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
    /**
     * @symbol ?getOutputType\@MinecraftCommands\@\@SA?AW4CommandOutputType\@\@AEBVCommandOrigin\@\@\@Z
     */
    MCAPI static enum class CommandOutputType getOutputType(class CommandOrigin const&); // NOLINT
    /**
     * @symbol ?initBlockEnum\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void initBlockEnum(class CommandRegistry&, class BaseGameVersion const&); // NOLINT
    /**
     * @symbol
     * ?initEntityEnum\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@AEBVActorFactory\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static void
    initEntityEnum(class CommandRegistry&, class ActorFactory const&, class Experiments const&); // NOLINT
    /**
     * @symbol
     * ?initItemEnum\@MinecraftCommands\@\@SAXVItemRegistryRef\@\@AEAVCommandRegistry\@\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI static void
    initItemEnum(class ItemRegistryRef, class CommandRegistry&, class BaseGameVersion const&); // NOLINT
    /**
     * @symbol ?initItemTagEnum\@MinecraftCommands\@\@SAXVItemRegistryRef\@\@AEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void initItemTagEnum(class ItemRegistryRef, class CommandRegistry&); // NOLINT
    /**
     * @symbol ?initStructureFeatureEnum\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void initStructureFeatureEnum(class CommandRegistry&); // NOLINT
    /**
     * @symbol ?registerSharedClientServerEnums\@MinecraftCommands\@\@SAXAEAVCommandRegistry\@\@\@Z
     */
    MCAPI static void registerSharedClientServerEnums(class CommandRegistry&); // NOLINT
};
