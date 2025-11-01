#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IUnknownBlockTypeRegistry;
class StructureBlockPalette;
class StructureTemplateData;
namespace br::worldgen { struct StructureBlockInfo; }
// clang-format on

namespace br::worldgen {

struct McStructureTemplateBlockPalette {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::StructureTemplateData const*> mMcstructure;
    ::ll::TypedStorage<8, 8, ::StructureBlockPalette const*> mPalette;
    ::ll::TypedStorage<8, 8, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> const*> mUnknownBlockRegistry;
    ::ll::TypedStorage<8, 8, uint64> mIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> next();
    // NOLINTEND

};

}
