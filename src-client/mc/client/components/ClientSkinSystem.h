#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorResourceDefinition;
class ActorResourceDefinitionGroup;
class AnimationComponent;
class ClientLevel;
class ExpressionNode;
class FrameUpdateContext;
class HashedString;
class IClientInstance;
class Player;
class RenderControllerGroup;
class RenderControllerPtr;
class ResourceLoadManager;
class SerializedSkinRef;
class WeakEntityRef;
struct ClientSkin;
namespace mce { struct Image; }
// clang-format on

class ClientSkinSystem {
public:
    // ClientSkinSystem inner types define
    using RenderControllerList = ::std::vector<::std::pair<::RenderControllerPtr, ::ExpressionNode>>;

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _setupPersonaLodRenderControllers(
        bool                                                          lodReady,
        ::std::shared_ptr<::ActorResourceDefinition> const&           resourceDef,
        ::Bedrock::NotNullNonOwnerPtr<::RenderControllerGroup> const& renderControllerGroup
    );

    MCNAPI static bool _setupPersonaLodTextureAndGeometry(
        ::ClientSkin const&                                                  skin,
        ::SerializedSkinRef const&                                           serializedSkin,
        ::std::shared_ptr<::ActorResourceDefinition> const&                  resourceDef,
        ::Bedrock::NotNullNonOwnerPtr<::ActorResourceDefinitionGroup> const& resourceDefinitions
    );

    MCNAPI static void _updateClientSkin(
        ::IClientInstance&                                   client,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::ClientSkin&                                        clientSkin,
        ::SerializedSkinRef const&                           skin,
        ::mce::Image const*                                  image,
        ::mce::Image const*                                  capeImage,
        bool                                                 isAsync,
        ::std::function<void()>                              geoFinishedCallback
    );

    MCNAPI static void addPlayerToFireEvent(::HashedString identifier, ::Player const* player);

    MCNAPI static void applySkinToPlayer(::IClientInstance& client, ::Player& player, ::SerializedSkinRef const& skin);

    MCNAPI static void createOrUpdate(
        ::IClientInstance&         client,
        ::AnimationComponent&      animationComponent,
        ::SerializedSkinRef const& skin,
        ::mce::Image const*        image,
        ::mce::Image const*        capeImage,
        bool                       isAsync,
        ::std::function<void()>    geoFinishedCallback
    );

    MCNAPI static bool doesRenderControllerListHaveRenderer(
        ::std::vector<::std::pair<::RenderControllerPtr, ::ExpressionNode>> const& renderControllerList,
        ::HashedString                                                             renderControllerName
    );

    MCNAPI static void fireEventToPlayers(::HashedString const identifier, ::ClientLevel* level);

    MCNAPI static void frameUpdate(::FrameUpdateContext& frameUpdateContext, ::IClientInstance& client);

    MCNAPI static bool isAnySkinOfNameInitialized(::IClientInstance& client, ::std::string_view skinName);

    MCNAPI static void reload(::IClientInstance& client);

    MCNAPI static void remove(::IClientInstance& client, ::std::string const& skinName);

    MCNAPI static void shutdown(::IClientInstance& client);

    MCNAPI static void tick(::IClientInstance& client);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::map<::HashedString, ::std::vector<::WeakEntityRef>>& mSkinIdToPlayersMap();

    MCNAPI static int& sPersonaSkinLodDistance();
    // NOLINTEND
};
