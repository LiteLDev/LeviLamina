#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionRequest {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CODEBUILDER_ENCRYPTIONREQUEST
public:
    EncryptionRequest& operator=(EncryptionRequest const&) = delete;
    EncryptionRequest(EncryptionRequest const&)            = delete;
    EncryptionRequest()                                    = delete;
#endif

public:
    /**
     * @symbol ??1EncryptionRequest\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~EncryptionRequest();
};

}; // namespace CodeBuilder
