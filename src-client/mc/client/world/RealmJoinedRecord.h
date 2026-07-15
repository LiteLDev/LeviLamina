#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/world/WorldJoinedRecord.h"
#include "mc/client/world/WorldJoinedRecordType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace World {

class RealmJoinedRecord : public ::World::WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Realms::RealmId> mRealmId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const /*override*/;

    virtual bool operator==(::World::WorldJoinedRecord const&) const /*override*/;

    virtual void serializeExtended(::Json::Value&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
