#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ResourceHandlerBroker; }
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { struct DebugData; }
// clang-format on

namespace OreUI {

struct LibraryFactoryArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::Path>                                           mPackagePath;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::ResourceHandlerBroker>>    mResourceHandlerBroker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ILiveViewCollectionConsumer>> mLiveViewConsumer;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                     mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData&>                                     mDebugData;
    // NOLINTEND

public:
    // prevent constructor by default
    LibraryFactoryArguments& operator=(LibraryFactoryArguments const&);
    LibraryFactoryArguments(LibraryFactoryArguments const&);
    LibraryFactoryArguments();
};

} // namespace OreUI
