#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_20 {

struct JigsawStructureData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk12ba3f;
    ::ll::UntypedStorage<8, 24> mUnkbab4c7;
    ::ll::UntypedStorage<8, 24> mUnk58265e;
    ::ll::UntypedStorage<8, 24> mUnkd385ee;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawStructureData& operator=(JigsawStructureData const&);
    JigsawStructureData(JigsawStructureData const&);
    JigsawStructureData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~JigsawStructureData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_20
