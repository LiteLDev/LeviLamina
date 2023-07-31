#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {

public:
    // prevent constructor by default
    Blob& operator=(Blob const&) = delete;
    Blob(Blob const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@XZ
     */
    MCAPI Blob();
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@_K\@Z
     */
    MCAPI Blob(uint64_t);
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
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?defaultDeleter\@Blob\@mce\@\@CAXPEAE\@Z
     */
    MCAPI static void defaultDeleter(unsigned char*);
    // NOLINTEND
};

}; // namespace mce
