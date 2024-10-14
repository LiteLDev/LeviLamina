#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/server/commands/CommandOrigin.h"
#include "mc/server/commands/CommandVersion.h"

class CommandContext {
public:
    std::string                    mCommand;
    std::unique_ptr<CommandOrigin> mOrigin;
    int                            mVersion;

    template <std::derived_from<CommandOrigin> T, class... Args>
    [[nodiscard]] explicit CommandContext(std::string command, Args&&... args)
    : mCommand(std::move(command)),
      mOrigin(std::make_unique<T>(std::forward<Args>(args)...)),
      mVersion(CommandVersion::CurrentVersion) {}

public:
    // NOLINTBEGIN
    MCAPI
    CommandContext(
        std::string const&                   command,
        std::unique_ptr<class CommandOrigin> origin,
        int                                  version = CommandVersion::CurrentVersion
    );

    MCAPI class CommandOrigin const& getCommandOrigin() const;

    MCAPI ~CommandContext();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
