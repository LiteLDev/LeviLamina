#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/http/FileRequestBody.h"
#include "mc/deps/core/http/IRequestBody.h"
#include "mc/util/IFileChunkUploader.h"
#include "mc/util/UploadError.h"

// auto generated forward declare list
// clang-format off
struct FileInfo;
namespace Json { class Value; }
// clang-format on

class RealmsFileUploader : public ::IFileChunkUploader, public ::std::enable_shared_from_this<::RealmsFileUploader> {
public:
    // RealmsFileUploader inner types declare
    // clang-format off
    struct RealmUploadInfo;
    struct UploadResult;
    // clang-format on

    // RealmsFileUploader inner types define
    struct UploadResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk89a989;
        ::ll::UntypedStorage<8, 32> mUnk5c0821;
        ::ll::UntypedStorage<8, 32> mUnkfb00d5;
        ::ll::UntypedStorage<8, 32> mUnke86e88;
        ::ll::UntypedStorage<8, 32> mUnk17f07e;
        ::ll::UntypedStorage<8, 32> mUnkacedfc;
        // NOLINTEND

    public:
        // prevent constructor by default
        UploadResult& operator=(UploadResult const&);
        UploadResult(UploadResult const&);
        UploadResult();
    };

    struct RealmUploadInfo : public ::Bedrock::Http::FileRequestBody {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 72> mUnk838c61;
        ::ll::UntypedStorage<8, 32> mUnk38c0e3;
        ::ll::UntypedStorage<8, 32> mUnkad4154;
        ::ll::UntypedStorage<8, 32> mUnkbe2223;
        ::ll::UntypedStorage<4, 4>  mUnkdadd82;
        ::ll::UntypedStorage<4, 4>  mUnk219b92;
        ::ll::UntypedStorage<8, 32> mUnk9de9cc;
        ::ll::UntypedStorage<4, 4>  mUnka1919d;
        ::ll::UntypedStorage<1, 1>  mUnk47e1cc;
        ::ll::UntypedStorage<8, 16> mUnkdcc49f;
        // NOLINTEND

    public:
        // prevent constructor by default
        RealmUploadInfo& operator=(RealmUploadInfo const&);
        RealmUploadInfo(RealmUploadInfo const&);
        RealmUploadInfo();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 1
        virtual ::Bedrock::Http::Internal::IRequestBody::ReadResult read(::gsl::span<uchar>) /*override*/;

        // vIndex: 0
        virtual ~RealmUploadInfo() /*override*/ = default;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk36886a;
    ::ll::UntypedStorage<8, 64>  mUnk9e9975;
    ::ll::UntypedStorage<8, 616> mUnk8b7cbb;
    ::ll::UntypedStorage<1, 1>   mUnkbaeb62;
    ::ll::UntypedStorage<4, 4>   mUnk4ea9b4;
    ::ll::UntypedStorage<8, 16>  mUnk7d1ae7;
    ::ll::UntypedStorage<1, 1>   mUnkded2cc;
    ::ll::UntypedStorage<8, 336> mUnkbe7ca4;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsFileUploader& operator=(RealmsFileUploader const&);
    RealmsFileUploader(RealmsFileUploader const&);
    RealmsFileUploader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RealmsFileUploader() /*override*/ = default;

    // vIndex: 1
    virtual void initFileUploader(
        ::std::string const&,
        ::FileInfo const&,
        int,
        ::Json::Value const&,
        ::std::function<void(bool)>
    ) /*override*/;

    // vIndex: 5
    virtual void uploadStream(
        ::FileInfo const&                                               file,
        uint64                                                          streamSize,
        ::std::string const&                                            boundary,
        ::std::function<void(::IFileChunkUploader::UploadStreamResult)> onCompleteCallback
    ) /*override*/;

    // vIndex: 6
    virtual bool canCancelUpload(::FileInfo const&) const /*override*/;

    // vIndex: 7
    virtual void cancelUpload(::FileInfo const&) /*override*/;

    // vIndex: 8
    virtual ::UploadError getInitErrorCode() const /*override*/;

    // vIndex: 9
    virtual float getUploadProgress(::FileInfo const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
