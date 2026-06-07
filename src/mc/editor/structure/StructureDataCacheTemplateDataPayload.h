#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class StructureDataCacheTemplateDataPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataCacheTemplateDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk1919a8;
    ::ll::UntypedStorage<8, 32> mUnka45f9e;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataCacheTemplateDataPayload& operator=(StructureDataCacheTemplateDataPayload const&);
    StructureDataCacheTemplateDataPayload(StructureDataCacheTemplateDataPayload const&);
    StructureDataCacheTemplateDataPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureDataCacheTemplateDataPayload(::mce::UUID const& itemId, ::CompoundTag const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const& itemId, ::CompoundTag const& data);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
