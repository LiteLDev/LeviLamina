#pragma once

#include <optional>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "ll/api/base/Version.h"

namespace ll::plugin {

struct Manifest {
    struct Dependency {
        std::string                name;
        std::optional<std::string> version; // TODO: add version range
    };
    std::string                                                 entry;
    std::string                                                 name;
    std::string                                                 type;
    std::optional<bool>                                         passive;
    std::optional<Version>                                      version;
    std::optional<std::string>                                  author;
    std::optional<std::string>                                  description;
    std::optional<std::unordered_set<Dependency>>               dependencies;
    std::optional<std::unordered_set<Dependency>>               optionalDependencies;
    std::optional<std::unordered_set<Dependency>>               conflicts;
    std::optional<std::unordered_set<Dependency>>               loadBefore;
    std::optional<std::unordered_map<std::string, std::string>> extraInfo;
};

} // namespace ll::plugin
