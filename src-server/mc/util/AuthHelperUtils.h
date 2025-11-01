#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Services { struct AzureIdentityConfig; }
namespace Crypto::Certificate { class Certificate; }
// clang-format on

namespace AuthHelperUtils {
// functions
// NOLINTBEGIN
MCNAPI ::std::string _createAndSignJWTWithCertificate(::Bedrock::Services::AzureIdentityConfig const& azureConfig, ::Crypto::Certificate::Certificate const& cert);

MCNAPI ::std::unique_ptr<::Crypto::Certificate::Certificate> _loadCertificateFromFile(::std::string const& certName);
// NOLINTEND

}
