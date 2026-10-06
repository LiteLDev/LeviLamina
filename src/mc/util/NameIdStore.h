#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/util/BidirectionalUnorderedMap.h"

namespace Util {

template <typename TYPE>
class NameIdStore {
public:
    TYPE                                         mFirstCustomId;
    TYPE                                         mMaxId;
    TYPE                                         mNextCustomId;
    BidirectionalUnorderedMap<std::string, TYPE> mNameIdMap;
    BidirectionalUnorderedMap<std::string, TYPE> mUnclaimedNameIdMap;
};

} // namespace Util
