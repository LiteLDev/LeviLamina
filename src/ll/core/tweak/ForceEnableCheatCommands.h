#pragma once

#include <memory>

namespace ll {

struct ForceEnableCheatCommands {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    ForceEnableCheatCommands();

    // Movable because reflection::Dispatcher requires its listener to be movable.
    ForceEnableCheatCommands(ForceEnableCheatCommands&&) noexcept;
    ForceEnableCheatCommands& operator=(ForceEnableCheatCommands&&) noexcept;

    ~ForceEnableCheatCommands();
};
} // namespace ll
