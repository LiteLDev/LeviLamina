#pragma once

#include <optional>
#include <string>

#include "ll/api/base/Containers.h"
#include "ll/api/data/Version.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::mod {
struct Dependency {
    std::string                  name;
    std::optional<data::Version> version;

    [[nodiscard]] constexpr bool operator==(Dependency const& other) const {
        return name == other.name && version == other.version;
    }
};
} // namespace ll::mod
namespace std {
template <>
struct hash<ll::mod::Dependency> {
    size_t operator()(ll::mod::Dependency const& d) const noexcept {
        size_t hash = std::hash<std::string>{}(d.name);
        ll::hash_utils::hashCombine(std::hash<std::optional<ll::data::Version>>{}(d.version), hash);
        return hash;
    }
};
} // namespace std
namespace ll::mod {
struct Manifest {
    std::string                                            entry;
    std::string                                            name;
    std::string                                            type;
    std::optional<bool>                                    passive{};
    std::optional<data::Version>                           version{};
    std::optional<std::string>                             author{};
    std::optional<std::string>                             description{};
    std::optional<SmallDenseMap<std::string, std::string>> extraInfo{};
    std::optional<SmallDenseSet<Dependency>>               dependencies{};
    std::optional<SmallDenseSet<Dependency>>               optionalDependencies{};
    std::optional<SmallDenseSet<Dependency>>               conflicts{};
    std::optional<SmallDenseSet<Dependency>>               loadBefore{};
};
} // namespace ll::mod
