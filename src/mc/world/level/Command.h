#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandFlag.h"
#include "mc/server/commands/CommandPermissionLevel.h"

class CommandRegistry;
class CommandOrigin;
class CommandOutput;

class Command {
public:
    // prevent constructor by default
    Command& operator=(Command const&);
    Command(Command const&);

    int                      mVersion;         // this+0x8
    CommandRegistry const*   mRegistry;        // this+0x10
    int                      mCommandSymbol;   // this+0x18
    ::CommandPermissionLevel mPermissionLevel; // this+0x1C
    CommandFlag              mFlags;           // this+0x1E

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1Command@@UEAA@XZ
    virtual ~Command();

    // vIndex: 1, symbol: ?collectOptionalArguments@Command@@MEAA_NXZ
    virtual bool collectOptionalArguments();

    // vIndex: 2, symbol: ?execute@AbilityCommand@@UEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const = 0;

    // symbol: ??0Command@@QEAA@XZ
    MCAPI Command();

    // symbol: ?getCommandName@Command@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string getCommandName() const;

    // symbol: ?hasFlag@Command@@QEBA_NUCommandFlag@@@Z
    MCAPI bool hasFlag(struct CommandFlag flag) const;

    // symbol: ?run@Command@@QEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void run(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?shouldUseCommandOriginRotation@Command@@SA_NAEBVCommandOrigin@@H@Z
    MCAPI static bool shouldUseCommandOriginRotation(class CommandOrigin const& origin, int version);

    // symbol: ?validRange@Command@@SA_NMMMAEAVCommandOutput@@@Z
    MCAPI static bool validRange(float input, float low, float high, class CommandOutput& output);

    // symbol: ?validRange@Command@@SA_NHHHAEAVCommandOutput@@@Z
    MCAPI static bool validRange(int input, int low, int high, class CommandOutput& output);

    // symbol: ?WILDCARD_TOKEN@Command@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const WILDCARD_TOKEN;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?getRegistry@Command@@IEBAAEBVCommandRegistry@@XZ
    MCAPI class CommandRegistry const& getRegistry() const;

    // symbol: ?sendTelemetry@Command@@IEBAXAEBVCommandOrigin@@AEAVCommandOutput@@@Z
    MCAPI void sendTelemetry(class CommandOrigin const& origin, class CommandOutput& output) const;

    // symbol: ?shouldSendTelemetry@Command@@IEBA_NAEBVCommandOrigin@@@Z
    MCAPI bool shouldSendTelemetry(class CommandOrigin const& origin) const;

    // symbol: ?getPlayerFromOrigin@Command@@KAPEAVPlayer@@AEBVCommandOrigin@@@Z
    MCAPI static class Player* getPlayerFromOrigin(class CommandOrigin const& origin);

    // symbol: ?isTemplateLockedAction@Command@@KA_NAEBVCommandOrigin@@@Z
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const& origin);

    // symbol: ?isWildcard@Command@@KA_NAEBVCommandSelectorBase@@@Z
    MCAPI static bool isWildcard(class CommandSelectorBase const& selector);

    // symbol: ?validData@Command@@KA_NHAEAGAEAVCommandOutput@@@Z
    MCAPI static bool validData(int input, ushort& data, class CommandOutput& output);

    // NOLINTEND
};
