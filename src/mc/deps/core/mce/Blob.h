#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce {

class Blob {

public:
    using value_type     = uint8_t;
    using size_type      = size_t;
    using pointer        = value_type*;
    using iterator       = value_type*;
    using const_pointer  = value_type const*;
    using const_iterator = value_type const*;

    using delete_function = void (*)(pointer);

    struct Deleter {
    public:
        delete_function m_func;
        Deleter() { m_func = Blob::defaultDeleter; }
        void operator()(pointer x) const { m_func(x); }
    };

    using pointer_type = std::unique_ptr<value_type[], Deleter>;

    pointer_type mBlob; // this+0x0
    size_type    mSize; // this+0x10

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@XZ
     */
    MCAPI Blob();
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@_K\@Z
     */
    MCAPI Blob(size_type);
    /**
     * @symbol ??0Blob\@mce\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI Blob(class mce::Blob&&);
    /**
     * @symbol ?cbegin\@Blob\@mce\@\@QEBAPEBEXZ
     */
    MCAPI const_iterator cbegin() const;
    /**
     * @symbol ?cend\@Blob\@mce\@\@QEBAPEBEXZ
     */
    MCAPI const_iterator cend() const;
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
    MCAPI static void defaultDeleter(pointer);
    // NOLINTEND
};

}; // namespace mce
