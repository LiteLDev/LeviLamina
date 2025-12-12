#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
class ActorSoundIdentifier;
class Vec3;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
// clang-format on

class ILevelSoundManagerConnector : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelSoundManagerConnector() /*override*/ = default;

    virtual ::Bedrock::PubSub::Connector<
        void(::SharedTypes::Legacy::LevelSoundEvent, ::Vec3 const&, int, ::ActorSoundIdentifier const&, bool)>&
    getOnLevelSoundEventConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::std::string const&, ::Vec3 const&, float, float)>&
    getOnLevelSoundEventWithVolumeAndPitchConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void(::std::string const&)>& getOnStopLevelSoundEventConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopAllLevelSoundsEventConnector() = 0;

    virtual ::Bedrock::PubSub::Connector<void()>& getOnStopMusicEventConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
