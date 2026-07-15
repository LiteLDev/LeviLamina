#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/views/FramesToPaintQueue.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Core { class Path; }
namespace Gameface { class ResourceHandlerBroker; }
namespace Gameface { class TemporaryTextureHolder; }
namespace OreUI { class ILiveViewCollectionConsumer; }
namespace OreUI { class IRenderingBackend; }
namespace OreUI { class InternationalizationManager; }
namespace OreUI { class LayoutScheduler; }
namespace OreUI { class ViewsCoordinator; }
namespace OreUI { struct DebugData; }
namespace cohtml { class IAllocator; }
namespace cohtml { class IFileSystemReader; }
namespace cohtml { class ITimeZoneProvider; }
namespace cohtml { class Library; }
namespace cohtml { class System; }
namespace cohtml { class SystemRenderer; }
namespace cohtml::Logging { class ILogHandler; }
namespace cohtml::Profile { class IPerformanceHandler; }
namespace mce { class RenderContext; }
namespace mce { class ShaderGroup; }
// clang-format on

namespace OreUI {

class Library {
public:
    // Library inner types declare
    // clang-format off
    struct Impl;
    // clang-format on

    // Library inner types define
    struct Impl {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 104, ::OreUI::FramesToPaintQueue> mFramesToPaint;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::Library::Impl>>> mImpl;
    ::ll::TypedStorage<8, 8, ::cohtml::System*>                                          mSystem;
    ::ll::TypedStorage<8, 8, ::cohtml::SystemRenderer*>                                  mSystemRenderer;
    ::ll::TypedStorage<8, 8, ::cohtml::Library*>                                         mLibrary;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::IAllocator>>                    mAllocator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::IFileSystemReader>>             mFileSystemReader;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Gameface::ResourceHandlerBroker>>       mResourceHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::InternationalizationManager>>    mInternationalizationManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::IRenderingBackend>>              mRenderingBackend;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::Logging::ILogHandler>>          mLogHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::Profile::IPerformanceHandler>>  mPerformanceHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::cohtml::ITimeZoneProvider>>             mTimeZoneProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::LayoutScheduler>>                mLayoutScheduler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::OreUI::ViewsCoordinator>>               mViews;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&>                        mTemporaryTextureHolder;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::OreUI::ILiveViewCollectionConsumer>>>
                                                            mLiveViewConsumer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mRegisteredFonts;
    ::ll::TypedStorage<1, 1, bool>                          mDoCompleteUninitialization;
    ::ll::TypedStorage<1, 1, bool>                          mSuspended;
    ::ll::TypedStorage<1, 1, bool>                          mICUDataInitialized;
    ::ll::TypedStorage<8, 16, ::std::thread>                mResourceThread;
    ::ll::TypedStorage<8, 8, ::OreUI::DebugData&>           mDebugData;
    // NOLINTEND

public:
    // prevent constructor by default
    Library& operator=(Library const&);
    Library(Library const&);
    Library();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _loadICUData(::TaskGroup& taskGroup, ::Core::Path const& packagePath);

    MCAPI void initializeRendering(
        ::Bedrock::NonOwnerPointer<::mce::ShaderGroup> shaderGroup,
        ::mce::RenderContext&                          renderContext
    );

    MCAPI void initializeViewsCoordinator(::std::function<void(::std::string_view)> showDebugToast);

    MCAPI void update(double time);
    // NOLINTEND
};

} // namespace OreUI
