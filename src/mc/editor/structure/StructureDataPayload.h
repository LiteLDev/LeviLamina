#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class StructureDataPayload : public ::Editor::Network::NetworkPayload<::Editor::Network::StructureDataPayload> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e7594;
    ::ll::UntypedStorage<4, 4>  mUnk43a478;
    ::ll::UntypedStorage<8, 32> mUnk17c43e;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureDataPayload(StructureDataPayload const&);
    StructureDataPayload();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureDataPayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::Network::StructureDataPayload& operator=(::Editor::Network::StructureDataPayload const&);

    MCNAPI void setData(::CompoundTag const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Network
