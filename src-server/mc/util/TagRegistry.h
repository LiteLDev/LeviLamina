#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/IDType.h"
#include "mc/util/IndexSet.h"

template <typename TagID, typename TagSetID>
class TagRegistry {public:
    std::unordered_map<HashedString, uint64> mTagIndexMap;
    std::vector<std::string>                 mTags;
    std::vector<IndexSet>                    mSets;
    TagSetID                                 mEmptyTagSet;

    MCAPI TagID tryGetTagID(const std::string&) const;
    MCAPI std::vector<std::string> const getTagsInSet(TagSetID) const;
    MCAPI TagSetID                       removeTagFromSet(const TagID, TagSetID&);
    MCAPI TagSetID                       addTagToSet(const TagID, TagSetID&);
    MCAPI TagID                          acquireTag(const std::string&);
    MCAPI TagSetID                       getTagSetID(const IndexSet&);
    MCAPI TagSetID                       getTagSetID(const std::vector<TagID>&);
};
