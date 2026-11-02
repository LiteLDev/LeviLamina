#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/modules/minecraft/ScriptRGBA.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShape.h"
#include "mc/textobject/TextObjectRoot.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageError; }
namespace ScriptModuleMinecraft { struct ScriptRawMessageInterface; }
namespace Scripting { struct ArgumentOutOfBoundsError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptTextPrimitive : public ::ScriptModuleMinecraft::ScriptPrimitiveShape {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                            mMaxTextLength;
    ::ll::TypedStorage<4, 4, uint const>                                            mMaxTextLines;
    ::ll::TypedStorage<8, 40, ::std::variant<::std::string, ::TextObjectRoot>>      mText;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mTextObjectString;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseRotation;
    ::ll::TypedStorage<8, 32, ::std::optional<::ScriptModuleMinecraft::ScriptRGBA>> mBackgroundColor;
    ::ll::TypedStorage<1, 1, bool>                                                  mDepthTest;
    ::ll::TypedStorage<1, 1, bool>                                                  mShowBackface;
    ::ll::TypedStorage<1, 1, bool>                                                  mShowTextBackface;
    ::ll::TypedStorage<4, 4, float>                                                 mLineGapHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTextPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const /*override*/;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& existing) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTextPrimitive(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const&          location,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text,
        bool                                                                                     isDebugShape,
        uint                                                                                     maxTextLength,
        uint                                                                                     maxTextLines
    );

#ifdef LL_PLAT_C
    MCNAPI ::std::string const& getLocalizedText() const;
#endif

    MCNAPI ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> getText() const;

    MCNAPI void setDepthTest(bool depthTest);

    MCNAPI void setShowBackface(bool showBackface);

    MCNAPI void setShowTextBackface(bool showTextBackface);

    MCNAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::Scripting::ArgumentOutOfBoundsError>
        setText(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text);

    MCNAPI void setUseRotation(bool useRotation);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const&          location,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text,
        bool                                                                                     isDebugShape,
        uint                                                                                     maxTextLength,
        uint                                                                                     maxTextLines
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const;

    MCNAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& existing);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
