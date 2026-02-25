#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecord.h"
#include "mc/client/world/WorldJoinedRecordType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace World {

class NetworkJoinedRecord : public ::World::WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mAddress;
    ::ll::TypedStorage<4, 4, int>            mPort;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const /*override*/;

    virtual bool operator==(::World::WorldJoinedRecord const& other) const /*override*/;

    virtual void serializeExtended(::Json::Value& outJsonValue) const /*override*/;

    virtual ~NetworkJoinedRecord() /*override*/ = default;
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
