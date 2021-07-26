#pragma once

#include <cstdint>
#include <cstdlib>
#include <functional>

#include "../Math/mce.h"

class IdentityDefinition;

struct ScoreboardId {
    static ScoreboardId Invalid;

    uint64_t            id;
    IdentityDefinition* def = nullptr;

    inline ScoreboardId(uint64_t id)
        : id(id) {
    }

    inline uint64_t getHash() const {
        return mce::Math::hash2(id >> 32, id % 32);
    }
};

namespace std {
template <>
struct hash<ScoreboardId> {
    inline std::size_t operator()(ScoreboardId const& id) {
        return id.getHash();
    }
};

} // namespace std