#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/model/models/Model.h"
#include "mc/world/actor/animation/AttachableSlotIndex.h"

// auto generated forward declare list
// clang-format off
class Actor;
class DataDrivenRenderer;
class ExpressionNode;
class GameVersion;
class HashedString;
class ItemStack;
class RenderParams;
class Vec3;
struct ActorRenderData;
struct ActorResourceDefinition;
// clang-format on

class DataDrivenModel : public ::Model {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk7350c7;
    ::ll::UntypedStorage<8, 48> mUnk716b58;
    ::ll::UntypedStorage<8, 64> mUnk1aee8d;
    ::ll::UntypedStorage<1, 1>  mUnkb6b6be;
    ::ll::UntypedStorage<1, 1>  mUnke411d6;
    // NOLINTEND

public:
    // prevent constructor by default
    DataDrivenModel& operator=(DataDrivenModel const&);
    DataDrivenModel(DataDrivenModel const&);
    DataDrivenModel();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataDrivenModel() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit DataDrivenModel(::std::weak_ptr<::ActorResourceDefinition> definitionWeakPtr);

    MCNAPI ::HashedString _parseRootSkinName(::HashedString const& skinName);

    MCNAPI bool _setArmorTrim(
        ::ItemStack const&                   itemInstance,
        ::std::shared_ptr<::DataDrivenModel> model,
        ::Actor&                             actor,
        ::RenderParams&                      renderParams,
        ::RenderParams&                      childRenderParams
    );

    MCNAPI ::ExpressionNode getCopyOfScript_defaultIfNone(::HashedString const& name) const;

    MCNAPI ::std::weak_ptr<::DataDrivenRenderer>
    getDataDrivenRenderer(::RenderParams& renderParams, ::ItemStack const& itemInstance);

    MCNAPI ::std::string getResourceDefinitionName() const;

    MCNAPI bool hasScript(::HashedString const& name) const;

    MCNAPI void render(
        ::std::shared_ptr<::DataDrivenRenderer> renderer,
        ::ActorRenderData&                      actorRenderData,
        ::Vec3 const&                           modelTranslationWithWorldRotation,
        ::Vec3 const&                           cameraTargetPos
    );

    MCNAPI void renderAsChild(::RenderParams& renderParams, ::AttachableSlotIndex const& index);

    MCNAPI void renderAttachable(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCNAPI void renderAttachableNoChecks(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCNAPI void setupAttachable(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor
    );

    MCNAPI void setupAttachableNoChecks(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        ::RenderParams&              renderParams,
        ::Actor&                     actor,
        bool                         isFirstPerson,
        bool                         runParentSetup
    );

    MCNAPI bool tryExecuteScript(::HashedString const& scriptName, ::RenderParams& renderParams, float& result);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool shouldRenderAttachable(
        ::ItemStack const&           itemInstance,
        ::AttachableSlotIndex const& attachableSlotIndex,
        bool                         isFirstPerson,
        bool                         lessThanOrEqualToVersion_1_16_210,
        bool                         hideArmor
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::GameVersion& Version_1_16_210();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::weak_ptr<::ActorResourceDefinition> definitionWeakPtr);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
