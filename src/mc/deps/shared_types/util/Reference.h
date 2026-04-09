#pragma once

#include "mc/_HeaderOutputPredefine.h"

#include "mc/deps/shared_types/util/AssetType.h"

namespace SharedTypes {

template <AssetType type>
struct Reference {
    std::string mValue;

    bool     operator==(Reference const& other) const { return mValue == other.mValue; }
    explicit operator std::string const&() const { return mValue; }
};

} // namespace SharedTypes
