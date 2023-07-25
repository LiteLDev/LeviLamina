#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MCE_BLOB
public:
    Blob& operator=(Blob const&) = delete;
    Blob(Blob const&)            = delete;
#endif

public:
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@XZ
     */
    MCAPI Blob();
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@_K\@Z
     */
    MCAPI Blob(unsigned __int64);
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI Blob(class mce::Blob&&);
    /**
     * @symbol ?cbegin\@Blob\@mce\@\@QEBAPEBEXZ
     */
    MCAPI unsigned char const* cbegin() const;
    /**
     * @symbol ?cend\@Blob\@mce\@\@QEBAPEBEXZ
     */
    MCAPI unsigned char const* cend() const;
    /**
     * @symbol ?empty\@Blob\@mce\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @symbol ??4Blob\@mce\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class mce::Blob& operator=(class mce::Blob&&);
    /**
     * @symbol ??1Blob\@mce\@\@QEAA\@XZ
     */
    MCAPI ~Blob();

    // private:
    /**
     * @symbol ?defaultDeleter\@Blob\@mce\@\@CAXPEAE\@Z
     */
    MCAPI static void defaultDeleter(unsigned char*);

private:
};

}; // namespace mce
