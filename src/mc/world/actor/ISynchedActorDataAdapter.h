#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DataItem;
class EntityContext;
namespace SynchedActorDataSerializer { struct DeserializeArgs; }
namespace SynchedActorDataSerializer { struct DeserializeResult; }
// clang-format on

struct ISynchedActorDataAdapter {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISynchedActorDataAdapter() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::DataItem> serialize(::EntityContext const&) const = 0;

    // vIndex: 2
    virtual ::SynchedActorDataSerializer::DeserializeResult
    deserialize(::DataItem const&, ::SynchedActorDataSerializer::DeserializeArgs&) const = 0;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ISynchedActorDataAdapter const* getSyncInfo(ushort actorDataId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
