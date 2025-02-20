#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct ActorDefinitionIdentifier;
// clang-format on

class ILevelSoundManagerConnector : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILevelSoundManagerConnector() /*override*/ = default;

    // vIndex: 1
    virtual ::Bedrock::PubSub::Connector<void(
        ::SharedTypes::Legacy::LevelSoundEvent,
        ::Vec3 const&,
        int,
        ::ActorDefinitionIdentifier const&,
        bool,
        bool
    )>&
    getOnLevelSoundEventConnector() = 0;

    // vIndex: 2
    virtual ::Bedrock::PubSub::Connector<void(::std::string const&, ::Vec3 const&, float, float)>&
    getOnLevelSoundEventWithVolumeAndPitchConnector() = 0;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Connector<void(::std::string const&)>& getOnStopLevelSoundEventConnector() = 0;

    // vIndex: 4
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopAllLevelSoundsEventConnector() = 0;

    // vIndex: 5
    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopMusicEventConnector() = 0;
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
