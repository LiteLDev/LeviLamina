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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkc90b11;
    ::ll::UntypedStorage<8, 64> mUnk54fbf2;
    // NOLINTEND

public:
    // prevent constructor by default
    TrimPatternRegistry& operator=(TrimPatternRegistry const&);
    TrimPatternRegistry(TrimPatternRegistry const&);
    TrimPatternRegistry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool doesPatternExist(::HashedString const& patternId) const;

    MCAPI ::std::vector<::TrimPattern> getAllEntries() const;

    MCAPI ::std::optional<::HashedString> getPatternIdByItem(::HashedString const& itemId) const;

    MCAPI void initializeServer(::ItemRegistryRef itemRegistry);
    // NOLINTEND
};
