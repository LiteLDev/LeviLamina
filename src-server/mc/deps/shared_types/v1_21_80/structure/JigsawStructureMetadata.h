#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_80 {

struct JigsawStructureMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk888897;
    ::ll::UntypedStorage<8, 24> mUnk1080d9;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureMetadata& operator=(JigsawStructureMetadata const&);
    JigsawStructureMetadata(JigsawStructureMetadata const&);
    JigsawStructureMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::SharedTypes::v1_21_80::JigsawStructureMetadata const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
