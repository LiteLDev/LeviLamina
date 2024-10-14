#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/Command.h"

class TagCommand : public ::Command {
public:
    // prevent constructor by default
    TagCommand& operator=(TagCommand const&);
    TagCommand(TagCommand const&);
    TagCommand();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TagCommand() = default;

    // vIndex: 2
    virtual void execute(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI static void setup(class CommandRegistry& registry);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _addTag(class CommandOutput& output, std::vector<std::reference_wrapper<class Actor>> const& selectorResults) const;

    MCAPI std::vector<std::reference_wrapper<class Actor>>
          _getSelectorResults(class CommandOrigin const& origin, class CommandOutput& output) const;

    MCAPI void _listTags(
        class CommandOutput&                                    output,
        std::vector<std::reference_wrapper<class Actor>> const& selectorResults
    ) const;

    MCAPI void _removeTag(
        class CommandOutput&                                    output,
        std::vector<std::reference_wrapper<class Actor>> const& selectorResults
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void execute$(class CommandOrigin const& origin, class CommandOutput& output) const;

    // NOLINTEND
};
