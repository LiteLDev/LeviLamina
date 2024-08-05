#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CompoundTagEditHelper {
public:
    // prevent constructor by default
    CompoundTagEditHelper& operator=(CompoundTagEditHelper const&);
    CompoundTagEditHelper(CompoundTagEditHelper const&);
    CompoundTagEditHelper();

public:
    // NOLINTBEGIN
    MCAPI class CompoundTag const* getParent() const;

    MCAPI void replaceWith(std::string const& newTagName, std::unique_ptr<class Tag> newTag);

    MCAPI ~CompoundTagEditHelper();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void pushChild(std::string const& tagName);

    // NOLINTEND
};
