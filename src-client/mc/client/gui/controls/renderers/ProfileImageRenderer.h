#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"
#include "mc/client/gui/screens/UIBatchType.h"
#include "mc/client/social/ProfileImageOptions.h"
#include "mc/deps/core/threading/TaskGroup.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/minecraft_renderer/resources/ClientTexture.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class MinecraftUIRenderContext;
class UIControl;
class UICustomRenderer;
class UIScene;
namespace mce { struct Image; }
// clang-format on

class ProfileImageRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::Social::ProfileImageOptions>                    mProfileImageOptions;
    ::ll::TypedStorage<8, 336, ::TaskGroup>                                     mTaskGroup;
    ::ll::TypedStorage<8, 24, ::std::optional<::Bedrock::PubSub::Subscription>> mProfileImageChangedSubscription;
    ::ll::TypedStorage<1, 1, bool>                                              mIsLoadingImage;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::Image>>                  mImage;
    ::ll::TypedStorage<8, 24, ::mce::ClientTexture>                             mTexture;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProfileImageRenderer() /*override*/ = default;

    virtual ::std::shared_ptr<::UICustomRenderer> clone() const /*override*/;

    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) /*override*/;

    virtual void
    render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int) /*override*/;

    virtual ::UIBatchType getBatchType() const /*override*/;

    virtual int getCustomId() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ProfileImageRenderer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::UICustomRenderer> $clone() const;

    MCAPI bool $update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene);

    MCAPI void $render(::MinecraftUIRenderContext& renderContext, ::IClientInstance&, ::UIControl& owner, int);

    MCFOLD ::UIBatchType $getBatchType() const;

    MCFOLD int $getCustomId() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
