#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AnyAccessStrategyOptions;
struct DirectoryAccessStrategyOptions;
struct EncryptedAccessStrategyOptions;
struct EncryptedZipAccessStrategyOptions;
struct PackAccessStrategies;
struct ZipAccessStrategyOptions;
// clang-format on

class PackAccessStrategyFactory {
public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::PackAccessStrategies create(::AnyAccessStrategyOptions const& create);
#endif

    MCNAPI static ::PackAccessStrategies createForDirectory(::DirectoryAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForEncrypted(::EncryptedAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForEncryptedZip(::EncryptedZipAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForZip(::ZipAccessStrategyOptions const& create);
    // NOLINTEND
};
