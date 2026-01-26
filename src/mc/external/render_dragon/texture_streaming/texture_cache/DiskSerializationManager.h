#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

namespace dragon::texturestreaming {

struct DiskSerializationManager {
public:
    // DiskSerializationManager inner types declare
    // clang-format off
    struct ImageTime;
    struct ImageMetadata;
    struct ImageResidentEntry;
    // clang-format on

    // DiskSerializationManager inner types define
    struct ImageTime {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk42ee8e;
        ::ll::UntypedStorage<1, 1> mUnka0a3e7;
        ::ll::UntypedStorage<1, 1> mUnk17bc9d;
        ::ll::UntypedStorage<1, 1> mUnk422922;
        ::ll::UntypedStorage<1, 1> mUnk320f59;
        ::ll::UntypedStorage<1, 1> mUnka1f33e;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageTime& operator=(ImageTime const&);
        ImageTime(ImageTime const&);
        ImageTime();
    };

    struct ImageMetadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnk7371af;
        ::ll::UntypedStorage<2, 2> mUnk1bd2ca;
        ::ll::UntypedStorage<4, 4> mUnk4d7832;
        ::ll::UntypedStorage<2, 8> mUnk7fc0b4;
        ::ll::UntypedStorage<4, 4> mUnkaf15d7;
        ::ll::UntypedStorage<1, 1> mUnk24fa3a;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageMetadata& operator=(ImageMetadata const&);
        ImageMetadata(ImageMetadata const&);
        ImageMetadata();
    };

    struct ImageResidentEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnkfae648;
        ::ll::UntypedStorage<4, 24> mUnk518291;
        ::ll::UntypedStorage<1, 1>  mUnkcf4c60;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageResidentEntry& operator=(ImageResidentEntry const&);
        ImageResidentEntry(ImageResidentEntry const&);
        ImageResidentEntry();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk80fa2a;
    ::ll::UntypedStorage<8, 32> mUnk30b091;
    ::ll::UntypedStorage<1, 1>  mUnk31adca;
    ::ll::UntypedStorage<4, 4>  mUnk2fbab8;
    ::ll::UntypedStorage<4, 4>  mUnkb5f0c0;
    ::ll::UntypedStorage<4, 4>  mUnkb40f82;
    ::ll::UntypedStorage<4, 4>  mUnkd2a5a9;
    ::ll::UntypedStorage<4, 4>  mUnk38964a;
    ::ll::UntypedStorage<8, 64> mUnk204e8e;
    ::ll::UntypedStorage<8, 24> mUnkeacdea;
    ::ll::UntypedStorage<4, 4>  mUnk86bb66;
    ::ll::UntypedStorage<8, 24> mUnk86ec16;
    ::ll::UntypedStorage<4, 4>  mUnkfedc25;
    // NOLINTEND

public:
    // prevent constructor by default
    DiskSerializationManager& operator=(DiskSerializationManager const&);
    DiskSerializationManager(DiskSerializationManager const&);
    DiskSerializationManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::std::optional<uint> _claimFirstAvailableSpotInResidencyTable();

    MCNAPI_C ::std::optional<uint> _claimFirstFreeBlock();

    MCNAPI_C ::std::optional<::std::vector<uint>> _claimFirstFreeBlocks(uint numberOfBlocks);

    MCNAPI_C ::std::vector<::cg::ImageBuffer> _getMipChainForImageMetadata(
        ::dragon::texturestreaming::DiskSerializationManager::ImageMetadata const& imageMetadata
    );

    MCNAPI_C void _initializeFreeBlockList();

    MCNAPI_C void _initializeResidencyTable();

    MCNAPI_C bool _isHeaderSame();

    MCNAPI_C ::std::optional<::dragon::texturestreaming::DiskSerializationManager::ImageMetadata>
    _isImageResident(uint64 const& key);

    MCNAPI_C ::std::optional<::std::vector<::cg::ImageBuffer>>
    _readImageAt(::dragon::texturestreaming::DiskSerializationManager::ImageMetadata const& imageMetadata);

    MCNAPI_C void
    _writeMipChainToDisk(::std::vector<::cg::ImageBuffer> const& mipChain, ::std::vector<uint> const& addresses);

    MCNAPI_C bool _writeMipChainToResidencyTable(
        uint64 const&                           key,
        ::std::vector<::cg::ImageBuffer> const& mipChain,
        ::std::vector<uint> const&              addresses
    );

    MCNAPI_C void _writeNewFile();

    MCNAPI_C void flush();

    MCNAPI_C void serialize(uint64 const& imageHash, ::std::vector<::cg::ImageBuffer> const& mipChain);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::array<uint, 256> const& mCrcTable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::string fileLocation, uint blockSize, uint numberOfBlocks, bool forceRestartCache);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace dragon::texturestreaming
