#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct StreamableAssetSource {
public:
    // StreamableAssetSource inner types declare
    // clang-format off
    struct FileSource;
    struct ZipExtractSource;
    // clang-format on

    // StreamableAssetSource inner types define
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
    ::ll::UntypedStorage<8, 2080> mUnkbdfd36;
    // NOLINTEND

public:
    // prevent constructor by default
    StreamableAssetSource& operator=(StreamableAssetSource const&);
    StreamableAssetSource(StreamableAssetSource const&);
    StreamableAssetSource();
};
