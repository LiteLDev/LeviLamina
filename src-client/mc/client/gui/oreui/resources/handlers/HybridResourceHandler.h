#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/client/gui/oreui/interface/ResourceHandlerStatus.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace Gameface { class ISyncStreamReader; }
namespace Gameface { class ResourceResponse; }
namespace Gameface { class ResourceStreamResponse; }
namespace Gameface { class TemporaryTextureHolder; }
namespace Gameface { struct ResourceRequest; }
// clang-format on

namespace OreUI {

class HybridResourceHandler : public ::Gameface::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                    mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>      mFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>> mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mDataPath;
    ::ll::TypedStorage<8, 64, ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)>>
                                                                  mSyncStreamReaderFactory;
    ::ll::TypedStorage<8, 8, ::Gameface::TemporaryTextureHolder&> mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    HybridResourceHandler& operator=(HybridResourceHandler const&);
    HybridResourceHandler(HybridResourceHandler const&);
    HybridResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HybridResourceHandler() /*override*/ = default;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceResponse&) /*override*/;

    virtual ::Gameface::ResourceHandlerStatus
    onResourceStreamRequest(::Gameface::ResourceRequest const&, ::Gameface::ResourceStreamResponse&) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HybridResourceHandler(
        ::ResourcePackManager const&                                                         packManager,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::Core::Path const&                                                                  dataPath,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory,
        ::Gameface::TemporaryTextureHolder&                                                  temporaryTextureHolder
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ResourcePackManager const&                                                         packManager,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&                             fileSystem,
        ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> const&                                  fileAccess,
        ::Core::Path const&                                                                  dataPath,
        ::std::function<::Gameface::ISyncStreamReader*(::IFileAccess&, ::Core::Path)> const& syncStreamReaderFactory,
        ::Gameface::TemporaryTextureHolder&                                                  temporaryTextureHolder
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
