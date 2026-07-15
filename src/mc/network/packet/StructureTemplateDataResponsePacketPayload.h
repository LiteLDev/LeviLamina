#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/StructureTemplateResponseType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct StructureTemplateDataResponsePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                   mStructureName;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mStructureTag;
    ::ll::TypedStorage<1, 1, ::StructureTemplateResponseType>  mResponseType;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplateDataResponsePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTemplateDataResponsePacketPayload(
        ::std::string const&             structureName,
        ::std::unique_ptr<::CompoundTag> structureTag,
        ::StructureTemplateResponseType  type
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string const&             structureName,
        ::std::unique_ptr<::CompoundTag> structureTag,
        ::StructureTemplateResponseType  type
    );
    // NOLINTEND
};
