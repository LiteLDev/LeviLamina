#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DirectoryPackWriteStrategy;
class ResourceLocation;
struct AnyAccessStrategyOptions;
struct DirectoryAccessStrategyOptions;
struct DirectoryWihEncryptedBlobAccessStrategyOptions;
struct EncryptedAccessStrategyOptions;
struct EncryptedZipAccessStrategyOptions;
struct PackAccessStrategies;
struct ZipAccessStrategyOptions;
// clang-format on

class PackAccessStrategyFactory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PackAccessStrategies create(::AnyAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForDirectory(::DirectoryAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies
    createForDirectoryWithEncryptedBlob(::DirectoryWihEncryptedBlobAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForEncrypted(::EncryptedAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForEncryptedZip(::EncryptedZipAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForZip(::ZipAccessStrategyOptions const& create);

    MCNAPI static ::std::unique_ptr<::DirectoryPackWriteStrategy>
    tryCreateDirectoryPackWriteStrategy(::ResourceLocation const& location);
    // NOLINTEND
};
