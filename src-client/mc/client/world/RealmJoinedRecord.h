#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/realms/RealmId.h"
#include "mc/client/world/WorldJoinedRecord.h"
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

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
    // prevent constructor by default
    RealmJoinedRecord();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const /*override*/;

    virtual bool operator==(::World::WorldJoinedRecord const& other) const /*override*/;

    virtual void serializeExtended(::Json::Value& outJsonValue) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmJoinedRecord(
        ::std::string const&     name,
        ::GameType               gameType,
        ::Realms::RealmId const& realmId,
        bool                     isEditorWorld
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::std::string const& name, ::GameType gameType, ::Realms::RealmId const& realmId, bool isEditorWorld);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::World::WorldJoinedRecordType $getWorldJoinedRecordType() const;

    MCAPI void $serializeExtended(::Json::Value& outJsonValue) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace World
