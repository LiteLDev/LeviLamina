#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/editor/services/render_helper/BasePrimitive.h"
#include "mc/editor/services/render_helper/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Editor::RenderHelper { struct Vertex; }
// clang-format on

namespace Editor::RenderHelper {

class LineListPrimitive : public ::Editor::RenderHelper::BasePrimitive {
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
        ::ll::UntypedStorage<4, 12> mUnkc0f201;
        ::ll::UntypedStorage<4, 12> mUnkab3991;
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
        ::ll::UntypedStorage<4, 12> mUnk138440;
        ::ll::UntypedStorage<4, 12> mUnkae3dbb;
        ::ll::UntypedStorage<4, 16> mUnkc67475;
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
    ::ll::UntypedStorage<8, 24> mUnk64b4c3;
    ::ll::UntypedStorage<4, 24> mUnk340709;
    ::ll::UntypedStorage<4, 12> mUnkc30326;
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
    virtual ::Editor::RenderHelper::PrimitiveType getType() const /*override*/;

    // vIndex: 1
    virtual ::Vec3 const& getPosition() const /*override*/;

    // vIndex: 3
    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const /*override*/;

    // vIndex: 5
    virtual void _rebuild() /*override*/;

    // vIndex: 6
    virtual void _getVertices(::std::vector<::Editor::RenderHelper::Vertex>&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::RenderHelper
