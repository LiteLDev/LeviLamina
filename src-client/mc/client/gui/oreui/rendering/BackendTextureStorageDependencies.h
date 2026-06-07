#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class IRenderingBackendTextureService; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface::RenderUtils { struct BackendRenderConfig; }
// clang-format on

namespace Gameface {

struct BackendTextureStorageDependencies {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                             mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::IRenderingBackendTextureService>&> mTextureService;
    ::ll::TypedStorage<8, 8, ::Gameface::RenderUtils::BackendRenderConfig&&>                  mConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    BackendTextureStorageDependencies& operator=(BackendTextureStorageDependencies const&);
    BackendTextureStorageDependencies(BackendTextureStorageDependencies const&);
    BackendTextureStorageDependencies();
};

} // namespace Gameface
