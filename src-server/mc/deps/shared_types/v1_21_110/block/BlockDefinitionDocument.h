#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct BlockDefinitionDocument {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 408> mUnkbb9602;
    ::ll::UntypedStorage<8, 56> mUnk400d63;
    ::ll::UntypedStorage<8, 24> mUnk7e6825;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockDefinitionDocument& operator=(BlockDefinitionDocument const&);
    BlockDefinitionDocument(BlockDefinitionDocument const&);
    BlockDefinitionDocument();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

};

}
