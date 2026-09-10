#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { struct MinimapMarkerData; }
class IClientInstance;
namespace Gameface { class IResourceHandler; }
namespace OreUI { struct RegisterResourceHandlersArguments; }
// clang-format on

namespace Editor::Services {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::function<
    ::std::unique_ptr<::Gameface::IResourceHandler>(::OreUI::RegisterResourceHandlersArguments const&)>
createEditorClientMinimapResourceHandlerFactory(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> primaryClient);
#endif

MCNAPI bool operator==(::Editor::Services::MinimapMarkerData const&, ::Editor::Services::MinimapMarkerData const&);
// NOLINTEND

} // namespace Editor::Services
