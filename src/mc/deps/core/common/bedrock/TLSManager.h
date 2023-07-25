#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading::CustomTLS {

class TLSManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_CUSTOMTLS_TLSMANAGER
public:
    TLSManager& operator=(TLSManager const&) = delete;
    TLSManager(TLSManager const&)            = delete;
    TLSManager()                             = delete;
#endif

public:
    /**
     * @symbol ?getSharedInstance\@TLSManager\@CustomTLS\@Threading\@Bedrock\@\@SAAEAV1234\@XZ
     */
    MCAPI static class Bedrock::Threading::CustomTLS::TLSManager& getSharedInstance();
};

}; // namespace Bedrock::Threading::CustomTLS
