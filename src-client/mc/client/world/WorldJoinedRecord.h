#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/world/WorldJoinedRecordType.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace World {

class WorldJoinedRecord {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, ::GameType>     mGameType;
    ::ll::TypedStorage<8, 8, int64>          mTimeJoined;
    ::ll::TypedStorage<1, 1, bool>           mIsEditorWorld;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldJoinedRecord() = default;

    virtual ::World::WorldJoinedRecordType getWorldJoinedRecordType() const = 0;

    virtual bool operator==(::World::WorldJoinedRecord const&) const = 0;

    virtual void serializeExtended(::Json::Value&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace World
