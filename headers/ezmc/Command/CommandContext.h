#pragma once

#include <memory>
#include <string>

#include "CommandVersion.h"

class CommandOrigin;

class CommandContext {
public:
    std::string                    name;
    std::unique_ptr<CommandOrigin> origin;
    int                            version = CommandVersion::CurrentVersion;

    CommandContext(std::string name, std::unique_ptr<CommandOrigin> origin)
        : name(name)
        , origin(std::move(origin)) {
    }

    inline static std::unique_ptr<CommandContext> create(std::string name, std::unique_ptr<CommandOrigin> origin) {
        return std::make_unique<CommandContext>(name, std::move(origin));
    }
};