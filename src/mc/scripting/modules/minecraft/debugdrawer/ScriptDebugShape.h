#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleDebugUtilities { struct PacketShapeData; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDebugShape {
public:
    // ScriptDebugShape inner types define
    enum class Flags : uint {
        Remove                = 1,
        New                   = 2,
        UpdateLocation        = 4,
        UpdateScale           = 8,
        UpdateRotation        = 16,
        UpdateTimeleft        = 32,
        UpdateColor           = 64,
        UpdateText            = 128,
        UpdateBoxBound        = 256,
        UpdateLineEndLocation = 512,
        UpdateArrowHeadLength = 1024,
        UpdateArrowHeadRadius = 2048,
        UpdateSegmentCount    = 4096,
        SerializeAll          = 4294967294,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk30d837;
    ::ll::UntypedStorage<4, 12> mUnkd2f96a;
    ::ll::UntypedStorage<4, 12> mUnk30f287;
    ::ll::UntypedStorage<4, 4>  mUnk4b5d2f;
    ::ll::UntypedStorage<4, 24> mUnkd5bb4a;
    ::ll::UntypedStorage<4, 8>  mUnkdec18d;
    ::ll::UntypedStorage<4, 8>  mUnkc1fde9;
    ::ll::UntypedStorage<8, 24> mUnkbe0af3;
    ::ll::UntypedStorage<8, 8>  mUnk1fd12e;
    ::ll::UntypedStorage<4, 4>  mUnkc0fd57;
    ::ll::UntypedStorage<4, 4>  mUnk821e2b;
    ::ll::UntypedStorage<1, 1>  mUnka45b2a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugShape();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptDebugShape();

    // vIndex: 1
    virtual void populatePacketData(::ScriptModuleDebugUtilities::PacketShapeData& packet) const;

    // vIndex: 2
    virtual void applyUpdatedData(::ScriptModuleDebugUtilities::PacketShapeData const& packet);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptDebugShape(::ScriptModuleDebugUtilities::ScriptDebugShape const&);

    MCNAPI ::ScriptModuleDebugUtilities::ScriptDebugShape&
    operator=(::ScriptModuleDebugUtilities::ScriptDebugShape const&);

    MCNAPI void remove();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptDebugShape const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $populatePacketData(::ScriptModuleDebugUtilities::PacketShapeData& packet) const;

    MCNAPI void $applyUpdatedData(::ScriptModuleDebugUtilities::PacketShapeData const& packet);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
