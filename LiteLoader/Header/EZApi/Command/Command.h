#pragma once

#include "../dll.h"
#include "CommandFlag.h"
#include <string>

class CommandRegistry;
class CommandOrigin;
class CommandOutput;
template <typename T>
class CommandSelectorResults;

class Command {
protected:
    int         unk8{};  // 8
    void*       unk16{}; // 16
    int         unk24{}; // 24
    char        b28{};   // 28
    CommandFlag flag;    // 29
    Command() {
        unk24 = -1;
        b28   = 5;
    }

public:
    MCAPI static std::string const WILDCARD_TOKEN;
    MCAPI static bool              validRange(int, int, int, class CommandOutput&);
    MCAPI void                     run(class CommandOrigin const&, class CommandOutput&) const;
    MCAPI virtual ~Command();
    virtual void execute(CommandOrigin const&, CommandOutput&) = 0;

protected:
    MCAPI static bool isWildcard(class CommandSelectorBase const&);
    MCAPI bool        shouldSendTelemetry(class CommandOrigin const&) const;
    MCAPI static bool isTemplateLockedAction(class CommandOrigin const&);
    MCAPI void        sendTelemetry(class CommandOrigin const&, class CommandOutput const&) const;
    template <typename T>
    MCAPI static bool checkHasTargets(CommandSelectorResults<T> const&, CommandOutput&);
};