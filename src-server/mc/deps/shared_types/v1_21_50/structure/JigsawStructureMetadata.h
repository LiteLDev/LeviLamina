#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_50 {

struct JigsawStructureMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnke037ee;
    ::ll::UntypedStorage<8, 24> mUnk5e0ec8;
    ::ll::UntypedStorage<1, 1>  mUnke4480a;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureMetadata& operator=(JigsawStructureMetadata const&);
    JigsawStructureMetadata(JigsawStructureMetadata const&);
    JigsawStructureMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_21_50::JigsawStructureMetadata const&) const;
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_50
