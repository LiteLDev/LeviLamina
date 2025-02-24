#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/util/IDType.h"
#include "mc/util/IndexSet.h"

template <typename TagID, typename TagSetID>
class TagRegistry {
public:
    std::unordered_map<HashedString, unsigned long> mTagIndexMap;
    std::vector<std::string>                        mTags;
    std::vector<IndexSet>                           mSets;
    IDType<TagSetID>                                mEmptyTagSet;

    MCAPI IDType<TagID> tryGetTagID(const std::string&) const;
    MCAPI std::vector<std::string> const getTagsInSet(IDType<TagSetID>);
    MCAPI IDType<TagSetID> removeTagFromSet(const IDType<TagID>, IDType<TagSetID>&);
    MCAPI IDType<TagSetID> addTagToSet(const IDType<TagID>, IDType<TagSetID>&);
    MCAPI IDType<TagID> acquireTag(const std::string&);
    MCAPI IDType<TagSetID> getTagSetID(const IndexSet&);
    MCAPI IDType<TagSetID> getTagSetID(const std::vector<IDType<TagID>>&);
};