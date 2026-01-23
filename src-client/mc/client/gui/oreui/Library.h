#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
class TaskGroup;
namespace Core { class Path; }
namespace OreUI { struct DebugData; }
namespace OreUI { struct MemoryTracker; }
namespace OreUI { struct ResourceHandlerBroker; }
namespace OreUI { struct TemporaryTextureHolder; }
namespace cohtml { class IAllocator; }
namespace cohtml { class IFileSystemReader; }
namespace cohtml { class IVirtualAllocator; }
namespace cohtml { struct PlatformSpecificParams; }
namespace cohtml::Logging { class ILogHandler; }
namespace mce { class RenderContext; }
namespace mce { struct ShaderGroup; }
// clang-format on

namespace OreUI {

class Library {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnka8234b;
    ::ll::UntypedStorage<8, 8>   mUnk649e30;
    ::ll::UntypedStorage<8, 8>   mUnk985412;
    ::ll::UntypedStorage<8, 8>   mUnk968968;
    ::ll::UntypedStorage<8, 8>   mUnka8f6df;
    ::ll::UntypedStorage<8, 8>   mUnk476135;
    ::ll::UntypedStorage<8, 8>   mUnk68299f;
    ::ll::UntypedStorage<8, 8>   mUnk1a7462;
    ::ll::UntypedStorage<8, 8>   mUnk31fa7b;
    ::ll::UntypedStorage<8, 8>   mUnk5886ab;
    ::ll::UntypedStorage<8, 8>   mUnk605dd3;
    ::ll::UntypedStorage<8, 8>   mUnk3bc6b8;
    ::ll::UntypedStorage<8, 8>   mUnke58392;
    ::ll::UntypedStorage<8, 8>   mUnk1b9e17;
    ::ll::UntypedStorage<8, 8>   mUnka98490;
    ::ll::UntypedStorage<8, 8>   mUnk622941;
    ::ll::UntypedStorage<8, 8>   mUnk955deb;
    ::ll::UntypedStorage<1, 1>   mUnk7b1fc6;
    ::ll::UntypedStorage<1, 1>   mUnkf3fca3;
    ::ll::UntypedStorage<1, 1>   mUnk5a7937;
    ::ll::UntypedStorage<8, 16>  mUnkb73c50;
    ::ll::UntypedStorage<8, 104> mUnkc82d70;
    // NOLINTEND

public:
    // prevent constructor by default
    Library& operator=(Library const&);
    Library(Library const&);
    Library();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Library(
        ::cohtml::PlatformSpecificParams const&           platformParams,
        ::std::unique_ptr<::cohtml::IAllocator>           allocator,
        ::std::unique_ptr<::cohtml::IFileSystemReader>    fileSystemReader,
        ::Core::Path const&                               packagePath,
        ::std::unique_ptr<::OreUI::ResourceHandlerBroker> resourceHandler,
        ::std::unique_ptr<::cohtml::Logging::ILogHandler> logHandler,
        ::OreUI::MemoryTracker&                           memoryTracker,
        ::OreUI::TemporaryTextureHolder&                  temporaryTextureHolder,
        ::ResourcePackManager const&                      packManager,
        ::OreUI::DebugData&                               debugData
    );

    MCAPI void _initializeSystem(::cohtml::PlatformSpecificParams const& platformParams);

    MCAPI void _loadFonts(::Core::Path const& packagePath);

    MCAPI void _loadICUData(::TaskGroup& taskGroup, ::Core::Path const& packagePath);

    MCAPI void initializeRendering(
        ::Bedrock::NonOwnerPointer<::mce::ShaderGroup> shaderGroup,
        ::mce::RenderContext&                          renderContext
    );

    MCAPI ~Library();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::cohtml::IVirtualAllocator>& mVirtualAllocator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::cohtml::PlatformSpecificParams const&           platformParams,
        ::std::unique_ptr<::cohtml::IAllocator>           allocator,
        ::std::unique_ptr<::cohtml::IFileSystemReader>    fileSystemReader,
        ::Core::Path const&                               packagePath,
        ::std::unique_ptr<::OreUI::ResourceHandlerBroker> resourceHandler,
        ::std::unique_ptr<::cohtml::Logging::ILogHandler> logHandler,
        ::OreUI::MemoryTracker&                           memoryTracker,
        ::OreUI::TemporaryTextureHolder&                  temporaryTextureHolder,
        ::ResourcePackManager const&                      packManager,
        ::OreUI::DebugData&                               debugData
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
