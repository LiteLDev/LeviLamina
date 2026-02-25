#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/views/FramesToPaintQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ResourcePackManager;
class TaskGroup;
namespace Core { class Path; }
namespace OreUI { class IRenderingBackend; }
namespace OreUI { class InternationalizationManager; }
namespace OreUI { class LayoutScheduler; }
namespace OreUI { class MemoryTracker; }
namespace OreUI { class ResourceHandlerBroker; }
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { class ViewsCoordinator; }
namespace OreUI { struct DebugData; }
namespace cohtml { class IAllocator; }
namespace cohtml { class IFileSystemReader; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class IVirtualAllocator; }
namespace cohtml { class Library; }
namespace cohtml { class System; }
namespace cohtml { class SystemRenderer; }
namespace cohtml { struct PlatformSpecificParams; }
namespace cohtml::Logging { class ILogHandler; }
namespace cohtml::Profile { class IPerformanceHandler; }
namespace mce { class RenderContext; }
namespace mce { struct ShaderGroup; }
// clang-format on

namespace OreUI {

class Library {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::System*>                                         mSystem;
    ::ll::TypedStorage<8, 8, ::cohtml::SystemRenderer*>                                 mSystemRenderer;
    ::ll::TypedStorage<8, 8, ::cohtml::Library*>                                        mLibrary;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::IAllocator>>                   mAllocator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::IFileSystemReader>>            mFileSystemReader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ResourceHandlerBroker>>         mResourceHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::InternationalizationManager>>   mInternationalizationManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IRenderingBackend>>             mRenderingBackend;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::Logging::ILogHandler>>         mLogHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::Profile::IPerformanceHandler>> mPerformanceHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::ITimeZoneProvider>>            mTimeZoneProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LayoutScheduler>>               mLayoutScheduler;
    ::ll::TypedStorage<8, 8, ::OreUI::MemoryTracker&>                                   mMemoryTracker;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewsCoordinator>>              mViews;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&>                          mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                              mPackManager;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData&>                                       mDebugData;
    ::ll::TypedStorage<1, 1, bool>                                                      mDoCompleteUninitialization;
    ::ll::TypedStorage<1, 1, bool>                                                      mSuspended;
    ::ll::TypedStorage<1, 1, bool>                                                      mICUDataInitialized;
    ::ll::TypedStorage<8, 16, ::std::thread>                                            mResourceThread;
    ::ll::TypedStorage<8, 104, ::OreUI::FramesToPaintQueue>                             mFramesToPaint;
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
