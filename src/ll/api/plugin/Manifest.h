#pragma once

#include <optional>
#include <string>
#include <unordered_map>
#include <unordered_set>

#include "ll/api/data/Version.h"
#include "ll/api/utils/HashUtils.h"

namespace ll::plugin {
struct Dependency {
    std::string                  name;
    std::optional<data::Version> version;

    [[nodiscard]] constexpr bool operator==(Dependency const& other) const {
        return name == other.name && version == other.version;
    }
};
} // namespace ll::plugin
namespace std {
template <>
struct hash<ll::plugin::Dependency> {
    size_t operator()(ll::plugin::Dependency const& d) const noexcept {
        size_t hash = std::hash<std::string>{}(d.name);
        ll::hash_utils::hashCombine(std::hash<std::optional<ll::data::Version>>{}(d.version), hash);
        return hash;
    }
};
} // namespace std
namespace ll::plugin {
struct Manifest {
    std::string                                                 entry;
    std::string                                                 name;
    std::string                                                 type;
    std::optional<bool>                                         passive{};
    std::optional<data::Version>                                version{};
    std::optional<std::string>                                  author{};
    std::optional<std::string>                                  description{};
    std::optional<std::unordered_set<Dependency>>               dependencies{};
    std::optional<std::unordered_set<Dependency>>               optionalDependencies{};
    std::optional<std::unordered_set<Dependency>>               conflicts{};
    std::optional<std::unordered_set<Dependency>>               loadBefore{};
    std::optional<std::unordered_map<std::string, std::string>> extraInfo{};
};
} // namespace ll::plugin
