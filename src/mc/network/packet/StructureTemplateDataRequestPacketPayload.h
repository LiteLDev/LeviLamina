#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

struct StructureTemplateDataRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mStructureName;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition>             mStructureBlockPos;
    ::ll::TypedStorage<8, 104, ::StructureSettings>               mStructureSettings;
    ::ll::TypedStorage<1, 1, ::StructureTemplateRequestOperation> mRequestOperation;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructureTemplateDataRequestPacketPayload();

    MCAPI StructureTemplateDataRequestPacketPayload(::StructureTemplateDataRequestPacketPayload&&);

    MCAPI StructureTemplateDataRequestPacketPayload(::StructureTemplateDataRequestPacketPayload const&);

    MCAPI ::StructureTemplateDataRequestPacketPayload& operator=(::StructureTemplateDataRequestPacketPayload&&);

    MCAPI ::StructureTemplateDataRequestPacketPayload& operator=(::StructureTemplateDataRequestPacketPayload const&);

    MCAPI ~StructureTemplateDataRequestPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::StructureTemplateDataRequestPacketPayload&&);

    MCAPI void* $ctor(::StructureTemplateDataRequestPacketPayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
