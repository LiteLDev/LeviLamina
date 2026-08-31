#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/StructureTemplateRequestOperation.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/StructureSettings.h"

struct StructureTemplateDataRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mStructureName;
    ::ll::TypedStorage<4, 12, ::BlockPos>                         mStructureBlockPos;
    ::ll::TypedStorage<8, 104, ::StructureSettings>               mStructureSettings;
    ::ll::TypedStorage<1, 1, ::StructureTemplateRequestOperation> mRequestOperation;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    StructureTemplateDataRequestPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI StructureTemplateDataRequestPacketPayload(
        ::std::string const&                structureName,
        ::BlockPos const&                   blockPos,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation requestOperation
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(
        ::std::string const&                structureName,
        ::BlockPos const&                   blockPos,
        ::StructureSettings const&          structureSettings,
        ::StructureTemplateRequestOperation requestOperation
    );
#endif
    // NOLINTEND
};
