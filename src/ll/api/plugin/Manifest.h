#pragma once

#include <map>
#include <optional>
#include <set>
#include <string>

#include "ll/api/base/Version.h"

namespace ll::plugin {

struct Manifest {
    struct Dependency {
        std::string name;
        Version     version;
    };
    std::string                                       entry;
    std::string                                       name;
    std::optional<std::string>                        description;
    std::optional<std::string>                        author;
    std::optional<Version>                            version;
    std::optional<std::vector<Dependency>>            dependencies;
    std::optional<std::vector<Dependency>>            optionalDependencies;
    std::optional<std::vector<Dependency>>            conflicts;
    std::optional<std::vector<Dependency>>            loadBefore;
    std::optional<std::map<std::string, std::string>> extraInfo;
};

} // namespace ll::plugin
