#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"
#include "mc/server/editor/serviceproviders/BrushShapeManagerServiceProvider.h"

// auto generated forward declare list
// clang-format off
class CompoundBlockVolume;
class Vec3;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::BlockMask { class BlockMaskList; }
namespace Editor::Brush { class BrushShape; }
namespace Editor::Brush { class UIElement; }
namespace Editor::Network { class NativeBrushBlockChangeListPayload; }
namespace Editor::Network { class NativeBrushClientResponsePayload; }
namespace Editor::Network { class NativeBrushPaintEventPayload; }
namespace Editor::ScriptModule { class ScriptUIElement; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
// clang-format on

namespace Editor::Brush {

class BrushShapeManagerService : public ::Editor::Services::IEditorService,
                                 public ::Editor::Services::BrushShapeManagerServiceProvider,
                                 public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6af011;
    ::ll::UntypedStorage<8, 64> mUnkea48df;
    ::ll::UntypedStorage<8, 16> mUnkf07a8a;
    ::ll::UntypedStorage<8, 16> mUnke72fb3;
    ::ll::UntypedStorage<8, 64> mUnk656590;
    ::ll::UntypedStorage<8, 64> mUnk51d4db;
    ::ll::UntypedStorage<4, 12> mUnk37d1f3;
    ::ll::UntypedStorage<4, 4>  mUnkc4a1dd;
    ::ll::UntypedStorage<4, 4>  mUnka8c474;
    ::ll::UntypedStorage<4, 4>  mUnk55056d;
    ::ll::UntypedStorage<1, 1>  mUnk97eafd;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushShapeManagerService& operator=(BrushShapeManagerService const&);
    BrushShapeManagerService(BrushShapeManagerService const&);
    BrushShapeManagerService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BrushShapeManagerService() /*override*/;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result<void> ready() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result<void> quit() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 1
    virtual ::std::shared_ptr<::Editor::Brush::BrushShape> getCurrentBrushShape() const /*override*/;

    // vIndex: 2
    virtual ::std::shared_ptr<::CompoundBlockVolume> getCurrentBrushVolume() const /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<::CompoundBlockVolume>
    switchBrushShape(::std::string const& brushName) /*override*/;

    // vIndex: 4
    virtual ::Scripting::Result_deprecated<::std::vector<::std::shared_ptr<::Editor::Brush::UIElement>>>
    getUIElements(::std::string const& brushName) /*override*/;

    // vIndex: 5
    virtual ::Scripting::Result_deprecated<bool> uiElementValueChanged(
        ::std::string const&                               elementName,
        ::std::variant<float, bool, ::Vec3, ::std::string> newValue
    ) /*override*/;

    // vIndex: 6
    virtual ::std::vector<::std::shared_ptr<::Editor::Brush::BrushShape>> getBrushShapeList() const /*override*/;

    // vIndex: 7
    virtual void registerBrushShape(
        ::std::string const& name,
        ::std::string const& icon,
        ::Scripting::Closure<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>()>
            rebuild,
        ::Scripting::Closure<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>()>
            getSettingsUI
    ) /*override*/;

    // vIndex: 8
    virtual void activateBrushTool() /*override*/;

    // vIndex: 9
    virtual void switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode) /*override*/;

    // vIndex: 11
    virtual void setBrushShape(::std::vector<::Vec3> const& shapeOffsets) /*override*/;

    // vIndex: 10
    virtual void setBrushShape(::CompoundBlockVolume const& volume) /*override*/;

    // vIndex: 12
    virtual void setBrushMask(::Editor::BlockMask::BlockMaskList const& mask) /*override*/;

    // vIndex: 13
    virtual void
    beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback) /*override*/;

    // vIndex: 14
    virtual void endPainting(bool const cancelled) /*override*/;

    // vIndex: 15
    virtual void singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback) /*override*/;

    // vIndex: 16
    virtual void deactivateBrushTool() /*override*/;

    // vIndex: 17
    virtual void setBrushShapeOffset(::Vec3 const& offset) /*override*/;

    // vIndex: 18
    virtual ::Vec3 getBrushShapeOffset() const /*override*/;

    // vIndex: 19
    virtual void setTerrainStrength(int const terrainStrength) /*override*/;

    // vIndex: 20
    virtual void setFlattenHeight(int const flattenHeight) /*override*/;

    // vIndex: 21
    virtual void setFlattenRadius(int const flattenRadius) /*override*/;

    // vIndex: 22
    virtual void setBrushShapeVisible(bool const visible) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BrushShapeManagerService(::Editor::ServiceProviderCollection& providers);

    MCNAPI void _handleBlockChangePayload(::Editor::Network::NativeBrushBlockChangeListPayload const& payload);

    MCNAPI void _handleClientResponsePayload(::Editor::Network::NativeBrushClientResponsePayload const& payload);

    MCNAPI void _handlePaintEventPayload(::Editor::Network::NativeBrushPaintEventPayload const& payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void> $init();

    MCNAPI ::Scripting::Result<void> $ready();

    MCNAPI ::Scripting::Result<void> $quit();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::shared_ptr<::Editor::Brush::BrushShape> $getCurrentBrushShape() const;

    MCNAPI ::std::shared_ptr<::CompoundBlockVolume> $getCurrentBrushVolume() const;

    MCNAPI ::Scripting::Result_deprecated<::CompoundBlockVolume> $switchBrushShape(::std::string const& brushName);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::shared_ptr<::Editor::Brush::UIElement>>>
    $getUIElements(::std::string const& brushName);

    MCNAPI ::Scripting::Result_deprecated<bool> $uiElementValueChanged(
        ::std::string const&                               elementName,
        ::std::variant<float, bool, ::Vec3, ::std::string> newValue
    );

    MCNAPI ::std::vector<::std::shared_ptr<::Editor::Brush::BrushShape>> $getBrushShapeList() const;

    MCNAPI void $registerBrushShape(
        ::std::string const& name,
        ::std::string const& icon,
        ::Scripting::Closure<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptCompoundBlockVolume>()>
            rebuild,
        ::Scripting::Closure<
            ::std::vector<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUIElement>>()>
            getSettingsUI
    );

    MCNAPI void $activateBrushTool();

    MCNAPI void $switchBrushPaintMode(::Editor::Brush::BrushPaintMode mode);

    MCNAPI void $setBrushShape(::std::vector<::Vec3> const& shapeOffsets);

    MCNAPI void $setBrushShape(::CompoundBlockVolume const& volume);

    MCNAPI void $setBrushMask(::Editor::BlockMask::BlockMaskList const& mask);

    MCNAPI void $beginPainting(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback);

    MCNAPI void $endPainting(bool const cancelled);

    MCNAPI void $singlePaint(::std::function<void(::Editor::Brush::BrushPaintCompletionState)> fnCallback);

    MCNAPI void $deactivateBrushTool();

    MCNAPI void $setBrushShapeOffset(::Vec3 const& offset);

    MCNAPI ::Vec3 $getBrushShapeOffset() const;

    MCNAPI void $setTerrainStrength(int const terrainStrength);

    MCNAPI void $setFlattenHeight(int const flattenHeight);

    MCNAPI void $setFlattenRadius(int const flattenRadius);

    MCNAPI void $setBrushShapeVisible(bool const visible);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForBrushShapeManagerServiceProvider();
    // NOLINTEND
};

} // namespace Editor::Brush
