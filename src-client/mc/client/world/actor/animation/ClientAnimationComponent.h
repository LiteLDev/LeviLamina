#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"
#include "mc/world/actor/SkeletalHierarchyIndex.h"
#include "mc/world/actor/animation/AnimationComponent.h"

// auto generated forward declare list
// clang-format off
class ActorAnimationPlayer;
class ActorRenderData;
class ApplyAnimationContext;
class BaseActorRenderContext;
class BoneOrientation;
class DataDrivenGeometry;
class DataDrivenModel;
class Matrix;
class RenderParams;
struct RenderControllerToProcess;
// clang-format on

class ClientAnimationComponent : public ::AnimationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderControllerToProcess>> mRenderControllersToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::SkeletalHierarchyIndex>>    mSkeletalHierarchiesToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::Matrix>>                    mQueryableBoneOrientations;
    ::ll::TypedStorage<8, 8, void const*>                                 mLastModelInitializedWith;
    ::ll::TypedStorage<1, 1, bool>                                        mAreRenderControllersConstant;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ClientAnimationComponent() /*override*/;

    virtual ::ClientAnimationComponent* tryGetClient() /*override*/;

    virtual void visitApplyContext(
        ::brstd::function_ref<void(::ApplyAnimationContext const&) const, void(::ApplyAnimationContext const&)> visitor
    ) const /*override*/;

    virtual void updateQueryableGeometryBoneOrientations() /*override*/;

    virtual ::gsl::span<::SkeletalHierarchyIndex const> getSkeletalHierarchiesToProcess() const /*override*/;

    virtual void setDirty() /*override*/;

    virtual void initializeClientAnimationComponent(
        ::std::function<void(::ActorAnimationPlayer&)> animationComponentInitFunction
    ) /*override*/;

    virtual void ensureClientAnimationComponentIsInitialized() /*override*/;

    virtual float _getActorRenderDeltaTime(::ActorRenderData const& data) const /*override*/;

    virtual ::Matrix const* getQueryableBoneOrientation(uint64 boneNameHash) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool attemptToSetParentBoneMapping(
        ::ClientAnimationComponent& parentAnimationComponent,
        ::BoneOrientation&          childBoneOrientation
    ) const;

    MCAPI ::std::vector<::BoneOrientation>& getBoneOrientationsFromGeometry(::DataDrivenGeometry const& sourceGeo);

    MCAPI ::RenderParams& prepRenderParamsForActorRendering(
        ::ActorRenderData&                   actorRenderData,
        ::BaseActorRenderContext*            baseActorRenderContext,
        ::std::shared_ptr<::DataDrivenModel> model,
        float                                frameAlpha
    );

    MCAPI void updateRenderControllersToProcess(
        ::std::shared_ptr<::DataDrivenModel> itemModel,
        ::RenderParams&                      renderParamsToUseForRenderControllerEvalulation
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ClientAnimationComponent* $tryGetClient();

    MCAPI void $visitApplyContext(
        ::brstd::function_ref<void(::ApplyAnimationContext const&) const, void(::ApplyAnimationContext const&)> visitor
    ) const;

    MCAPI void $updateQueryableGeometryBoneOrientations();

    MCAPI ::gsl::span<::SkeletalHierarchyIndex const> $getSkeletalHierarchiesToProcess() const;

    MCAPI void $setDirty();

    MCAPI void
    $initializeClientAnimationComponent(::std::function<void(::ActorAnimationPlayer&)> animationComponentInitFunction);

    MCAPI void $ensureClientAnimationComponentIsInitialized();

    MCAPI float $_getActorRenderDeltaTime(::ActorRenderData const& data) const;

    MCAPI ::Matrix const* $getQueryableBoneOrientation(uint64 boneNameHash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
