#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result.h"
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
namespace mce { class Color; }
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
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const /*override*/;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& existing) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTextPrimitive();

    MCAPI ScriptTextPrimitive(
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const&          location,
        ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text,
        bool                                                                                     isDebugShape,
        uint                                                                                     maxTextLength,
        uint                                                                                     maxTextLines
    );

    MCAPI ::Scripting::Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError>
    _verifyRawMessageLength(::std::string const& text) const;

    MCFOLD ::std::optional<::ScriptModuleMinecraft::ScriptRGBA> const& getBackgroundColorOverride() const;

#ifdef LL_PLAT_C
    MCAPI ::std::optional<::mce::Color> getBackgroundMCEColor() const;
#endif

    MCFOLD bool getDepthTest() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string const& getLocalizedText() const;

    MCFOLD uint getMaxLines() const;

    MCFOLD uint getMaxTextLength() const;
#endif

    MCFOLD bool getShowBackface() const;

    MCFOLD bool getShowTextBackface() const;

    MCAPI ::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> getText() const;

    MCAPI bool getUseRotation() const;

    MCAPI void setBackgroundColorOverride(::std::optional<::ScriptModuleMinecraft::ScriptRGBA> const& color);

    MCAPI void setDepthTest(bool depthTest);

    MCAPI void setShowBackface(bool showBackface);

    MCAPI void setShowTextBackface(bool showTextBackface);

    MCAPI ::Scripting::
        Result<void, ::ScriptModuleMinecraft::ScriptRawMessageError, ::Scripting::ArgumentOutOfBoundsError>
        setText(::std::variant<::std::string, ::ScriptModuleMinecraft::ScriptRawMessageInterface> const& text);

    MCAPI void setUseRotation(bool useRotation);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
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
    MCAPI void $populatePacketData(::PrimitiveShapeDataPayload& packetShapeData) const;

    MCAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& existing);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
