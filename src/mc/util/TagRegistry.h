#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/IDType.h"
#include "mc/util/IndexSet.h"

template <typename TagID, typename TagSetID>
class TagRegistry {
public:
    std::unordered_map<HashedString, uint64> mTagIndexMap;
    std::vector<std::string>                 mTags;
    std::vector<IndexSet>                    mSets;
    TagSetID                                 mEmptyTagSet;

    MCAPI TagID tryGetTagID(std::string const&) const;
    MCAPI std::vector<std::string> const getTagsInSet(TagSetID) const;
    MCAPI TagSetID                       removeTagFromSet(TagID const, TagSetID&);
    MCAPI TagSetID                       addTagToSet(TagID const, TagSetID&);
    MCAPI TagID                          acquireTag(std::string const&);
    MCAPI TagSetID                       getTagSetID(IndexSet const&);
    MCAPI TagSetID                       getTagSetID(std::vector<TagID> const&);
};
