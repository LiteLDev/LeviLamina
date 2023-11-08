#pragma once

#include <map>
#include <set>
#include <string>

#include "ll/api/plugin/Version.h"

namespace ll::plugin {

struct Manifest {
    struct Dependency {
        std::string name;
        Version     version;
    };
    std::string                        entry;
    std::string                        name;
    std::string                        description;
    std::string                        author;
    Version                            version;
    std::vector<Dependency>            dependencies;
    std::vector<Dependency>            optionalDependencies;
    std::vector<Dependency>            conflicts;
    std::vector<Dependency>            loadBefore;
    std::map<std::string, std::string> extraInfo;
};

} // namespace ll::plugin
