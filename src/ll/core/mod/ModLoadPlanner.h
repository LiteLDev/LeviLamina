#pragma once

#include <optional>
#include <string>
#include <vector>

#include "ll/api/base/Containers.h"
#include "ll/api/data/Version.h"
#include "ll/api/data/VersionRequirement.h"
#include "ll/api/mod/Manifest.h"

namespace ll::mod {

enum class ModLoadIssueKind {
    MissingDependency,
    IncompatibleDependencyVersion,
    IncompatiblePlatform,
    Conflict,
    DependencyUnavailable,
    DependencyCycle,
};

struct ModLoadIssue {
    ModLoadIssueKind                        kind;
    std::string                             related;
    std::optional<data::Version>            actualVersion;
    std::optional<data::VersionRequirement> requiredVersion;
    std::vector<std::string>                cycle;
};

struct ModLoadPlan {
    std::vector<std::string>                          order;
    DenseMap<std::string, SmallDenseSet<std::string>> lifecycleDependencies;
    DenseMap<std::string, ModLoadIssue>               rejected;
};

class ModLoadPlanner {
public:
    [[nodiscard]] static bool matchesDependency(Manifest const& manifest, Dependency const& dependency) noexcept;

    [[nodiscard]] static bool isPlatformCompatible(Manifest const& manifest, bool clientSide) noexcept;

    [[nodiscard]] static ModLoadPlan
    resolve(DenseMap<std::string, Manifest> const& manifests, DenseSet<std::string> const& roots, bool clientSide);

    [[nodiscard]] static ModLoadPlan resolve(DenseMap<std::string, Manifest> const& manifests, bool clientSide);
};

} // namespace ll::mod
