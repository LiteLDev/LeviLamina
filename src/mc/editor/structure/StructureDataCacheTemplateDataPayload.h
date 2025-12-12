#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class StructureDataCacheTemplateDataPayload
: public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataCacheTemplateDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk5ab1b0;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataCacheTemplateDataPayload& operator=(StructureDataCacheTemplateDataPayload const&);
    StructureDataCacheTemplateDataPayload(StructureDataCacheTemplateDataPayload const&);
    StructureDataCacheTemplateDataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool load(::CompoundTag const* tag) /*override*/;

    virtual ::CompoundTag save() const /*override*/;

    virtual ~StructureDataCacheTemplateDataPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureDataCacheTemplateDataPayload(::mce::UUID const& itemId, ::CompoundTag&& data);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::string_view const& ITEM_ID_KEY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const& itemId, ::CompoundTag&& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $load(::CompoundTag const* tag);

    MCNAPI ::CompoundTag $save() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
