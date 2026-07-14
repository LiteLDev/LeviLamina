#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/Model.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorRenderData;
class ActorResourceDefinition;
class DataDrivenRenderer;
class ExpressionNode;
class GameVersion;
class ItemStack;
class RenderParams;
class Vec3;
// clang-format on

class DataDrivenModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::ActorResourceDefinition>>                       mResourceDefinition;
    ::ll::TypedStorage<8, 48, ::HashedString>                                                   mName;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<int, ::std::weak_ptr<::DataDrivenRenderer>>> mItemToRendererMap;
    ::ll::TypedStorage<1, 1, bool>                                                              mEnableAttachables;
    ::ll::TypedStorage<1, 1, bool>                                                              mHideArmor;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenModel() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DataDrivenModel(::std::weak_ptr<::ActorResourceDefinition> definitionWeakPtr);

    MCAPI ::HashedString _parseRootSkinName(::HashedString const& skinName);

    MCAPI bool _setArmorTrim(
        ::ItemStack const&                   itemInstance,
        ::std::shared_ptr<::DataDrivenModel> model,
        ::Actor&                             actor,
        ::RenderParams&                      renderParams,
        ::RenderParams&                      childRenderParams
    );

    MCAPI float
    executeScript(::HashedString const& scriptName, ::RenderParams& renderParams, float defaultValueIfNoScript);

    MCAPI ::ExpressionNode getCopyOfScript_defaultIfNone(::HashedString const& name) const;

    MCAPI ::std::weak_ptr<::DataDrivenRenderer>
    getDataDrivenRenderer(::RenderParams& renderParams, ::ItemStack const& itemInstance);

    MCAPI ::std::string getResourceDefinitionName() const;

    MCAPI bool hasScript(::HashedString const& name) const;

    MCAPI void render(
        ::std::shared_ptr<::DataDrivenRenderer> renderer,
        ::ActorRenderData&                      actorRenderData,
        ::Vec3 const&                           modelTranslationWithWorldRotation,
        ::Vec3 const&                           cameraTargetPos
    );

    MCAPI void renderAsChild(::RenderParams& renderParams, ::AttachableSlotIndex const& index);

    MCAPI void renderAttachable(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCAPI void renderAttachableNoChecks(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCAPI void setupAttachable(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCAPI void setupAttachableNoChecks(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor,
        bool                         isFirstPerson,
        bool                         runParentSetup
    );

    MCAPI bool tryExecuteScript(::HashedString const& scriptName, ::RenderParams& renderParams, float& result);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool shouldRenderAttachableOnActor(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        bool                         isSpectator,
        bool                         isFirstPerson,
        bool                         isRenderingOnMap,
        bool                         lessThanOrEqualToVersion_1_16_210,
        bool                         hideArmor
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::GameVersion& Version_1_16_210();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::ActorResourceDefinition> definitionWeakPtr);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
