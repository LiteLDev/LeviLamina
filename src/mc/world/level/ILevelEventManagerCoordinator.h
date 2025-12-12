#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
// clang-format on

class ILevelEventManagerCoordinator {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelEventManagerCoordinator() = default;

    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::Vec3 const&, int)>&
    getLevelEventDataConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::SharedTypes::Legacy::LevelEvent, ::CompoundTag const&)>&
    getLevelEventCompoundTagConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
