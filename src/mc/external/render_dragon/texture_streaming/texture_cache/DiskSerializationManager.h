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
        ::ll::UntypedStorage<1, 1> mUnk118e2f;
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
        ::ll::UntypedStorage<4, 28> mUnk518291;
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
    ::ll::UntypedStorage<4, 4>  mUnk728b5e;
    ::ll::UntypedStorage<8, 8>  mUnk4785f4;
    ::ll::UntypedStorage<8, 8>  mUnkaadcc4;
    ::ll::UntypedStorage<8, 8>  mUnkbeac70;
    ::ll::UntypedStorage<8, 8>  mUnk6f3dc7;
    ::ll::UntypedStorage<8, 16> mUnk80fa2a;
    ::ll::UntypedStorage<8, 32> mUnkf6cc58;
    ::ll::UntypedStorage<4, 4>  mUnk2fbab8;
    ::ll::UntypedStorage<4, 4>  mUnkb5f0c0;
    ::ll::UntypedStorage<4, 4>  mUnk956413;
    ::ll::UntypedStorage<4, 4>  mUnkb6b525;
    ::ll::UntypedStorage<4, 4>  mUnkedaf8b;
    ::ll::UntypedStorage<4, 4>  mUnk38964a;
    ::ll::UntypedStorage<8, 64> mUnk204e8e;
    ::ll::UntypedStorage<8, 24> mUnk70e84f;
    ::ll::UntypedStorage<4, 4>  mUnk86bb66;
    ::ll::UntypedStorage<8, 24> mUnk3c65b3;
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
#ifdef LL_PLAT_C
    MCNAPI DiskSerializationManager(
        ::std::string fileLocation,
        uint          blockSize,
        uint          maxSize,
        uint          maxMipSize,
        bool          forceRestartCache
    );

    MCNAPI ::std::optional<::std::vector<uint>> _claimFirstFreeBlocks(uint numberOfBlocks);

    MCNAPI ::std::vector<::cg::ImageBuffer> _getMipChainForImageMetadata(
        ::dragon::texturestreaming::DiskSerializationManager::ImageMetadata const& imageMetadata
    );

    MCNAPI void _initializeFreeBlockList();

    MCNAPI void _initializeResidencyTable();

    MCNAPI bool _isHeaderSame();

    MCNAPI ::std::optional<::dragon::texturestreaming::DiskSerializationManager::ImageMetadata>
    _isImageResident(uint64 const& key);

    MCNAPI uint64 _read(void* buffer, uint64& position, uint64 size);

    MCNAPI ::std::optional<::std::vector<::cg::ImageBuffer>>
    _readImageAt(::dragon::texturestreaming::DiskSerializationManager::ImageMetadata const& imageMetadata);

    MCNAPI void _write(void const* buffer, uint64& position, uint64 size);

    MCNAPI void _writeMipChainToDisk(
        ::std::vector<::cg::ImageBuffer> const& mipChain,
        ::std::vector<uint> const&              addresses,
        uchar                                   firstSerializedMipOffset
    );

    MCNAPI bool _writeMipChainToResidencyTable(
        uint64 const&                           key,
        ::std::vector<::cg::ImageBuffer> const& mipChain,
        ::std::vector<uint> const&              addresses,
        uchar                                   startingMipInChain,
        uchar                                   firstSerializedMipOffset
    );

    MCNAPI void _writeNewFile();

    MCNAPI ::std::optional<::std::pair<::std::vector<::cg::ImageBuffer>, uchar>> deserialize(uint64 const& imageKey);

    MCNAPI void flush();

    MCNAPI ::std::vector<::std::pair<uint64, ::std::string>> getSerializationDebugEntries() const;

    MCNAPI void
    serialize(uint64 const& imageHash, ::std::vector<::cg::ImageBuffer> const& mipChain, uchar startingMipInChain);

    MCNAPI ~DiskSerializationManager();
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::array<uint, 256> const& mCrcTable();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void*
    $ctor(::std::string fileLocation, uint blockSize, uint maxSize, uint maxMipSize, bool forceRestartCache);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace dragon::texturestreaming
