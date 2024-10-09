#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TrimPatternRegistry {
public:
    // prevent constructor by default
    TrimPatternRegistry& operator=(TrimPatternRegistry const&);
    TrimPatternRegistry(TrimPatternRegistry const&);
    TrimPatternRegistry();

public:
    // NOLINTBEGIN
    MCAPI bool doesPatternExist(class HashedString const& patternId) const;

    MCAPI std::vector<struct TrimPattern> getAllEntries() const;

    MCAPI std::optional<class HashedString> getPatternIdByItem(class HashedString const& itemId) const;

    MCAPI void initializeServer(class ItemRegistryRef itemRegistry);

    // NOLINTEND
};
