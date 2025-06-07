#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitivePosition.h"
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
namespace Scripting::RenderHelper { struct Vertex; }
// clang-format on

namespace Scripting::RenderHelper {

class TextPrimitive : public ::Scripting::RenderHelper::BasePrimitivePosition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9d46f6;
    ::ll::UntypedStorage<4, 16> mUnkfbd9b3;
    // NOLINTEND

public:
    // prevent constructor by default
    TextPrimitive& operator=(TextPrimitive const&);
    TextPrimitive(TextPrimitive const&);
    TextPrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ~TextPrimitive() /*override*/ = default;

    // vIndex: 0
    virtual ::Scripting::RenderHelper::PrimitiveType getType() const /*override*/;

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
