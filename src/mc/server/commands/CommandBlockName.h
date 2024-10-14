#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandBlockName {
public:
    // prevent constructor by default
    CommandBlockName& operator=(CommandBlockName const&);
    CommandBlockName(CommandBlockName const&);
    CommandBlockName();

public:
    // NOLINTBEGIN
    MCAPI explicit CommandBlockName(uint64 blockNameHash);

    MCAPI std::string getDescriptionId() const;

    MCAPI explicit operator uint64() const;

    MCAPI class CommandBlockNameResult resolveBlock(int data) const;

    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const& states, class CommandOutput& output) const;

    MCAPI class CommandBlockNameResult
    resolveBlock(std::vector<class BlockStateCommandParam> const& states, int data, class CommandOutput& output) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
