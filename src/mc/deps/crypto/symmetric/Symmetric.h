#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Crypto::Symmetric { enum class OperationMode; }
namespace Crypto::Symmetric { enum class System; }
// clang-format on

namespace Crypto::Symmetric {

class Symmetric {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CRYPTO_SYMMETRIC_SYMMETRIC
public:
    Symmetric& operator=(Symmetric const&) = delete;
    Symmetric(Symmetric const&)            = delete;
    Symmetric()                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?init\@Symmetric\@1Crypto\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    virtual void init(std::string const&, std::string const&);
    /**
     * @vftbl 2
     * @symbol
     * ?encrypt\@Symmetric\@1Crypto\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV34\@\@Z
     */
    virtual void encrypt(std::string const&, std::string&);
    /**
     * @vftbl 3
     * @symbol
     * ?decrypt\@Symmetric\@1Crypto\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV34\@\@Z
     */
    virtual void decrypt(std::string const&, std::string&);
    /**
     * @vftbl 4
     * @symbol ?getKeySize\@Symmetric\@1Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getKeySize() const;
    /**
     * @vftbl 5
     * @symbol ?getBlockSize\@Symmetric\@1Crypto\@\@UEBA_KXZ
     */
    virtual unsigned __int64 getBlockSize() const;
    /**
     * @vftbl 6
     * @symbol ?getEncryptionBufferSize\@Symmetric\@1Crypto\@\@UEBA_K_K\@Z
     */
    virtual unsigned __int64 getEncryptionBufferSize(unsigned __int64) const;
    /**
     * @vftbl 7
     * @symbol ?encryptToBuffer\@Symmetric\@1Crypto\@\@UEAA_NV?$span\@$$CBD$0?0\@gsl\@\@V?$span\@D$0?0\@4\@AEA_K\@Z
     */
    virtual bool encryptToBuffer(class gsl::span<char const, -1>, class gsl::span<char, -1>, unsigned __int64&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_CRYPTO_SYMMETRIC_SYMMETRIC
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~Symmetric();
#endif
    /**
     * @symbol ??0Symmetric\@0Crypto\@\@QEAA\@W4System\@01\@W4OperationMode\@01\@\@Z
     */
    MCAPI Symmetric(enum class Crypto::Symmetric::System, enum class Crypto::Symmetric::OperationMode);
};

}; // namespace Crypto::Symmetric
