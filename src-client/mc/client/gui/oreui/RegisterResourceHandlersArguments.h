#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class ILiveViewCollectionPublisher; }
// clang-format on

namespace OreUI {

struct RegisterResourceHandlersArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Path>                                             mPackagePath;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                       mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::ILiveViewCollectionPublisher>> mLiveViewPublisher;
    ::ll::TypedStorage<8, 64, ::std::function<void()>>                                  mReloadAllViews;
    // NOLINTEND

public:
    // prevent constructor by default
    RegisterResourceHandlersArguments& operator=(RegisterResourceHandlersArguments const&);
    RegisterResourceHandlersArguments(RegisterResourceHandlersArguments const&);
    RegisterResourceHandlersArguments();
};

} // namespace OreUI
