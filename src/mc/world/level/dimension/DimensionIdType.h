#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/NewType.h"

struct DimensionIdType : public ::NewType<ushort> {
public:
    using NewType<ushort>::NewType;
};

namespace std {
template <>
struct hash<::DimensionIdType> {
    size_t operator()(::DimensionIdType const& id) const noexcept { return id.mValue; }
};
} // namespace std
