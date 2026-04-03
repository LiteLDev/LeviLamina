#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/interface/IResourceHandler.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
class ResourcePackManager;
namespace Core { class FileSystem; }
namespace Core { class Path; }
namespace OreUI { class ResourceResponse; }
namespace OreUI { class ResourceStreamResponse; }
namespace OreUI { class TemporaryTextureHolder; }
namespace OreUI { struct HybridResourceLocation; }
namespace OreUI { struct ResourceRequest; }
namespace cohtml { class ISyncStreamReader; }
// clang-format on

namespace OreUI {

class HybridResourceHandler : public ::OreUI::IResourceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ResourcePackManager const&>                    mPackManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IFileAccess>>      mFileAccess;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Core::FileSystem>> mFileSystem;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>              mDataPath;
    ::ll::TypedStorage<8, 64, ::std::function<::cohtml::ISyncStreamReader*(::IFileAccess&, ::Core::Path)>>
                                                               mSyncStreamReaderFactory;
    ::ll::TypedStorage<8, 8, ::OreUI::TemporaryTextureHolder&> mTemporaryTextureHolder;
    // NOLINTEND

public:
    // prevent constructor by default
    HybridResourceHandler& operator=(HybridResourceHandler const&);
    HybridResourceHandler(HybridResourceHandler const&);
    HybridResourceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HybridResourceHandler() /*override*/;

    virtual ::OreUI::IResourceHandler::Status
    onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response) /*override*/;

    virtual ::OreUI::IResourceHandler::Status onResourceStreamRequest(
        ::OreUI::ResourceRequest const&  request,
        ::OreUI::ResourceStreamResponse& response
    ) /*override*/;

    virtual void update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::OreUI::HybridResourceLocation>
    _getAssetResourceLocationFromResourcePackManager(::OreUI::ResourceRequest const& request) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> PROTOCOL();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::OreUI::IResourceHandler::Status
    $onResourceRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceResponse& response);

    MCAPI ::OreUI::IResourceHandler::Status
    $onResourceStreamRequest(::OreUI::ResourceRequest const& request, ::OreUI::ResourceStreamResponse& response);

    MCFOLD void $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
