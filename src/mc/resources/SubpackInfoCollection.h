#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
struct SubpackInfo;
// clang-format on

class SubpackInfoCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf3d8c0;
    // NOLINTEND

public:
    // prevent constructor by default
    SubpackInfoCollection& operator=(SubpackInfoCollection const&);
    SubpackInfoCollection(SubpackInfoCollection const&);
    SubpackInfoCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addSubpackInfo(::SubpackInfo&& subpack);

    MCAPI ::ContentTierInfo getSubpackContentTier(int index) const;

    MCAPI ::std::string const& getSubpackFolderName(int index) const;

    MCFOLD ::std::vector<::SubpackInfo> const& getSubpackInfo() const;

    MCAPI bool hasSubpacks() const;
    // NOLINTEND
};
