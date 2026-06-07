#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/FileChunkManager.h"
#include "mc/util/IFileChunkUploader.h"
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class PacketSender;
struct FileChunkInfo;
struct FileInfo;
namespace Json { class Value; }
// clang-format on

class ServerFileChunkUploader : public ::IFileChunkUploader,
                                public ::std::enable_shared_from_this<::ServerFileChunkUploader> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::PacketSender&>            mPacketSender;
    ::ll::TypedStorage<8, 8, ::NetworkIdentifier const&> mSource;
    ::ll::TypedStorage<1, 1, bool>                       mInitialized;
    ::ll::TypedStorage<8, 32, ::std::string>             mName;
    ::ll::TypedStorage<8, 32, ::std::string>             mFileHash;
    ::ll::TypedStorage<8, 96, ::FileChunkManager>        mChunkManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerFileChunkUploader& operator=(ServerFileChunkUploader const&);
    ServerFileChunkUploader(ServerFileChunkUploader const&);
    ServerFileChunkUploader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerFileChunkUploader() /*override*/;

    virtual void initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
    ) /*override*/;

    virtual void
    getServerMissingChunks(::FileInfo const& file, ::std::function<void(::std::vector<::FileChunkInfo>)> callback) const
        /*override*/;

    virtual void confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&) /*override*/;

    virtual void uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    ) /*override*/;

    virtual bool canCancelUpload(::FileInfo const&) const /*override*/;

    virtual void cancelUpload(::FileInfo const&) /*override*/;

    virtual ::UploadError getInitErrorCode() const /*override*/;

    virtual float getUploadProgress(::FileInfo const&) const /*override*/;

    virtual ::FileChunkInfo getChunkInfo(::FileInfo const& file, int chunkID) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerFileChunkUploader(::PacketSender& packetSender, ::NetworkIdentifier const& source);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PacketSender& packetSender, ::NetworkIdentifier const& source);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $initFileUploader(
        ::std::string const&        uploadId,
        ::FileInfo const&           file,
        int                         chunkSize,
        ::Json::Value const&        uploadOptions,
        ::std::function<void(bool)> callback
    );

    MCAPI void $getServerMissingChunks(
        ::FileInfo const&                                     file,
        ::std::function<void(::std::vector<::FileChunkInfo>)> callback
    ) const;

    MCFOLD void $confirmChunkReceived(::FileInfo const&, ::FileChunkInfo const&);

    MCAPI void $uploadChunk(
        ::FileInfo const&           file,
        ::FileChunkInfo const&      chunk,
        ::std::vector<uchar>        data,
        ::std::function<void(bool)> onCompleteCallback
    );

    MCFOLD bool $canCancelUpload(::FileInfo const&) const;

    MCFOLD void $cancelUpload(::FileInfo const&);

    MCFOLD ::UploadError $getInitErrorCode() const;

    MCFOLD float $getUploadProgress(::FileInfo const&) const;

    MCAPI ::FileChunkInfo $getChunkInfo(::FileInfo const& file, int chunkID) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
