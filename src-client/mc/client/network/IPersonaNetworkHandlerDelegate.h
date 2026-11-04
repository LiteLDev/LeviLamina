#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/network/AppearanceFetchMode.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Actor;
class IClientInstance;
class ILevel;
class PersonaAppearance;
class SerializedSkinRef;
namespace mce { class UUID; }
// clang-format on

class IPersonaNetworkHandlerDelegate {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPersonaNetworkHandlerDelegate() = default;

    virtual void setClientLevel(::Bedrock::NonOwnerPointer<::ILevel> clientLevel) = 0;

    virtual void onTick(::IClientInstance& client) = 0;

    virtual void onEntityRemoved(::Actor& entity) = 0;

    virtual void onLevelDestruction() = 0;

    virtual void addSkinToQueue(
        ::mce::UUID const&         playerId,
        ::SerializedSkinRef const& serializedSkin,
        ::std::string const&       playFabId,
        ::AppearanceFetchMode      appearanceFetchMode
    ) = 0;

    virtual void onPlayerListed(::mce::UUID const& playerId, ::std::string const& playFabId) = 0;

    virtual void onPlayerUnlisted(::mce::UUID const& playerId) = 0;

    virtual ::PersonaAppearance const* tryGetRemoteAppearance(::mce::UUID const& playerId) const = 0;

    virtual void eraseSessionPersona(::mce::UUID const& playerId) = 0;
    // NOLINTEND
};
