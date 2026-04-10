#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes {

template <int type> // SharedTypes::AssetType
struct Reference {
    std::string mValue;

    bool     operator==(Reference const& other) const { return mValue == other.mValue; }
    explicit operator std::string const&() const { return mValue; }
};

} // namespace SharedTypes
