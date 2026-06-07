#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
namespace GeometryAtlas { class IGeometryAtlas; }
namespace GeometryAtlas { class IItemHandle; }
namespace GeometryAtlas { class IRenderContext; }
namespace GeometryAtlas { struct ItemHandleData; }
namespace GeometryAtlas { struct RenderContextArgs; }
namespace OreUI { class IItemHandleFactory; }
// clang-format on

namespace GeometryAtlas {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::GeometryAtlas::IGeometryAtlas> createGeometryAtlas();

MCAPI ::std::unique_ptr<::GeometryAtlas::IItemHandle> createItemHandle(::GeometryAtlas::ItemHandleData&& data);

MCAPI ::std::unique_ptr<::OreUI::IItemHandleFactory> createItemHandleFactory();

MCFOLD void
visitRenderContext(::GeometryAtlas::RenderContextArgs&&, ::brstd::function_ref<void(::GeometryAtlas::IRenderContext&)>);
// NOLINTEND

} // namespace GeometryAtlas
