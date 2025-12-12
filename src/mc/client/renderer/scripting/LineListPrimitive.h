#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitive.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Scripting::RenderHelper { struct Vertex; }
namespace mce { class Color; }
// clang-format on

namespace Scripting::RenderHelper {

class LineListPrimitive : public ::Scripting::RenderHelper::BasePrimitive {
public:
    // LineListPrimitive inner types declare
    // clang-format off
    struct ColoredLine;
    struct Line;
    // clang-format on

    // LineListPrimitive inner types define
    struct ColoredLine {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk88b824;
        ::ll::UntypedStorage<4, 12> mUnkd4f0b4;
        ::ll::UntypedStorage<4, 16> mUnk956750;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColoredLine& operator=(ColoredLine const&);
        ColoredLine(ColoredLine const&);
        ColoredLine();
    };

    struct Line {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 12> mUnk7bb2c9;
        ::ll::UntypedStorage<4, 12> mUnk984e6d;
        // NOLINTEND

    public:
        // prevent constructor by default
        Line& operator=(Line const&);
        Line(Line const&);
        Line();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk986d8d;
    ::ll::UntypedStorage<4, 24> mUnk86a841;
    ::ll::UntypedStorage<4, 12> mUnkd7139a;
    // NOLINTEND

public:
    // prevent constructor by default
    LineListPrimitive& operator=(LineListPrimitive const&);
    LineListPrimitive(LineListPrimitive const&);
    LineListPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LineListPrimitive() /*override*/ = default;

    virtual ::Scripting::RenderHelper::PrimitiveType getType() const /*override*/;

    virtual ::Vec3 const& getPosition() const /*override*/;

    virtual void updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const /*override*/;

    virtual void _rebuild() /*override*/;

    virtual void _getVertices(::std::vector<::Scripting::RenderHelper::Vertex>& vertices) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit LineListPrimitive(uint64 lineCount);

    MCNAPI_C void addLine(::Vec3 const& start, ::Vec3 const& end, ::mce::Color const& color);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(uint64 lineCount);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Scripting::RenderHelper::PrimitiveType $getType() const;

    MCNAPI ::Vec3 const& $getPosition() const;

    MCNAPI void $updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const;

    MCNAPI void $_rebuild();

    MCNAPI void $_getVertices(::std::vector<::Scripting::RenderHelper::Vertex>& vertices);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
