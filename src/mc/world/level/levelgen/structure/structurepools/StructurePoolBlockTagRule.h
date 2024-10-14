#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructurePoolBlockTagRule {
public:
    // prevent constructor by default
    StructurePoolBlockTagRule& operator=(StructurePoolBlockTagRule const&);
    StructurePoolBlockTagRule(StructurePoolBlockTagRule const&);
    StructurePoolBlockTagRule();

public:
    // NOLINTBEGIN
    MCAPI StructurePoolBlockTagRule(
        std::unique_ptr<class IStructurePoolBlockTagPredicate>&& sourceBlockTagPredicate,
        std::string                                              resultKey,
        std::string                                              resultValue
    );

    MCAPI bool processRule(class Block const& sourceBlock, class CompoundTag& sourceTag) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
