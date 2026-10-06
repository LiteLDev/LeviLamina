#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct BiomeIdType : public ::NewType<ushort> {};

namespace std {
template <>
struct hash<::BiomeIdType> {
    size_t operator()(::BiomeIdType const& id) const noexcept { return std::hash<ushort>{}(id.mValue); }
};
} // namespace std
