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
    // vIndex: 4
    virtual ~LineListPrimitive() /*override*/ = default;

    // vIndex: 0
    virtual ::Scripting::RenderHelper::PrimitiveType getType() const /*override*/;

    // vIndex: 1
    virtual ::Vec3 const& getPosition() const /*override*/;

    // vIndex: 3
    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const /*override*/;

    // vIndex: 5
    virtual void _rebuild() /*override*/;

    // vIndex: 6
    virtual void _getVertices(::std::vector<::Scripting::RenderHelper::Vertex>&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Scripting::RenderHelper
