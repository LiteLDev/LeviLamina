#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {

public:
    // prevent constructor by default
    Blob& operator=(Blob const&) = delete;
    Blob(Blob const&)            = delete;

public:
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@XZ
     */
    MCAPI Blob(); // NOLINT
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@_K\@Z
     */
    MCAPI Blob(unsigned __int64); // NOLINT
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI Blob(class mce::Blob&&); // NOLINT
    /**
     * @symbol ?cbegin\@Blob\@mce\@\@QEBAPEBEXZ
     */
    MCAPI unsigned char const* cbegin() const; // NOLINT
    /**
     * @symbol ?cend\@Blob\@mce\@\@QEBAPEBEXZ
     */
    MCAPI unsigned char const* cend() const; // NOLINT
    /**
     * @symbol ?empty\@Blob\@mce\@\@QEBA_NXZ
     */
    MCAPI bool empty() const; // NOLINT
    /**
     * @symbol ??4Blob\@mce\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class mce::Blob& operator=(class mce::Blob&&); // NOLINT
    /**
     * @symbol ??1Blob\@mce\@\@QEAA\@XZ
     */
    MCAPI ~Blob(); // NOLINT

    // private:
    /**
     * @symbol ?defaultDeleter\@Blob\@mce\@\@CAXPEAE\@Z
     */
    MCAPI static void defaultDeleter(unsigned char*); // NOLINT

private:
};

}; // namespace mce
