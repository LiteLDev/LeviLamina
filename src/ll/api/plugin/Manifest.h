#pragma once

#include "ll/api/plugin/Version.h"
#include <map>
#include <set>
#include <string>

namespace ll::plugin {

struct Manifest {
    struct Dependency {
        std::string name;
        Version     version;
    };
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
