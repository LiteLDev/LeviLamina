#pragma once

#include <memory>

namespace ll {

struct ForceEnableCheatCommands {
    struct Impl;
    std::unique_ptr<Impl> impl;

    void call(bool);
    ForceEnableCheatCommands();
    ~ForceEnableCheatCommands();
};
} // namespace ll
