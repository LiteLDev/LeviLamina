#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StreamableAssetSource {
public:
    // StreamableAssetSource inner types declare
    // clang-format off
    struct EncryptedFileSource;
    struct EncryptedZipExtractSource;
    struct FileSource;
    struct ZipExtractSource;
    // clang-format on

    // StreamableAssetSource inner types define
    struct EncryptedFileSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mUnkcec3cf;
        ::ll::UntypedStorage<8, 32>   mUnke80587;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncryptedFileSource& operator=(EncryptedFileSource const&);
        EncryptedFileSource(EncryptedFileSource const&);
        EncryptedFileSource();
    };

    struct EncryptedZipExtractSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>    mUnk8f08b7;
        ::ll::UntypedStorage<8, 1032> mUnkf1bd8c;
        ::ll::UntypedStorage<8, 1032> mUnkad7aed;
        ::ll::UntypedStorage<8, 32>   mUnk1a01c7;
        // NOLINTEND

    public:
        // prevent constructor by default
        EncryptedZipExtractSource& operator=(EncryptedZipExtractSource const&);
        EncryptedZipExtractSource(EncryptedZipExtractSource const&);
        EncryptedZipExtractSource();
    };

    struct FileSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 1032> mUnkf8f530;
        // NOLINTEND

    public:
        // prevent constructor by default
        FileSource& operator=(FileSource const&);
        FileSource(FileSource const&);
        FileSource();
    };

    struct ZipExtractSource {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>    mUnkc5b638;
        ::ll::UntypedStorage<8, 1032> mUnkebc8ac;
        ::ll::UntypedStorage<8, 1032> mUnkc67195;
        // NOLINTEND

    public:
        // prevent constructor by default
        ZipExtractSource& operator=(ZipExtractSource const&);
        ZipExtractSource(ZipExtractSource const&);
        ZipExtractSource();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 2112> mUnka0154c;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamableAssetSource& operator=(StreamableAssetSource const&);
    StreamableAssetSource(StreamableAssetSource const&);
    StreamableAssetSource();
};
