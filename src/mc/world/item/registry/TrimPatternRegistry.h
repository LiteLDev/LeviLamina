#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
class ItemRegistryRef;
struct TrimPattern;
// clang-format on

class TrimPatternRegistry {
public:
    // TrimPatternRegistry inner types define
    using PatternIdMapToTemplateItemId = ::std::unordered_map<::HashedString, ::HashedString>;

    using TemplateItemIdToPatternIdMap = ::std::unordered_map<::HashedString, ::HashedString>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mTemplateItemToPatternIdMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mPatternIdToTemplateItemMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C void initializeFromTrimPatterns(::std::vector<::TrimPattern> const& patterns);

    MCAPI void initializeServer(::ItemRegistryRef itemRegistry);
    // NOLINTEND
};
