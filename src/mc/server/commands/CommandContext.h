#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandVersion.h"

class CommandContext {
public:
    std::string                    mCommand;
    std::unique_ptr<CommandOrigin> mOrigin;
    int                            mVersion = CommandVersion::CurrentVersion;

    [[nodiscard]] std::string&         getCommand() { return mCommand; }
    [[nodiscard]] std::string const&   getCommand() const { return mCommand; }
    [[nodiscard]] class CommandOrigin& getOrigin() const { return *mOrigin; }

public:
    // NOLINTBEGIN
    // symbol:
    // ??0CommandContext@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$unique_ptr@VCommandOrigin@@U?$default_delete@VCommandOrigin@@@std@@@2@H@Z
    MCAPI
    CommandContext(
        std::string const&                   command,
        std::unique_ptr<class CommandOrigin> origin,
        int                                  version = CommandVersion::CurrentVersion
    );

    // symbol: ?getCommandOrigin@CommandContext@@QEBAAEBVCommandOrigin@@XZ
    MCAPI class CommandOrigin const& getCommandOrigin() const;

    // symbol: ??1CommandContext@@QEAA@XZ
    MCAPI ~CommandContext();

    // NOLINTEND
};
