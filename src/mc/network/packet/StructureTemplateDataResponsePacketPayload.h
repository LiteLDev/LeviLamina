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
    StructureTemplateDataResponsePacketPayload(StructureTemplateDataResponsePacketPayload const&);
    StructureTemplateDataResponsePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::StructureTemplateDataResponsePacketPayload& operator=(::StructureTemplateDataResponsePacketPayload&&);

    MCAPI ::StructureTemplateDataResponsePacketPayload&
    operator=(::StructureTemplateDataResponsePacketPayload const& other);

    MCAPI ~StructureTemplateDataResponsePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
