#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AnyAccessStrategyOptions;
struct DirectoryAccessStrategyOptions;
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

    MCNAPI static ::PackAccessStrategies createForEncryptedZip(::EncryptedZipAccessStrategyOptions const& create);

    MCNAPI static ::PackAccessStrategies createForZip(::ZipAccessStrategyOptions const& create);
    // NOLINTEND
};
