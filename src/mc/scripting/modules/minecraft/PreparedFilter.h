#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/CaseInsensitiveCompare.h"
#include "mc/util/CaseInsensitiveHash.h"

namespace ScriptModuleMinecraft::ScriptSoundDefinitionRegistryInternal {

struct PreparedFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMinDuration;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMaxDuration;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mGenres;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mMoods;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mArtists;
    ::ll::TypedStorage<
        8,
        72,
        ::std::optional<
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>
        mTitles;
    ::ll::TypedStorage<
        8,
        32,
        ::std::optional<::std::vector<::std::pair<
            ::std::string,
            ::std::unordered_set<::std::string, ::Util::CaseInsensitiveHash, ::Util::CaseInsensitiveCompare>>>>>
        mTags;
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::ScriptSoundDefinitionRegistryInternal
