#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandVersion.h"
#include "mc/websockets/CommandOrigin.h"

class CommandContext {

public:
    // prevent constructor by default
    CommandContext& operator=(CommandContext const&) = delete;
    CommandContext(CommandContext const&)            = delete;
    CommandContext()                                 = delete;

    std::string                    mCommand;
    std::unique_ptr<CommandOrigin> mOrigin;
    int                            mVersion = CommandVersion::CurrentVersion;

    std::string&         getCmd() { return mCommand; }
    [[nodiscard]] class CommandOrigin& getOrigin() const { return *mOrigin; }

    template <typename T>
    CommandContext(T&& x, std::unique_ptr<CommandOrigin> ori) : mCommand(std::forward<T>(x)), mOrigin(std::move(ori)){};

    /**
     * @symbol
     * ??0CommandContext\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$unique_ptr\@VCommandOrigin\@\@U?$default_delete\@VCommandOrigin\@\@\@std\@\@\@2\@H\@Z
     */
    MCAPI CommandContext(std::string const&, std::unique_ptr<class CommandOrigin>, int); // NOLINT
    /**
     * @symbol ?getCommandOrigin\@CommandContext\@\@QEBAAEBVCommandOrigin\@\@XZ
     */
    MCAPI class CommandOrigin const& getCommandOrigin() const; // NOLINT
    /**
     * @symbol ??1CommandContext\@\@QEAA\@XZ
     */
    MCAPI ~CommandContext(); // NOLINT
};
