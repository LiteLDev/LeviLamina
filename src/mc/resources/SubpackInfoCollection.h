#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubpackInfoCollection {
public:
    // prevent constructor by default
    SubpackInfoCollection& operator=(SubpackInfoCollection const&);
    SubpackInfoCollection(SubpackInfoCollection const&);
    SubpackInfoCollection();

public:
    // NOLINTBEGIN
    MCAPI void addSubpackInfo(struct SubpackInfo&& subpack);

    MCAPI std::string const& getSubpackFolderName(int index) const;

    MCAPI std::vector<struct SubpackInfo> const& getSubpackInfo() const;

    // NOLINTEND
};
