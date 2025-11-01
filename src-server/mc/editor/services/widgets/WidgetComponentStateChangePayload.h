#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/network/NetworkPayload.h"
#include "mc/editor/services/widgets/WidgetCommonBasePayload.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Network {

class WidgetComponentStateChangePayload : public ::Editor::Network::NetworkPayload<::Editor::Network::WidgetComponentStateChangePayload>, public ::Editor::Network::WidgetCommonBasePayload {
public:
    // WidgetComponentStateChangePayload inner types declare
    // clang-format off
    class ComponentStateBase;
    class ComponentStateBoundingBox;
    class ComponentStateClipboard;
    class ComponentStateEntity;
    class ComponentStateGizmo;
    class ComponentStateGrid;
    class ComponentStateNULL;
    class ComponentStateSpline;
    class ComponentStateText;
    class ComponentStateVolumeOutline;
    class ComponentStateVolumeOutlineVolumeUpdate;
    // clang-format on
    
    // WidgetComponentStateChangePayload inner types define
    class ComponentStateBase {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 2> mUnk574fae;
        ::ll::UntypedStorage<4, 16> mUnkc6397e;
        ::ll::UntypedStorage<1, 2> mUnk949b48;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateBase& operator=(ComponentStateBase const&);
        ComponentStateBase(ComponentStateBase const&);
        ComponentStateBase();
    
    };
    
    enum class WidgetComponentStateVariantType : int {
        BoundingBox = 0,
        Clipboard = 1,
        Entity = 2,
        Gizmo = 3,
        Spline = 4,
        Text = 5,
        VolumeOutline = 6,
        VolumeOutlineVolumeUpdate = 7,
        Grid = 8,
        Null = 9,
    };
    
    class ComponentStateNULL {
    };
    
    class ComponentStateBoundingBox {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 16> mUnkb215e2;
        ::ll::UntypedStorage<1, 2> mUnkda0fa4;
        ::ll::UntypedStorage<1, 2> mUnke00771;
        ::ll::UntypedStorage<4, 16> mUnk803240;
        ::ll::UntypedStorage<4, 16> mUnk6c7610;
        ::ll::UntypedStorage<4, 20> mUnkb73204;
        ::ll::UntypedStorage<4, 20> mUnkfdca77;
        ::ll::UntypedStorage<1, 2> mUnk2e68d9;
        ::ll::UntypedStorage<1, 2> mUnk409c81;
        ::ll::UntypedStorage<1, 2> mUnkc3a4de;
        ::ll::UntypedStorage<4, 8> mUnk665049;
        ::ll::UntypedStorage<1, 2> mUnkdb98e5;
        ::ll::UntypedStorage<4, 8> mUnkdd2de4;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateBoundingBox& operator=(ComponentStateBoundingBox const&);
        ComponentStateBoundingBox(ComponentStateBoundingBox const&);
        ComponentStateBoundingBox();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateBoundingBox const& other) const;
        // NOLINTEND
    
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    
    };
    
    class ComponentStateClipboard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 2> mUnk8e897c;
        ::ll::UntypedStorage<1, 2> mUnk557db6;
        ::ll::UntypedStorage<4, 16> mUnkff0e69;
        ::ll::UntypedStorage<4, 16> mUnk2254e3;
        ::ll::UntypedStorage<1, 2> mUnk138623;
        ::ll::UntypedStorage<4, 20> mUnk2568f6;
        ::ll::UntypedStorage<4, 20> mUnkca2655;
        ::ll::UntypedStorage<4, 20> mUnkdd0bda;
        ::ll::UntypedStorage<4, 20> mUnk117a27;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateClipboard& operator=(ComponentStateClipboard const&);
        ComponentStateClipboard(ComponentStateClipboard const&);
        ComponentStateClipboard();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateClipboard const& other) const;
        // NOLINTEND
    
    };
    
    class ComponentStateEntity {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 2> mUnkd693f4;
        ::ll::UntypedStorage<8, 40> mUnkd70457;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateEntity(ComponentStateEntity const&);
        ComponentStateEntity();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateEntity& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateEntity const&);
    
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateEntity& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateEntity&&);
    
        MCNAPI ~ComponentStateEntity();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    class ComponentStateGizmo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnkf8923d;
        ::ll::UntypedStorage<4, 16> mUnkfdbf79;
        ::ll::UntypedStorage<4, 8> mUnkaec880;
        ::ll::UntypedStorage<1, 1> mUnkcce666;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateGizmo& operator=(ComponentStateGizmo const&);
        ComponentStateGizmo(ComponentStateGizmo const&);
        ComponentStateGizmo();
    
    };
    
    class ComponentStateSpline {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnkf5d661;
        ::ll::UntypedStorage<8, 32> mUnk806765;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateSpline(ComponentStateSpline const&);
        ComponentStateSpline();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ComponentStateSpline(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline&&);
    
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline const&);
    
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline&&);
    
        MCNAPI ~ComponentStateSpline();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline&&);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    class ComponentStateText {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk4b88d2;
        ::ll::UntypedStorage<4, 20> mUnkfae6d8;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateText(ComponentStateText const&);
        ComponentStateText();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateText& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateText&&);
    
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateText& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateText const&);
    
        MCNAPI ~ComponentStateText();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    class ComponentStateVolumeOutline {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 96> mUnk2147af;
        ::ll::UntypedStorage<4, 20> mUnk32b7dc;
        ::ll::UntypedStorage<4, 20> mUnk136d74;
        ::ll::UntypedStorage<4, 20> mUnkc46b02;
        ::ll::UntypedStorage<4, 20> mUnk31c79b;
        ::ll::UntypedStorage<1, 2> mUnk16511b;
        ::ll::UntypedStorage<1, 2> mUnk27f311;
        ::ll::UntypedStorage<1, 2> mUnk224c24;
        ::ll::UntypedStorage<1, 2> mUnk439a1a;
        ::ll::UntypedStorage<4, 16> mUnk63ac58;
        ::ll::UntypedStorage<4, 16> mUnk1c30d0;
        ::ll::UntypedStorage<1, 2> mUnk6f4c55;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateVolumeOutline();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ComponentStateVolumeOutline(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline const&);
    
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline&&);
    
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline const&);
    
        MCNAPI bool operator==(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline const& other) const;
    
        MCNAPI ~ComponentStateVolumeOutline();
        // NOLINTEND
    
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline const&);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    class ComponentStateVolumeOutlineVolumeUpdate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3ac1ac;
        ::ll::UntypedStorage<8, 96> mUnk7c4086;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateVolumeOutlineVolumeUpdate& operator=(ComponentStateVolumeOutlineVolumeUpdate const&);
        ComponentStateVolumeOutlineVolumeUpdate(ComponentStateVolumeOutlineVolumeUpdate const&);
        ComponentStateVolumeOutlineVolumeUpdate();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ComponentStateVolumeOutlineVolumeUpdate();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    class ComponentStateGrid {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 8> mUnkcd0b45;
        ::ll::UntypedStorage<4, 20> mUnkd277fa;
        ::ll::UntypedStorage<4, 12> mUnk489dfe;
        ::ll::UntypedStorage<4, 12> mUnk4e492b;
        ::ll::UntypedStorage<4, 12> mUnkfc0933;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ComponentStateGrid(ComponentStateGrid const&);
        ComponentStateGrid();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGrid& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGrid&&);
    
        MCNAPI ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGrid& operator=(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGrid const&);
    
        MCNAPI bool operator==(::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGrid const& other) const;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2b0e3b;
    ::ll::UntypedStorage<4, 24> mUnk269c2b;
    ::ll::UntypedStorage<8, 232> mUnkab1f07;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetComponentStateChangePayload& operator=(WidgetComponentStateChangePayload const&);
    WidgetComponentStateChangePayload(WidgetComponentStateChangePayload const&);
    WidgetComponentStateChangePayload();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WidgetComponentStateChangePayload() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WidgetComponentStateChangePayload(::mce::UUID const& serviceId, ::mce::UUID const& groupId, ::mce::UUID const& widgetId, ::mce::UUID const& componentId, ::std::variant<::Editor::Network::WidgetComponentStateChangePayload::ComponentStateBoundingBox, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateClipboard, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateEntity, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGizmo, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateText, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutlineVolumeUpdate, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateNULL, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGrid>&& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::UUID const& serviceId, ::mce::UUID const& groupId, ::mce::UUID const& widgetId, ::mce::UUID const& componentId, ::std::variant<::Editor::Network::WidgetComponentStateChangePayload::ComponentStateBoundingBox, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateClipboard, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateEntity, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGizmo, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateSpline, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateText, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutline, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateVolumeOutlineVolumeUpdate, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateNULL, ::Editor::Network::WidgetComponentStateChangePayload::ComponentStateGrid>&& data);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
